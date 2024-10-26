#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void PC_Output(int Response){
switch (Response)
{
case 1:
printf("\t\t\t  Computer Respone: ROCK");
break;
case 2:
printf("\t\t\t  Computer Respone: PAPER");
break;
case 3:
printf("\t\t\tComputer Respone: SCISSORS");
break;
}
}
void CheckWin(int* UR, int* CR){
if(*UR == 1 && *CR == 2){
    printf("\nComputer wins!");
}
else if (*UR == 1 && *CR == 3){
    printf("\nPlayer wins!");
}

else if (*UR == 2 && *CR == 1){
    printf("\nPlayer wins!");
}
else if (*UR == 2 && *CR == 3){
    printf("\nComputer wins!");
}

else if (*UR == 3 && *CR == 1){
    printf("\nComputer wins!");
}
else if (*UR == 3 && *CR == 2){
    printf("\nPayer wins!");
}
else if((*UR == 1 && *CR == 1) || (*UR == 2 && *CR == 2) || (*UR == 3 && *CR == 3)){
    printf("\nIt's a tie!");
}
}

int main(){
// Stone Paper Scissors
start:
srand(time(0));
int userResponse;
int ranNum = rand() %3 + 1;
printf("\n\t\t\t     ROCK PAPER SCISSORS\n");
printf("-------------------------------------------------------------------------\n");
printf("(1) ROCK                       (2) PAPER                     (3) SCISSORS \n");
printf("Enter (1/2/3) To play the game: ");
scanf("%d",&userResponse);

switch (userResponse)
{
case 1:
printf("\nPlayer Response: ROCK");
break;
case 2:
printf("\nPlayer Response: PAPER");
break;
case 3:
printf("\nPlayer Response: SCISSORS");
break;
default:
goto start;
break;
}
PC_Output(ranNum);
CheckWin(&userResponse, &ranNum);

}
