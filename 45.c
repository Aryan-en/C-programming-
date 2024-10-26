#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void getnum(char number[]){
    int n1 = (int) number[0];
    int n2 = (int) number[1];
   int result = sizeof(n1);
    printf("%d", n1);
}
int main(){
char num[3];
printf("Enter 2 numbers sepated by a space: \n");
gets(num);

getnum(num);
return 0;
}
