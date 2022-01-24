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

node *reverse(node *head)
{
    if (head->next == NULL)
    {
        return head;
    }
    node *curr = head, *prev = NULL;

    if (curr->next != NULL)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
}

// node *addTwoLL(node *first, node *second)
// {
//     // first == head of first ll, second == head of second ll.
//     node *a = reverse(first);
//     node *b = reverse(second);

//     node *head = new node(0);

//     int carry = 0;
//     node *curr = head;

//     while (a != NULL || b != NULL)
//     {
//         // if a == null != 0 then print value of a and b.
//         int x = (a == NULL) ? 0 : a->data;
//         int y = (b == NULL) ? 0 : b->data;

//         int sum = x + y + carry;
//         carry = sum / 10;
//         sum %= 10;

//         curr->next = new node(sum);
//         curr = curr->next;

//         if (a != NULL)
//             a = a->next;
//         if (b != NULL)
//             b = b->next;
//     }
//     if (carry)
//         curr->next = new node(carry);
//     return reverse(head->next);
// }

// This is the revision of the first code. :)
node *addToLL(node *first, node *second)
{
    node *a = reverse(first);
    node *b = reverse(second);

    node *head = new node(0);

    int carry = 0;
    node *curr = head;

    while (a != NULL || b != NULL)
    {
        int x = (a == NULL) ? 0 : a->data;
        int y = (b == NULL) ? 0 : a->data;

        int sum = x + y + carry;
        carry = sum / 10;
        sum %= 10;

        curr->next = new node(sum);
        curr = curr->next;

        if (a != NULL)
        {
            a = a->next;
        }
        if (b != NULL)
        {
            b = b->next;
        }
    }
    if (carry)
    {
        curr->next = new node(carry);
        return reverse(head->next);
    }
}

int main()
{

    return 0;
}