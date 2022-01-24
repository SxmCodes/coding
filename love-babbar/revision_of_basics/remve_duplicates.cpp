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

void removeDuplicates(node *head)
{
    if (head == NULL || head->next == NULL)
        return;

    while (head->next != NULL)
    {
        if (head->data == head->next->data)
        {
            head->next = head->next->next;
        }
        else
            head = head->next;
    }
}
// Another function to solve same problem.
node *remove_duplicates(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        node *prev = head;
        node *curr = head->next;

        if (prev->data == curr->data)
        {
            node *temp = head;
            prev->next = curr->next;
            curr = curr->next;
            delete temp;
        }
    }
    return head;
}
node *removeDuplicatesUnsorted2(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    set<int> s;
    node *Next = head;
    node *prev;

    while (Next != NULL)
    {
        if (s.find(Next->data) != s.end())
        {
            prev->next = prev->next->next;

            node *curr = Next;
            Next = prev->next;
            delete (curr);
        }
        else
        {
            s.insert(Next->data);
            prev = Next;
            Next = Next->next;
        }
    }
    return head;
}
// This is for unsorted linked list.
node *removeDuplicatesUnsorted(node *head)
{
    unordered_set<int> k;
    int m = 0;
    node *curr = head;
    if (head->next == NULL)
        return head;
    while (curr != NULL)
    {
        k.insert(curr->data);
        if (curr->next == NULL)
            return head;
        else if (curr->next->next == NULL)
            m = 1;
        if (m == 1)
        {
            if (k.find(curr->next->data) != k.end())
                curr->next = NULL;
            else
                curr = curr->next;
        }
        else if (m == 0)
        {
            if (k.find(curr->next->data) != k.end())
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
    }
}
int main()
{

    return 0;
}