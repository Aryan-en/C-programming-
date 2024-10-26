#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void multiply(int* r1, int* r2, int* c1, int* c2){
   // Matrix 1
    printf("Matrix 1\n");
   int m1[*r1][*c1];
   for (int x = 0; x < *r1; x++)
   {
        for(int y = 0; y < *c1; y++){
            printf("Enter element [%d][%d]: ",x+1,y+1);
            scanf("%d",&m1[x][y]);
        }
   }
     // Matrix 2
    printf("Matrix 2\n");
   int m2[*r2][*c2];
   for (int x = 0; x < *r2; x++)
   {
        for(int y = 0; y < *c2; y++){
            printf("Enter element [%d][%d]: ",x+1,y+1);
            scanf("%d",&m2[x][y]);
        }
   }
   // Displaying Resultant Matrix Multiplication
    for(int i=0; i< *r1; i++){
        for(int j=0; j< *c1; j++){
            printf("[%d]",m1[i][j]);
        }
        printf("\n");
    }
    printf("X\n");
       for(int i=0; i< *r2; i++){
        for(int j=0; j< *c2; j++){
            printf("[%d]",m2[i][j]);
        }
        printf("\n");
    }
    printf("=\n");
    // Result
    int resultantM[*r1][*c2];
    int* Mptr = &resultantM;
    for(int i=0; i<*r1; i++){
        for(int j=0; j<*c2; j++){
           int result;
           result += m1[i][j]*m2[j][i];
           printf("[%d]", resultantM[i][j]);
        }
        printf("\n");
    }
}
int main(){
//Matrix
int i1,j1,i2,j2;
printf("\t\t\t Matrix Multiplication\n");
printf("--------------------------------------------------------------------\n");
printf("First Matrix: \n");
printf("Number of Rows: \n");
scanf("%d",&i1);
printf("Number of Columns: \n");
scanf("%d",&j1);
printf("--------------------------------------------------------------------\n");
printf("Second Matrix: \n");
printf("Number of Rows: \n");
scanf("%d",&i2);
printf("Number of Columns: \n");
scanf("%d",&j2);
(j1 == i2) ? multiply(&i1, &i2, &j1, &j2) : printf("Matrix can not be multiplied");
return 0; 
}
