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

node *add_tail(node *&head)
{
    // Edge case.
    if (head->next == NULL)
    {
        head->data += 1;
        return head;
    }
    // null nahi hai
    node *sum = add_tail(head->next);
    head->data = head->data + (sum->data / 10);
    sum->data = sum->data % 10;
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

    add_tail(head);

    return 0;
}