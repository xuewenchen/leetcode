#include<stdio.h>
#include<stdlib.h>

bool diff(int* nums, int numsSize, int k);

int main() {
    int nums[] = {1, 2, 3, 1, 2, 3};
    int length = 6; 
    int k = 2; 

    // int nums[] = {1, 2, 3, 1};
    // int length = 4;
    // int k = 3;
     
    bool ok = diff(nums, length, k); 
    printf("%d\n", ok);

    return 0;
}


bool diff(int* nums, int numsSize, int k){
    for(int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                if (abs(i-j) <= k) {
                    return true;
                }
            }
        }
    }
    return false;
}

