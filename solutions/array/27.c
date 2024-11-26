int removeElement(int* nums, int numsSize, int val) {
    int zero = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[zero] = nums[i];
            zero++;
        }
    }
    return zero;
}