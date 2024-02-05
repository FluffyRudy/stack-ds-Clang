# Stack Implementation in C

This repository contains a simple implementation of a stack data structure in C.

## Files

- `node.h` and `node.c`: These files contain the definition and functions for a node in the stack.
- `stack.h` and `stack.c`: These files contain the definition and functions for the stack data structure.
- `main.c`: This file contains a simple program that demonstrates the use of the stack.
- `Makefile`: This file contains build instructions for the project.

## Usage

The main program creates a stack, pushes two integers onto it, pops one off, prints the stack, and then deletes the stack. Here's an example:

```c
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
```

## Building

The project includes a Makefile for building the program. Here are the commands you can use:

- `make`: This will compile the `main.c`, `stack.c`, and `node/node.c` files with `-Wall` and `-Wextra` flags, and link the resulting object files into an executable named `output`.
- `make node.o`: This will compile the `node/node.c` file into an object file.
- `make clean`: This will remove all object files and the `output` executable.

After building the program, you can run it with:

```bash
./output
