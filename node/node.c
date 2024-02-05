#include <stdlib.h>
#include <stdio.h>
#include "node.h"

struct Node *create_node(int data) 
{
    struct Node *temp;
    if ( (temp = malloc( sizeof(struct Node)) ) == NULL )
    {
       printf
        (
            "%s : at line %d :: %s\n",
            __FILE__,
            __LINE__,
            "NodeCreationFail: Failed to createlinked list"
        );
        return NULL;
    }
    temp->data = data;
    return temp;
}