//
// Created by we on 2/8/2021.
//

#ifndef DATASTRUCTURE_STACKARR_H
#define DATASTRUCTURE_STACKARR_H
#define MAXSIZE 100
#include <stdio.h>
#include <stdlib.h>
typedef int Stack_Entry;


struct Stack{
    Stack_Entry entry[MAXSIZE];
    Stack_Entry top;
};

void Push(Stack_Entry item,Stack *pstack);

void CreateStack(Stack *pstack);

int StackFull(Stack *pstack);

void Pop(Stack_Entry *item,Stack *pstack);

int StackEmpty(Stack *pstack);

void StackTop(Stack_Entry *item,Stack *pstack);

int StackSize(Stack *pstack);

void ClearStack(Stack *pstack);

void TraverseStack(Stack *pstack ,void (*pf)(int));

void Display(Stack_Entry item);

void StackTopUserLevel(Stack_Entry *pitem,Stack *pstack);

#endif //DATASTRUCTURE_STACKARR_H
