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
    // If there is no node in linked list.
    if (head == NULL)
    {
        // We will make n to head and make a linked list.
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
    // Here, ptr is equal to temp.
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *reverse_ll(node *&head)
{

    // Making the varibles.
    node *prevptr = NULL;
    node *current = head;
    node *nextptr;

    while (current != NULL)
    {
        // Make nextptr as the next of head (after current).
        nextptr = current->next;
        // Changing the link towards prev node (NULL).
        current->next = prevptr;

        // We will iterate all the pointers.
        prevptr = current;
        current = nextptr;
        // We will not iterate nextptr because we are doing it at line 27 again and again.
    }
    // PrevPtr is our new head, we will return this.
    return prevptr;
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

    // Displaying linked list.
    display(head);

    // Creating new head by reversing the prev node. New head is prev in prev case.
    node *newhead = reverse_ll(head);
    display(newhead);
    return 0;
}