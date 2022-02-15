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

node *find_incertion(node *head1, node *head2)
{
    node *dummyNode = new node(-1);
    node *itr = dummyNode;
    node *c1 = head1;
    node *c2 = head2;
    set<int> set;
    while (c1 != NULL)
    {
        while (c2 != NULL)
        {
            if (c1->data == c2->data)
            {
                if (set.find(c1->data) == set.end())
                {
                    // Forming a link from dummyNode.
                    itr->next = new node(c1->data);
                    itr = itr->next;
                }
                set.insert(c1->data);
            }
            c2 = c2->next;
        }
        c1 = c1->next;
        c2 = head2;
    }
    return dummyNode->next;
}

int main()
{

    return 0;
}