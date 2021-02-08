//
// Created by we on 2/8/2021.
//

#include "StackArr.h"

void CreateStack(struct Stack *pstack){
    pstack->top=0;
}

void Push(Stack_Entry item,struct Stack *pstack){
    pstack->entry[pstack->top++]=item;
}

int StackFull(struct Stack *pstack){
    return pstack->top == MAXSIZE ;
}

void Pop(Stack_Entry *item,struct Stack *pstack){
    *item=pstack->entry[--pstack->top];
}

int StackEmpty(struct Stack *pstack){
    return pstack->top==0;
}

void StackTop(Stack_Entry *item,struct Stack *pstack){
    *item=pstack->entry[pstack->top-1];
}

int StackSize(struct Stack *pstack){
    return pstack->top;
}

void ClearStack(struct Stack *pstack){
    pstack->top=0;
}

void TraverseStack(struct Stack *pstack ,void (*pf)(Stack_Entry)){
    for (int i = pstack->top; i >0 ; i--) {
        (*pf)(pstack->entry[i-1]);
    }
}

void Display(Stack_Entry item){
    printf("Item = %d\n",item);
}

void StackTopUserLevel(Stack_Entry *pitem,struct Stack *pstack){
    Pop(pitem,pstack);

    Push(*pitem,pstack);
}

