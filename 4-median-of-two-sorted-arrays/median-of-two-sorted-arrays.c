double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int size=nums1Size+nums2Size;
    int arr[size],i=0,j=0,k=0;
    while((j < nums1Size)&&(k < nums2Size)){
        if(nums1[j]<= nums2[k]){
            arr[i++]=nums1[j++];
        }
        else{
            arr[i++]=nums2[k++];
        }
    }
    while (j < nums1Size) arr[i++] = nums1[j++];
    while (k < nums2Size) arr[i++] = nums2[k++];
    float med;
    if(size%2==1) {
        med = arr[(size/2)];
        
    }
    else {
        med=(arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }
    return med;    
}