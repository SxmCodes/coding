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

node* removeDuplicates(node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    // We will make a set and then put the values in it and then we will find.
    set<int> s;
    // Next is head initialy and we will do something with prev.
    node *Next = head;
    node *prev;

    while(Next!=NULL){
        if (s.find(Next->data) != s.end()){
            prev->next = prev->next->next;

            node *curr = Next;
            Next = prev->next;
            delete curr;
        }
        else{
            s.insert(Next->data);
            prev = Next;
            Next = Next->next;
        }
    }
    return head;
}

int main()
{

    return 0;
}