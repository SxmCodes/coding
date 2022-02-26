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
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}

// Cornor case, when we would be deleting the first node in ll, then it would give us error as we are telling it to give the data of it's next node. We are going to operate with n-1 node in order to delete the nth node.

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;

    // To avoid memory leak.
    delete todelete;
}

void deletion(node* &head, int val){
    node *temp = head;
    while(temp->next->data !=val){
        // We would be deleting the connection between the 2 nodes.
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

int main()
{
    // Creating head of linked list.
    node *head = NULL;

    // Putting the values to it.
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // Deletion function.
    deletion(head, 5);

    // Displaying the linked list.
    display(head);

    return 0;
}