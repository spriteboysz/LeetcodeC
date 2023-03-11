/**
 * Author: Deean
 * Date: 2023-03-11 17:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

typedef struct Pos_ {
    int x;
    int y;
} Pos;

void process(Pos *pos, char ch, int index) {
    int tmpX = 0;
    int tmpY = 0;
    switch (ch) {
        case 'N':
            tmpY += 1;
            break;
        case 'S':
            tmpY += -1;
            break;
        case 'W':
            tmpX += -1;
            break;
        case 'E':
            tmpX += 1;
            break;
        default:
            return;
    }
    (pos + index)->x = (pos + index - 1)->x + tmpX;
    (pos + index)->y = (pos + index - 1)->y + tmpY;
}

// 排序，方便后面找到重复的，一次遍历
int cmp(const void *p1, const void *p2) {
    Pos pos1 = *(Pos *) p1;
    Pos pos2 = *(Pos *) p2;
    if ((pos1.x == pos2.x) && (pos1.y == pos2.y)) {
        return 0;
    }
    return ((pos1.x > pos2.x) || ((pos1.x == pos2.x) && (pos1.y > pos2.y))) ? 1 : -1;
}

bool isPathCrossing(char *path) {
    int size = strlen(path) + 1;
    Pos *pos = (Pos *) malloc(sizeof(Pos) * size);
    if (pos == NULL) return NULL;
    memset(pos, 0, sizeof(Pos) * size);
    for (int i = 0, j = 1; i < size - 1; i++, j++) {
        process(pos, path[i], j);
    }
    qsort(pos, size, sizeof(Pos), cmp);
    for (int i = 0; i < size - 1; i++) {
        if ((pos[i].x == pos[i + 1].x) && (pos[i].y == pos[i + 1].y)) {
            return true;
        }
    }
    return false;
}

int main() {
    int ans = isPathCrossing("NESWW");
    printf("%d\n", ans);
    return 0;
}
