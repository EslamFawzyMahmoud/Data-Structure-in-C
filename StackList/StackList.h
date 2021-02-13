//
// Created by we on 2/12/2021.
//

#ifndef DATASTRUCTURE_STACKLIST_H
#define DATASTRUCTURE_STACKLIST_H
#include <stdio.h>
#include <stdlib.h>

typedef int Stack_Entry;

struct StackNode{
    Stack_Entry Entry;
    struct StackNode *next;
};

struct StackList{
    struct StackNode *Top;
    int size;
};

void CreateStackList(StackList *pstack);

void PushStackList(StackList *pstack,Stack_Entry item);

void PopStackList(StackList *pstack,Stack_Entry *item);

void TopStackList(StackList *pstack,Stack_Entry *item);

int StackListEmpty(StackList *pstack);

int StackListFull(StackList *pstack);

void ClearStackList(StackList *pstack);

void DisplayStackList(Stack_Entry item);

void TraverseStackList(StackList *pstack,void (*pf)(Stack_Entry));

int StackListSize(StackList *);






#endif //DATASTRUCTURE_STACKLIST_H
