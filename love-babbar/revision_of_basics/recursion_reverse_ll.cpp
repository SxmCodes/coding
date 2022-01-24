// Linked List reverse by recursion.
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
// Simple Linked list reversion.
/*
node *reverse_ll_ite(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}
*/
/*
This is also a way but it will print without space between the characters.
void reverse_ll_rec(node* head){
    if(head==NULL){
        return;
    }
    reverse_ll_rec(head->next);
    cout << head->data;
}
*/
node *reverse_ll_rec (node* head){
    // Cornor thing.
    if(head==NULL|| head->next==NULL){
        return head;
    }
    // We will start recursion from 2nd element in linked list. Newhead is the last element in linked list which would be head after reversion.
    node *newHead = reverse_ll_rec(head->next);
    // headnext will point to the second element in linked list.
    node *headNext = head->next;
    // We will change the connection between them.
    headNext->next = head;
    // The head will point to NULL.
    head->next = NULL;
    // We will get the final linked list.
    return newHead;
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
    cout << " Normal Linked List." << endl;
    // display(head);

    cout << " Reversed Linked List." << endl;
    reverse_ll_rec(head);

    // Used in normal reverse function.
    // node *newhead = reverse_ll_ite(head);
    // display(newhead);
    return 0;
}