#include <stdio.h>
#include <stdbool.h>
int main(){
    int a;
    printf("Tell which exam you've passed\n type 1 for maths \n type 2 for Science \n type 3 for Both \n ");
    scanf("%d",&a);
    if (a == 1){
        printf("Congratulations on passing maths exam You recieved 15/- Inr in your Bank account");
    }
    else if (a == 2){
        printf("Congratulations on passing Science exam You recieved 15/- Inr in your Bank account");
    }
    else if (a == 3){
        printf("Congratulations on passing both exams You recieved 45/- Inr in your Bank account");
    }
    else{
        printf("Invalid input. Please enter 1 for maths, 2 for Science or 3 for both");
    }
}
