/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* array=malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int leftproduct=1,rightproduct=1;
    for(int i=0;i<numsSize;i++){
        array[i]=leftproduct;
        leftproduct=leftproduct*nums[i];
    }
    for(int j=numsSize-1;j>=0;j--){
        array[j]=array[j]*rightproduct;
        rightproduct=rightproduct*nums[j];
    }
    return array;
}