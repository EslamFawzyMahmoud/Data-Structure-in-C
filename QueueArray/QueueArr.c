//
// Created by we on 2/9/2021.
//

#include "QueueArr.h"

void CreateQueue(struct Queue *pqueue){
    pqueue->front = 0;
    pqueue->rear = -1;
    pqueue->size = 0;
}

void Append(struct Queue *pqueue,Queue_Entry item){

    pqueue->rear = (pqueue->rear+1) % QueueMaxSize;
    pqueue->entry[pqueue->rear]=item;
    pqueue->size++;
}

void Serve(struct Queue *pqueue,Queue_Entry *item){
    *item = pqueue->entry[pqueue->front];
    pqueue->front = (pqueue->front+1) % QueueMaxSize;
    pqueue->size--;
}

int QueueEmpty(struct Queue *pqueue){
    return !pqueue->size;
}

int QueueFull(struct Queue *pqueue){
    return (pqueue->size == QueueMaxSize);
}

int QueueSize(struct Queue *pqueue){
    return pqueue->size;
}

void QueueClear(struct Queue *pqueue){
    pqueue->size=0;
    pqueue->front=0;
    pqueue->rear=-1;
}

void DisplayQueue(Queue_Entry item){
    printf("item = %d\n",item);
}

void TraverseQueue(struct Queue *pqueue,void (*pf)(Queue_Entry)){
    for (int pos = pqueue->front,s=0; s <pqueue->size ; s++) {
        (*pf)(pqueue->entry[pos]);
        pos= (pos+1)%QueueMaxSize;
    }
}


