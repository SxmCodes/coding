#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size, r, f;
    int *arr;
};
int isFull(struct Queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(struct Queue *q, int val){
    if(isFull(q)){
        cout << "This cannot be done. Sorry :(" << endl;
    }
    else{
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
}

int main()
{
    struct Queue q;
    q.r = q.f = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // You can also enqueue some elements as well, I am not doing that here because I have a lot of things to do and you were asking about this vdo, so I made this in hurry. You can DM me for queries.
    return 0;
}