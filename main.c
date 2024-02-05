#include "node/node.h"
#include "stack.h"

int main(void)
{
    struct Node *stack = create_node(5);
    push(&stack, 5);
    push(&stack, 10);
    pop(&stack);
    print_stack(stack);
    delete_stack(&stack);
    return 0;
}
