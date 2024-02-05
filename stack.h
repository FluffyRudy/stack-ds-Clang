#ifndef _STACK_H
#define _STACK_H
#include <stdbool.h>
#include "node/node.h"
void push(struct Node**, int);
void pop(struct Node**);
void delete_stack(struct Node**);
bool is_empty(struct Node*);
void print_stack(struct Node*);
#endif 