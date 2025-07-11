#include <stdlib.h> 

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *resposta = (int*)malloc(8);
   for(int i = 0; i < numsSize; i++){
    int aux = nums[i];
    for(int j = 0; j < numsSize; j++){
        if(aux + nums[j] == target && j != i ){
           *returnSize = 2;
           
            resposta[0] = i;
            resposta[1] = j; 
        }

    }
    
   }

    return resposta;

}
