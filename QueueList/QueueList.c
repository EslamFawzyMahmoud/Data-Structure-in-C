//
// Created by we on 2/13/2021.
//
#include "QueueList.h"

void CreateQueueList(struct QueueList *pq){
    pq->size=0;
    pq->front=NULL;
    pq->rear=NULL;
}

void PushQueueList(struct QueueList *pq ,QueueLinked_Entry item){
    struct QueueNode *pn=(struct QueueNode *)malloc(sizeof(struct QueueNode));
    pn->next=NULL;
    pn->entry=item;
    if(!pq->rear)// check if queue is empty
        pq->front=pn;
    else
        pq->rear->next=pn;
    pq->rear=pn;
    pq->size++;
}

void PopQueueList(struct QueueList *pq,QueueLinked_Entry *pe){
    struct QueueNode *pn=pq->front;
    *pe=pn->entry;
    pq->front=pn->next;
    free(pn);
    if(!pq->front)
        pq->rear=NULL;
    pq->size--;
}

int QueueListEmpty(struct QueueList *pq){
    return !pq->front;
}

int QueueListFull(struct QueueList *pq){
    return 0;
}

int QueueListSize(struct QueueList *pq){
    return pq->size;
}

void ClearQueueList(struct QueueList *pq){
    while (!pq->front){
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size;
}

void TraverseQueueList(struct QueueList *pq,void (*pf)(QueueLinked_Entry)){
    for (struct QueueNode *pn=pq->front;pn;pn=pn->next) {
        (*pf)(pn->entry );
    }
}

void DisplayQueueList(QueueLinked_Entry item) {
    printf("Item = %d\n",item);
}