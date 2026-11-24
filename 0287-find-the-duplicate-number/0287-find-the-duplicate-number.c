int findDuplicate(int* nums, int numsSize) {
    int visited[numsSize];int val=0;
    for (int i=0;i<numsSize;i++){
        visited[i]=0;
    }
    for (int i=0;i<numsSize;i++){
        val=nums[i];
        if(visited[val]==1){
            return nums[i];
        }
        visited[val]=1;
    }
    return 0;
}