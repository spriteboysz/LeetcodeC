/**
 * Author: Deean
 * Date: 2022-10-22 23:17
 * FileName: common/queue.h
 * Description: 
 */

#ifndef COMMON_QUEUE_H_
#define COMMON_QUEUE_H_

#include <stdbool.h>

#ifndef QUEUE_INIT_SIZE
#define QUEUE_INIT_SIZE 64
#endif

struct Queue {
    int front, rear, size;
    void **array;
};

struct Queue *queueMake();
void queueFree(struct Queue *q);

bool queueIsEmpty(struct Queue *q);
void queueOffer(struct Queue *q, void *e);
void *queuePoll(struct Queue *q);

#endif /* COMMON_QUEUE_H_ */
