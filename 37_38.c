#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef struct employee {
    int age;
    int experience;
    float X_marks;
    float XII_marks;
    char skill[100];
} ER;
int main(){
// Structures 
// typedef unsigned long UL;
// UL a = "ur mum";
ER aryan = {18,0,93.2,89.4,"C language"};
printf("Hi Aryan, you are %d years old and your xp is %d years you got %f and %f in your 10th and 12th grade respectively and your skill is %s", aryan.age, aryan.experience, aryan.X_marks, aryan.XII_marks, aryan.skill);
return 0;

}
