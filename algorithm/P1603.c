/**
 * Author: Deean
 * Date: 2023-03-11 22:06
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

typedef struct {
    int b, m, s;
} ParkingSystem;


ParkingSystem *parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem *ret = malloc(sizeof(ParkingSystem));
    ret->b = big;
    ret->m = medium;
    ret->s = small;
    return ret;
}

bool parkingSystemAddCar(ParkingSystem *obj, int carType) {
    switch (carType) {
        case 1:
            if (obj->b > 0) {
                obj->b--;
                return true;
            }
            break;
        case 2:
            if (obj->m > 0) {
                obj->m--;
                return true;
            }
            break;
        case 3:
            if (obj->s > 0) {
                obj->s--;
                return true;
            }
            break;
    }
    return false;
}

void parkingSystemFree(ParkingSystem *obj) {
    free(obj);
}

int main() {
    ParkingSystem *obj = parkingSystemCreate(1, 1, 0);
    printf("%d\n", parkingSystemAddCar(obj, 1));
    printf("%d\n", parkingSystemAddCar(obj, 2));
    printf("%d\n", parkingSystemAddCar(obj, 3));
    printf("%d\n", parkingSystemAddCar(obj, 1));
    parkingSystemFree(obj);
    return 0;
}
