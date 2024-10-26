#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){
// Dynamic Memory allocation
//malloc use
// int* ptr;
// ptr = (int*)malloc(4*sizeof(int));
// for (int i = 0; i < 4; i++)
// {
//     printf("Emter a value: ");
//     scanf("%d", &ptr[i]);
// }
// for (int i = 0; i < 5; i++)
// {
//     printf("Value at index %d: %d\n", i, ptr[i]);
// }
//calloc use
int* ptr;
ptr = (int*)calloc(4, sizeof(int));
for (int i = 0; i < 4; i++)
{
    printf("Enter a value: ");
    scanf("%d", &ptr[i]);
}
for (int i = 0; i < 4; i++)
{
    printf("Value at index %d: %d\n", i, ptr[i]);
}
//realloc use
ptr = (int *) realloc(ptr, sizeof(int));
for (int i = 0; i < 4; i++)
{
    printf("Enter a new value: ");
    scanf("%d", &ptr[i]);
}
for (int i = 0; i < 4; i++)
{
    printf("Value at index %d: %d\n", i, ptr[i]);
}
free(ptr);


}
