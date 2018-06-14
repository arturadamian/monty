# 0x18. C - Stacks, Queues - LIFO, FIFO

## The Monty Language Interpreter
The purpose of this project is to learn about stacks and queues and how to implement it by using monty scripts (the files that end in .m).


## Environment
Ubuntu 14.04 LTS using Vagrant in VirtualBox


## How to install
1. Clone the repository below

`https://github.com/vmdn23/monty`

2. Compile the program again (optional)

`gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

3. Run the program with the following usage:
   - Usage: `monty <file.m>`
      - ex: `./monty ./bytecodes/01.m`


## Opcodes (op_OOO.c files)
|  Opcode Name  | Opcode Description |
|-------------- |------------------- |
| push          | Pushes an element on to the stack |
| pall          | Prints all the values on the stack, starting from the top |
| pint          | Prints the value at the top of the stack |
| pop           | Removes the top element of the stack |
| swap          | Swaps the top two elements of the stack |
| add           | Adds the top two elements of the stack |
| nop           | Doesn't do anything* |
| sub           | Subtracts the top element of the stack from the second top element of the stack |
| div           | Divides the second top element of the stack by the top element of the stack |
| mul           | Multiplies the second top element of the stack with the top element of the stack |
| mod           | Computes the modulus of the second top element of the stack with the top element of the stack |
| comments (#)  | Adds a # to the beginning of a line to put a comment in the file |
| pchar         | Prints the char at the top of the stack |
| pstr          | Prints the string starting at the top of the stack |


## Example Usage
```
USER$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$

USER$ ./monty ./bytecodes/000.m
3
2
1
0
6
5
4
3
2
1
0
USER$
```


### Other Files
File Name | Description
--- | ---
`bytecodes/` | Monty byte codes used to test opcode functions
`monty.h` | Header file
`_isdigit.c` | Helper function that checks if an element is a digit
`free.c` | Helper function to free all memory
`get_op_func.c` | Returns the correct opcode for usage
`tokenize.c` | Helper function that tokenizes a string
`main.c` | Main file for the program


### Authors
* Artur Adamian | [GitHub](https://github.com/arturadamian) | [Twitter](https://twitter.com/arturadamian)
* Victor Nguyen | [GitHub](https://github.com/vmdn23) | [Twitter](https://twitter.com/victormdnguyen)
