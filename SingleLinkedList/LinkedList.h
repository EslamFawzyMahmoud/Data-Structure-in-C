//
// Created by we on 2/14/2021.
//

#ifndef DATASTRUCTURE_LINKEDLIST_H
#define DATASTRUCTURE_LINKEDLIST_H
#include <stdio.h>
#include <stdlib.h>

typedef int LinkedList_Entry;

struct listNode{
    LinkedList_Entry entry;
    listNode *next;
};

struct List{
    int size;
    listNode *head;
};

void CreateList(List *);

int ListEmpty(List *);

int ListSize(List *);

int ListFull(List *);

void ClearList(List *);

void TraverseList(List *,void (*Visit)(LinkedList_Entry));

void DisplayList(LinkedList_Entry );

int InsertList(List *,int,LinkedList_Entry );

void DeleteList(List *,int,LinkedList_Entry *);

void RetrieveList(List *,int,LinkedList_Entry *);

void ReplaceList(List *,int,LinkedList_Entry );


#endif //DATASTRUCTURE_LINKEDLIST_H
