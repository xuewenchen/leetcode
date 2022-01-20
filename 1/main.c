#include<stdio.h>

int * find(int * num, int length, int target, int * returnNums);

int main() {

    int nums [] = {1, 2, 3, 4};
    int length = 4;
    int target = 6;

    int returnNums[2] = {0};
    find(nums, length, target, returnNums);
    printf("indexa = %d, indexb = %d\n", returnNums[0], returnNums[1]);

    return 0;
}

int * find(int * num, int length, int target, int * returnNums) {
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if ( (num[i] + num[j]) == target ) {
                returnNums[0] = i;
                returnNums[1] = j;
                return returnNums;
            }
        }
    }
    return returnNums;
}
