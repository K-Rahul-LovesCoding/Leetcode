/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* array=malloc((numsSize*2)*sizeof(int));
    *returnSize=numsSize*2;
    int k=0;
    for(int i=0;i<numsSize*2;i++){
        if(i>=numsSize){
            array[i]=nums[k];
            k++;
        }
        else{
            array[i]=nums[i];
        }
    }
    return array;
}