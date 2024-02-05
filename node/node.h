#ifndef _NODE_H
#define _NODE_H
struct Node 
{
    int data;
    struct Node* next;
};
struct Node *create_node(int);
#endif