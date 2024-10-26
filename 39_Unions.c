#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
union record {
    int age;
    int id;
    char grade;
};
int main(){
union record s1;
s1.id = 1;
s1.age = 18;
// s1.grade = 'A';
printf("Id: %d\n", s1.id);
// printf("Age: %d \n", s1.age);
// printf("Grade: %c \n", s1.grade);
return 0;
}
