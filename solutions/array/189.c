void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int rotated[numsSize];
    
    for (int i = 0; i < numsSize; i++) {
        rotated[(i + k) % numsSize] = nums[i];
    }

    for (int i = 0; i < numsSize; i++){
        nums[i] = rotated[i];
    }
}