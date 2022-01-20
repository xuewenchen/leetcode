#include<stdio.h>

void find(int * num, int length, int target);

int main() {

    int nums [] = {1, 2, 3, 4};
    int length = 4;
    int target = 6;
    find(nums, length, target);

    return 0;
}

void find(int * num, int length, int target) {
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if ( (num[i] + num[j]) == target ) {
                printf("indexa = %d, indexb = %d\n", i, j);
                return;
            }
        }
    }
    return;
}
