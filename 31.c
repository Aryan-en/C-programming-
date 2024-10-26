#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// int swap(int* a, int* b) {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }
// int main(){
//     int a = 3, b =4;
//     printf("Before swap: a = %d, b = %d\n", a, b);
//     swap(&a, &b);
//     printf("After swap: a = %d, b = %d\n", a, b);
// }
// quiz time a, b add, sub then assign add to a and sub to b using fn call by reference
int add(int* n1, int* n2){
    return *n1 + *n2;
}
int sub(int* n1, int* n2){
    return *n1 - *n2;
}
int assign(int* a, int* b, int* add, int* sub){
    *a = *add;
    *b = *sub;
}
int main(){
    int a = 10;
    int b = 5;

    printf("Originally, \n a = %d \n b = %d\n", a, b);

    int sum = add(&a, &b);
    printf("Sum = %d\n",sum);
    int diff = sub(&a, &b);
    printf ("Diff = %d\n",diff);
    assign(&a, &b,&sum, &diff);
    printf("After Re-assigning \n a = %d, \n b = %d\n",a,b);
}
