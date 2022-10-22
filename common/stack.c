/**
 * Author: Deean
 * Date: 2022-10-22 23:17
 * FileName: common/stack.c
 * Description: 
 */

#include "stack.h"
#include <assert.h> /* assert() */
#include <stdlib.h>

context stackMake(void) {
    context c;
    c.stack = NULL;
    c.size = c.top = 0;
    return c;
}

void *stackPush(context *c, size_t size) {
    assert(size > 0);
    if (c->top + size >= c->size) {
        if (c->size == 0) c->size = STACK_INIT_SIZE;
        while (c->top + size >= c->size) {
            c->size += c->size >> 1; /* c->size * 1.5 */
        }
        c->stack = (char *)realloc(c->stack, c->size);
    }

    c->top += size;
    return c->stack + c->top - size;
}

void *stackPop(context *c, size_t size) {
    assert(size > 0);
    c->top -= size;
    return c->stack + c->top;
}