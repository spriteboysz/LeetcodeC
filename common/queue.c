/**
 * Author: Deean
 * Date: 2022-10-22 23:18
 * FileName: common/queue.c
 * Description: 
 */

#include "queue.h"
#include <assert.h> /* assert() */
#include <stdlib.h>

struct Queue *queueMake() {
    struct Queue *q = malloc(sizeof(struct Queue));
    q->front = q->rear = 0;
    q->size = QUEUE_INIT_SIZE;
    q->array = malloc(sizeof(void *) * q->size);
    return q;
}

void queueFree(struct Queue *q) {
    free(q->array);
    free(q);
}

bool queueIsEmpty(struct Queue *q) {
    return q->rear == q->front;
}

static void reverse(void *R[], int from, int to) {
    void *temp;
    for (int i = 0; i < (to - from + 1) / 2; ++i) {
        temp = R[from + i];
        R[from + i] = R[to - i];
        R[to - i] = temp;
    }
}

static void repair(struct Queue *q) {
    if (q->front == 0) return;
    reverse(q->array, 0, q->front-1);
    reverse(q->array, q->front, q->size-1);
    reverse(q->array, 0, q->size-1);
    q->front = 0;
    q->rear = q->size - 1;
}

static bool isFull(struct Queue *q) {
    return (q->rear + 1) % q->size == q->front;
}

void queueOffer(struct Queue *q, void *e) {
    if (isFull(q)) {
        repair(q);
        q->size += q->size >> 1; /* q->size * 1.5 */
        q->array = realloc(q->array, sizeof(void *) * q->size);
    }
    q->array[q->rear++] = e;
    if (q->rear == q->size) q->rear = 0;
}

void *queuePoll(struct Queue *q) {
    assert(!queueIsEmpty(q));
    void *e = q->array[q->front++];
    if (q->front == q->size) q->front = 0;
    return e;
}