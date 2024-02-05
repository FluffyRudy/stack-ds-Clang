#include "stack.h"
#include "node/node.h"
#include <stdio.h>
#include <stdlib.h>

void push(struct Node** stack, int data)
{
    struct Node* temp = create_node(data);
    temp->next = *stack;
    *stack = temp;
}

void pop(struct Node** stack)
{
    if (*stack != NULL)
    {
        struct Node* tail = *stack;
        *stack = (*stack)->next;
        free(tail);    
    }
}

bool is_empty(struct Node *stack)
{
    if (stack == NULL)
        return true;
    return false;
}

void delete_stack(struct Node** stack)
{
    while (*stack != NULL)
        pop(stack);
}

void print_stack(struct Node* stack)
{
    if (stack != NULL) 
    {
        struct Node *curr = stack;
        while (curr != NULL)
        {
            printf("%d -> ", curr->data);
            curr = curr->next;
        }
    }
    printf("NULL\n");
}