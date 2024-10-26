#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// void arrfunc(int* array){
//     for (int i = 0; i < 5; i++){
//         printf("%d\n",*(array + i));
//     }
//     // array[0] = 0; imp that ek baar je function me array ki value change ki toh woh original memory address me bhi change hogi coz array is passed as a pointer in function
// }
// void multiarrfunc(int array[][]){
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("Column: %d Row: %d element: %d\n",i,j,array[i][j]);
//     }
// }
// }
// int main(){
// //array in function
// // int arr[] = {1,2,3,4,5};
// //     arrfunc(arr);
// // Multi-dimensional array in func 
// int multi_arr[][] = {
//     {1,2,3,},
//     {4,5,6},
//     {7,8,9}
// }; 
// multiarrfunc(multi_arr);
// }

 
void print(int arr[][])
{
    int i, j;
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
        printf("%d ", arr[i][j]);
}
 
int main()
{
    int arr[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr);
    return 0;
}