#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

/* This is also known as Floyd's Algorithm (hare and tortoise algo). This is very important question as well.

Logic --> We will make two variables, hare and turtoise. Hare will move 2 steps and turtoise will move 1 step. If they both met at a place then we can say that's there is a fucking loop. 
*/

// We also have to form a mf cycle in linked list.
// This will make a cycle on that position.

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    // Cycle will start from this startNode.
    node *startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detect_cycle(node *head)
{
    // Turtoise = Slow poitner.
    node *slow = head;
    // Hare = Fast pointer.
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        // Moving with 10km/h.
        slow = slow->next;
        // Moving with 20kh/h.
        fast = fast->next->next;
        if (slow == head)
        {
            return true;
        }
    }
    return false;
}
// bool delete_cycle(node* head){

// }

int main()
{
    node *head = NULL;
    // Putting the values to it.
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    return 0;
}