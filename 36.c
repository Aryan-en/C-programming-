#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void arrrev(int* elements){
int temp1 = *(elements);
int temp2 = *(elements + 1);
int temp3 = *(elements + 2);
*(elements) = *(elements + 6); // 1 & 67
*(elements + 1) = *(elements + 5); // 2 & 6
*(elements + 2) = *(elements + 4);// 3 & 5
*(elements + 6) = temp1;
*(elements + 5) = temp2;
*(elements + 4) = temp3;
for (int i = 0; i < 7; i++){
    printf("%d ", *(elements + i));  
}
}
int main(){
int arr[] = {1,2,3,4,5,6,67};
printf("Initial array: \n");
for(int i=0; i < (sizeof(arr)/sizeof(arr[0])); i++){
    printf("%d ", arr[i]);
}

printf("\nReversed array: \n");
arrrev(arr);
}
