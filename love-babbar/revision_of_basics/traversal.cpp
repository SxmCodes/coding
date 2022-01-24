#include <bits/stdc++.h>
using namespace std;

// Apna College wale.
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


// Apna College
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

// Apna College to display the linked list.
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
// Apna College, insertion at head.
void insertionAtHead(node *&head, int val)
{
    node *n = new node(val);
    // This will point to the first node.
    n->next = head;
    // N will be ours first node.
    head = n;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}


int main()
{
    // Making an empty linked list.
    node *head = NULL;

    // Putting the values to it.
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // Insertion at Head.
    insertionAtHead(head, 6);
    insertionAtHead(head, 7);
    insertionAtHead(head, 8);
    insertionAtHead(head, 9);
    insertionAtHead(head, 10);

    // Searching for the value.
    // 0 means nahi milla, and 1 means milla.
    cout << search(head, 7) << endl;
    cout << search(head, 8) << endl;
    cout << search(head, 9) << endl;
    cout << search(head, 90) << endl;

    // Displaying the final linked list.
    display(head);
    return 0;
}