#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void insertNode(Node **head, int x)
{
    Node *ptr = new Node;
    ptr->data = x;
    ptr->next = NULL;
    if (*head == NULL)
    {
        *head = ptr;
    }
    else
    {
        Node *temp;
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void mergeLL(Node **head1, Node **head2)
{
    Node *ptr;
    ptr = *head1;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = *head2;
}

void display(Node **head)
{
    Node *temp;
    temp = *head;
    if (temp == NULL)
    {
        cout << " NULL \n";
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
            {
                cout << "->";
            }
            temp = temp->next;
        }
    }
}

void sortedLinkedList(Node **head, Node **head1)
{
    mergeLL(head, head1);
    vector<int> v;
    Node *ptr = *head;

    while (ptr != NULL)
    {
        v.push_back(ptr->data);
        ptr = ptr->next;
    }
    sort(v.begin(), v.end());
    int index = 0;
    ptr = *head;

    while (ptr != NULL)
    {
        ptr->data = v[index];
        index++;
        ptr = ptr->next;
    }
    display(head);
}

int main()
{
    // Given linked list, L1
    Node *head1 = NULL;
    insertNode(&head1, 3);
    insertNode(&head1, 5);
    insertNode(&head1, 1);

    // Given linked list, L2
    Node *head2 = NULL;
    insertNode(&head2, 6);
    insertNode(&head2, 2);
    insertNode(&head2, 4);
    insertNode(&head2, 9);
    // Function Call
    sortedLinkedList(&head1, &head2);
    return 0;
}