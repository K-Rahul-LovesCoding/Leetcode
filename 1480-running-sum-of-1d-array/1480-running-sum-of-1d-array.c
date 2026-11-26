int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* array=malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int sum=0;
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<=i;j++){
            sum=sum+nums[j];
        }
        array[i]=sum;
        sum=0;
    }
    return array;
}