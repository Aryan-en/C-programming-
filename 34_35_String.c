#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// void array();
// int main(){
// //strings
// char name1[100];
// gets(name1);
// puts(name1);
// }
// void array(char name[]){
//     for(int i=0; name[i] != '\0'; i++){
//         printf("%c",name[i]);
// }
// }
// void arrrev(char initials[]){
//     for(int i=0; i < (sizeof(initials) / sizeof(initials[0])) ; i++){
//         printf("%c",initials[i]);
//     }
//     printf("\nAfter reversal\n");
//     for(int i = (sizeof(initials) / sizeof(initials[0])) - 1; i >= 0; i--){
//         printf("%c", initials[i]);
//     }
// }
int main(){
    // char name[] = {'A', 'R', 'Y', 'A', 'N'};
    // arrrev(name);
    // return 0;
    char name1[50];
    char name2[50];
    char midstr[] = " is the friend of ";
    printf("Enter a name: \n");
    gets(name1);
    printf("Enter another name: \n");
    gets(name2);
    printf("%s", strcat(strcat(name1, midstr), name2));

}