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

class Solution
{
public:
    node *reverse(node *head)
    {
        node *curr = head;
        node *prev = NULL;

        while (curr != NULL)
        {
            node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    //Function to add two numbers represented by linked list.
    node *addTwoLists(node *first, node *second)
    {
        node *a = reverse(first);
        node *b = reverse(second);

        node *head = new node(0);

        int carry = 0;
        node *curr = head;

        while (a != NULL || b != NULL)
        {
            int x = (a == NULL) ? 0 : a->data;
            int y = (b == NULL) ? 0 : b->data;

            int sum = x + y + carry;
            carry = sum / 10;
            sum %= 10;
            

            curr->next = new node(sum);
            curr = curr->next;

            if (a != NULL)
                a = a->next;
            if (b != NULL)
                b = b->next;
        }

        if (carry)
            curr->next = new node(carry);

        return reverse(head->next);
    }
};
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

    return 0;
}