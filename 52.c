#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void TwoSum(int arr[],int *TARGET){
    
printf("Array: {");
for (int i = 0; i < 5; i++)
{
    (i == 4) ? printf("%d}\n",arr[4]) : printf("%d,",arr[i]); 
}

printf("Target: %d\n",*TARGET);

for(int i=0; i<5 ;i++){
  for(int j=0; j<5 ;j++){
    if ((arr[i] + arr[j]) == *TARGET){
        printf("Indices are: [%d,%d] \n",i+1,j+1);
    }
  }     
}
}
int main(){
int nums[] = {3,4,9,6,4};
int target = 8;
TwoSum(nums, &target);
}
