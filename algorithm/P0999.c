/**
 * Author: Deean
 * Date: 2023-03-15 21:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numRookCaptures(char **board, int boardSize, int *boardColSize) {
    int sum = 0;
    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardColSize[i]; j++) {
            if (board[i][j] == 'R') {
                for (int k = 0; k < 4; k++) {
                    int x = i, y = j;
                    while (true) {
                        x += dx[k];
                        y += dy[k];
                        if (x < 0 || x >= boardSize || y < 0 || y >= boardSize || board[x][y] == 'B')
                            break;
                        if (board[x][y] == 'p') {
                            sum++;
                            break;
                        }
                    }
                }
                return sum;
            }
        }
    }
    return 0;
}

int main() {
    return 0;
}
