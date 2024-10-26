// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// void Function();
// int main(){
//     // Goto Label
// // Start:
// // for(int i = 0; i<9; i++){ 
// //     printf("%d\n", i);
// //     if (i == 5){
// //         goto Start;
// //     }
// // }
// // Type Casting mid program me variable ka data type change karna 
// // int a = 4;
// // printf("%lu",(float) a);

// //Functions

// Function();
// }
// void Function(){
//     printf("Hi");
// }

// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// #include <stdlib.h>
// int Factorial(int argnum){
//     if (argnum == 0 || argnum == 1){
//         return 1;
//     }
//     else {
//         return (argnum * Factorial(argnum-1));
//     }
// }
// int main(){
// // recursion functions
// int num;
// printf("Enter the number of which you want the factiorial of: \n");
// scanf("%d",&num);
// printf("The factoral of %d is %d \n", num, Factorial(num));
// }
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
void one(){
    double K_M;
    printf("(Kilometers to Miles) Enter the Value: \n");
    scanf("%lf", &K_M); 
    printf("%lf Kilometers equals %lf miles",K_M, K_M*0.621371);
}
void two(){
    double I_F;
    printf("(Inches to Feet) Enter the Value: \n");
    scanf("%lf", &I_F); 
    printf("%lf Inches equals %lf Feet",I_F, I_F*0.833333);
}
void three(){
    double C_I;
    printf("(Centimeters to Inches) Enter the Value: \n");
    scanf("%lf", &C_I); 
    printf("%lf Centimeters equals %lf Inches",C_I, C_I*0.393701);
}
void four(){
    double P_K;
    printf("(Pound(lbs) to Kilograms) Enter the Value: \n");
    scanf("%lf", &P_K); 
    printf("%lf Pound(lbs) equals %lf Kilograms",P_K, P_K*0.453592);
}
void five(){
    double I_M;
    printf("(Inches to Meters) Enter the Value: \n");
    scanf("%lf", &I_M); 
    printf("%lf Inches equals %lf Meters",I_M, I_M*0.0254);
}
int main(){
    // #22 Project
    program_Start:
    int User_Input;
    printf("Welcome to the Unit converter library!\n");
    printf("Please select one of the following options by typing the number written adjacent to them \n");
    printf("type 1 for Kilometers to Miles \n");
    printf("type 2 for Inches to Foot \n");
    printf("type 3 for centimeters to inches \n");
    printf("type 4 for Pound (lbs) to kilograms \n");
    printf("type 5 for inches to meters \n");
    scanf("%d", &User_Input);
    if (User_Input == 1){
        one();
    }
    else if (User_Input == 2){
        two();
    }
    else if (User_Input == 3){
        three();
    }
    else if (User_Input == 4){
        four();
    }
    else if (User_Input == 5){
        five();
    }
    else{
        printf("Invalid Input type an integer from 1 to 5 \n \n");
        goto program_Start;
    }
    return 0;
}
