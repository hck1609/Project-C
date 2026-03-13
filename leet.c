#include <stdio.h>
#include <conio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0;i<numsSize-1; i++){
        for(int j=i+1;j<numsSize;j++){
            if((nums[i]+nums[j]) == target){
                int* result=(int*)malloc(2*sizeof(int));
                result[0]=i;
                result[1]=j;
                *returnSize=2;
                return result;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
void main(){
    int nums[]={2,7,11,15},n;
    int *output;
    output=twoSum(nums,4,9,&n);
    output=(int*)realloc(output,n*sizeof(int));
    printf("%d %d\n",output[0],output[1]);
}
