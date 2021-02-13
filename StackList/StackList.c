//
// Created by we on 2/12/2021.
//
#include "StackList.h"

void CreateStackList(struct StackList *ps){
        ps->Top=NULL;
        ps->size=0;
}

void PushStackList(struct StackList *pstack,Stack_Entry item){
    /*malloc--> got to the memory and and find an free space and a=the same size you wanted
     *
     * and return the pointer (stack node)
     * sizeof--> give the parameter stack node bacause i don't know the value i want to store in memory
     *
    */
    struct StackNode *pnode=(struct StackNode *)malloc(sizeof(struct StackNode));
    pnode->Entry=item;
    pnode->next=pstack->Top;
    pstack->Top=pnode;
    pstack->size++;
}

void TopStackList(struct StackList *pstack,Stack_Entry *item){
    *item=pstack->Top->Entry;

}

void PopStackList(struct StackList *pstack,Stack_Entry *item){
    struct StackNode *pn;
    *item=pstack->Top->Entry;
    pn=pstack->Top;
    pstack->Top=pstack->Top->next;
    free(pn);
    pstack->size--;
}

int StackListEmpty(struct StackList *pstack){
    return pstack->Top=NULL;
}

int StackListFull(struct StackList *pstack){
    return 0;
}

void ClearStackList(struct StackList *pstack){
    struct StackNode *pn=pstack->Top;
    struct StackNode *qn=pstack->Top;
    while (pn){
        pn=pn->next;
        free(qn);
        qn=pn;
    }
    pstack->Top=NULL;
    pstack->size=0;
}

void DisplayStackList(Stack_Entry item){
    printf("Item = %d\n",item);
}

void TraverseStackList(struct StackList *pstack,void (*pf)(Stack_Entry)){
    struct StackNode *pn=pstack->Top;
    while (pn){
        (*pf)(pn->Entry);
        pn=pn->next;
    }
}

int StackListSize(struct StackList *pstack){
    return pstack->size;
}









