/**
 * Author: Deean
 * Date: 2022-10-22 23:16
 * FileName: common/stack.h
 * Description: 
 */

#ifndef COMMON_STACK_H_
#define COMMON_STACK_H_

#include <string.h>
#include <assert.h> /* assert() */
#include <stdlib.h>

#ifndef STACK_INIT_SIZE
#define STACK_INIT_SIZE 64
#endif

#define PUSH(c, v)        do { *(context *)stackPush(c, sizeof(context)) = (v);} while (0)
#define PUSHC(c, v)       do { *(char *)stackPush(c, sizeof(char)) = (v); } while (0)
#define PUSHI(c, v)       do { *(int *)stackPush(c, sizeof(int)) = (v); } while (0)
#define PUSHD(c, v)       do { *(double *)stackPush(c, sizeof(double)) = (v); } while (0)
#define PUSHCP(c, v)      do { *(char **)stackPush(c, sizeof(char*)) = (v); } while (0)

#define PUSHS(c, s, len)  do { if (len > 0) memcpy(stackPush(c, len), s, len); } while (0)

typedef struct {
    char *stack;
    size_t size, top;
} context;

context stackMake(void);
void *stackPush(context *c, size_t size);
void *stackPop(context *c, size_t size);

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

#endif /* COMMON_STACK_H_ */
