#include <bits/stdc++.h>
using namespace std;
 
 struct Node{
     int data;
     struct Node* next;
 };

 void linkedListTraversal(struct Node *ptr)
 {
     while (ptr != NULL)
     {
         printf("Element: %d\n", ptr->data);
         ptr = ptr->next;
     }
 }

struct Node* deletetionatBegin(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node* deletionIndex(struct Node *head, int index){
    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 0; i < index - 1;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node* deletionIndex(struct Node *head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0;i<index-1;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node* deletionLast(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!= NULL){
        q = q->next;
        p = p->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main(){
    
    return 0;
}