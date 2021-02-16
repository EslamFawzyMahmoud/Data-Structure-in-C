//
// Created by we on 2/14/2021.
//
#include "LinkedList.h"

void CreateList(struct List *pl){
    pl->size=0;
    pl->head=NULL;
}

int ListEmpty(struct List *pl){
    return (pl->size==0);
}

int ListSize(struct List *pl){
    return pl->size;
}

int ListFull(struct List *pl){
    return 0;
}

void ClearList(struct List *pl){
    struct listNode *ln;
    while (!pl->head){
        ln=pl->head->next;
        free(pl->head);
        pl->head=ln;
    }
    pl->size=0;
}

void TraverseList(struct List *pl,void (*Visit)(LinkedList_Entry)){
    struct listNode *ln=pl->head;
    while (ln){
        (*Visit)(ln->entry);
        ln=ln->next;
    }
}

void DisplayList(LinkedList_Entry item){
    printf("Item= %d\n",item);
}

int InsertList(struct List *pl,int pos,LinkedList_Entry item){
    struct listNode *p,*q;
    int i=0;
    if (p=(struct listNode *)malloc(sizeof(struct listNode))){
        p->entry=item;
        p->next=NULL;
        if(pos==0){
            p->next=pl->head;
            pl->head=p;
        } else{
            for (q=pl->head;i<pos-1;i++){
                q=q->next;
            }
            p->next=q->next;
            q->next=p;
        }
        pl->size++;
        return 1;
    } else
        return 0;
}

void DeleteList(struct List *pl,int pos,LinkedList_Entry *pe ){
    int i;
    struct listNode *tmp,*q;
    if(pos==0){
        *pe=pl->head->entry;
        tmp=pl->head->next;
        free(pl->head);
        pl->head=tmp;
    } else{
        for (i=0,q=pl->head;i<pos-1;i++)
            q=q->next;
        *pe=q->next->entry;
        tmp=q->next->next;
        free(q->next);
        q->next=tmp;
    }
    pl->size--;
}

void RetrieveList(struct List *pl,int pos,LinkedList_Entry *pe){
    int i;
    struct listNode *q;
    for (i=0,q=pl->head;i<pos;i++)
        q=q->next;
    *pe=q->entry;
}

void ReplaceList(struct List *pl,int pos,LinkedList_Entry pe) {
    int i;
    struct listNode *q;
    for (i=0,q=pl->head;i<pos;i++)
        q=q->next;
    q->entry=pe;
}

