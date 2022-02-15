#include <bits/stdc++.h>
using namespace std;

//    It takes an array, size of array and value which have to be inserted.
void insert(int array[], int size, int value)
{
    size += 1;
    array[size] = value;
    int i = size;
    while(i>1){
        int parent = i / 2;
        if(array[parent] <array[i]){
            swap(parent, i);
            i = parent;
        }
        return;
    }
}

int main()
{
    /*
        Heap is a data structure which is a complete binary tree which follows heap's property.

        A complete binary tree is a tree which has at most 2 children and any 1 leaf node.

        Max heap and min heap :-
            1) Max heap = It is a type of heap which has the value greater than the child nodes.
            2) Min heap = IT is a type of heap which has the value lesser than the child nodes.
            3)  A single node is max and min heap in itself.

        We need to make heap as arrray not as binary tree. We would not call it with nodes.

        To find Parent = index of that node / 2.
        To find Left Child = 2 x index of that node.
        To find right Child = 2 x i + 1.

        Parent case is not valid in case of root node. Leaf nodes should have NULL.

                INSERTION.
        We can push the node inside the array first and then push through the BT and compare it with the parent node if it's smaller than the parent node then we will let it go but if it's value is bigger than parent node then we have to swap the value.
    */

   int array[100]={20,30,40,50,60,70,80};

   insert(array, 100, 100);
   return 0;
}