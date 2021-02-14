//
// Created by we on 2/13/2021.
//

#ifndef DATASTRUCTURE_QUEUELIST_H
#define DATASTRUCTURE_QUEUELIST_H
#include <stdio.h>
#include <stdlib.h>
typedef int QueueLinked_Entry;

struct QueueNode{
    QueueLinked_Entry entry;
    QueueNode *next;
};

struct QueueList{
    QueueNode *front;
    QueueNode *rear;
    int size;
};

void CreateQueueList(QueueList *pq);

void PushQueueList(QueueList *,QueueLinked_Entry );

void PopQueueList(QueueList *,QueueLinked_Entry *);

int QueueListEmpty(QueueList *);

int QueueListFull(QueueList *);

int QueueListSize(QueueList *);

void ClearQueueList(QueueList *);

void TraverseQueueList(QueueList *,void (*)(QueueLinked_Entry));

void DisplayQueueList(QueueLinked_Entry );


#endif //DATASTRUCTURE_QUEUELIST_H
