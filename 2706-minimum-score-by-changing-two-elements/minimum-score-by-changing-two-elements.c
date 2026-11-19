int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);
}
int minimizeSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    int n = numsSize;

    int a = nums[n - 1] - nums[2];
    int b = nums[n - 2] - nums[1];
    int c = nums[n - 3] - nums[0];

    int ans = a;
    if (b < ans) ans = b;
    if (c < ans) ans = c;

    return ans;
}
