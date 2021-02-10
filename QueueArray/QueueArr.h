//
// Created by we on 2/9/2021.
//

#ifndef DATASTRUCTURE_QUEUEARR_H
#define DATASTRUCTURE_QUEUEARR_H

#include <stdio.h>
#include <stdlib.h>

typedef int Queue_Entry;
#define QueueMaxSize 10

struct Queue{
    int entry[QueueMaxSize];
    int size;
    int front;
    int rear;
};

void CreateQueue(Queue *pqueue);

void Append(Queue *pqueue,Queue_Entry item);

void Serve(Queue *pqueue,Queue_Entry *item);

int QueueEmpty(Queue *pqueue);

int QueueFull(Queue *pqueue);

int QueueSize(Queue *pqueue);

void QueueClear(Queue *pqueue);

void DisplayQueue(Queue_Entry item);

void TraverseQueue(Queue *pqueue,void (*pf)(Queue_Entry));

#endif //DATASTRUCTURE_QUEUEARR_H
