#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node * next;
};

void sortedInsertion(Node ** H, int x){
    // Node * end = NULL;
    Node * t, *q = NULL, *p = *H;
    
    t = new Node;
    t->data = x;
    t->next = NULL;

    if(*H == NULL){
        *H = t;
    }
    else
    {
        while (p && p->data<x)
        {
            q = p;
            p = p->next;
        }
        if(p == *H){
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;   
        }
         
    }
    
}
Node * Serach(Node * p, int key){
    while (p!=NULL)
    {
        if(key == p->data) return p;
        p  = p->next;
    }
    return NULL;
    
}


// int main(int argc, const char** argv) {
//     return 0;
// }