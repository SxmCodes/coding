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

void *circular_ll(node *head, int data)
{

    // Creating a ptr and configuring it.
    node *ptr = new node(10);
    ptr->data = data;
    ptr->next = head;

    if (head != NULL)
    {
        // Make first as last node.
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    else{
        ptr->next = ptr; // For first node.
    }
    head = ptr; 
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