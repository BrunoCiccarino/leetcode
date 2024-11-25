int removeDuplicates(int* nums, int numsSize) {
    int j = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[j - 1] != nums[i]) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}