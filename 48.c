#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){
int id_size;
printf("Enter the size of the ID: \n");
scanf("%d",&id_size);
int* id;
id = (int*) malloc(id_size);
printf("Enter your ID: \n");
scanf("%d",&id);
printf("Your ID is: %d", id);
}
