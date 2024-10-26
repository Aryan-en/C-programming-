#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void starPat(int rows){
    for(int i=0; i<rows; i++){
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
void RstarPat(int number){
        for(int i=0; i < number; i++){
        for (int j = 0; j <= number-i-1; j++)
        {
            printf("*");
        }
        
        printf("\n");}
}

int main(){
//Star pattern 
int num;
printf("Star pattern\n");
printf("Number of Rows: \n");
scanf("%d",&num);
starPat(num);
printf("Revere star pattern\n");
RstarPat(num);

}
