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

bool detectLoop(node* head){
    // Common sense thing :-
    if(!head){
        return false;
    }
    // Logic :- We will find if there is any character which is traversed 2 times, if there is that character then we will do this thing.
    unordered_map<node*, int> map;
    while(head){
        // If there is no head we will make it to 1.
        if(!map[head]){
            map[head] = 1;
            // We will iterate to see that if there is any other number with loop.
            head = head->next;
        }
        else{
            return true;
        }
    }
    // If nothing is there, we will return false.
    return false;
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