int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);

}
int minimizeSum(int* nums, int numsSize) {
    int a,b,c;
    qsort(nums, numsSize, sizeof(int), compare);
    a= nums[numsSize-1]-nums[2];
    b= nums[numsSize-2]-nums[1];
    c= nums[numsSize-3]-nums[0];
    if(a<b && a<c){
        return a;
    }
    else if(b<c){
        return b;
    }
    else{
        return c;
    }
    
}
