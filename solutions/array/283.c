void moveZeroes(int* nums, int numsSize) {
    int l = 0;
    int temp;
    for (int r = 0; r < numsSize; r++) {
        if (nums[r]) {
            temp = nums[l];   
            nums[l] = nums[r]; 
            nums[r] = temp; 
            l++;
        } 
    }
}