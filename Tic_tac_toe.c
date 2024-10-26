#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int checkWin();
char player1[20];
char player2[30];
char cross = 'X';
char zero = 'O';
char Board[9] = {'1','2','3','4','5','6','7','8','9'};
void ShowBoard(){
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t       %c     |    %c      |     %c   \n",Board[0], Board[1], Board[2]);
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t   _ _ _ _ _ | _ _ _ _ _ | _ _ _ _ _\n");
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t       %c     |    %c      |     %c   \n",Board[3], Board[4], Board[5]);
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t   _ _ _ _ _ | _ _ _ _ _ | _ _ _ _ _\n");
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t       %c     |    %c      |     %c   \n",Board[6], Board[7], Board[8]);
    printf("\t\t\t\t\t             |           |          \n");
    printf("\t\t\t\t\t             |           |          \n");
}





int main(){
    // Tic Tac to _ _e with arrays
    printf("\nWelcome to the Mother loving Tic Tac Toe!!!!\n \n");
    ShowBoard();
    printf("Rules: \n 1> Just type in the position (1-9) where you wanna put cross/ zero\n");
    printf("Typing anything else rather than the position (1-9) will lead to the end of the game there and then!\n");
    
    printf("Player 1 (X) Type your name \n");
    scanf("%s", &player1);
    printf("Player 2 (O) Type your name \n");
    scanf("%s", &player2);

    // Round 1

    int p1;
    printf("\nRound 1!!!\n");
    printf("%s (X) It's ur turn\n", player1);
    ShowBoard();
    printf("Choose your position (1-9): ");
    scanf("%d", &p1);
   switch (p1)
   {
   case 1:
    Board[0] = cross;
    ShowBoard();
    break;
   case 2:
    Board[1] = cross;
    ShowBoard();
    break;
   case 3:
    Board[2] = cross;
    ShowBoard();
    break;
   case 4:
        Board[3] = cross;
        ShowBoard();
    break;
   case 5:
        Board[4] = cross;
        ShowBoard();    
    break;
   case 6:
        Board[5] = cross;
        ShowBoard();
    break;
   case 7:
        Board[6] = cross;
        ShowBoard(); 
    break;
   case 8:
        Board[7] = cross;
        ShowBoard();
    break;
   case 9:
        Board[8] = cross;
        ShowBoard();   
    break;
   default:
    printf("Invalid move. Termination of Game\n");
    break;
   }
   
   R2_2:
   int p2;
   printf("%s (O) Now it's your you can chose a position (1-9) except %d: ", player2, p1);
   scanf("%d",&p2);
   if(p2 == p1){
    printf("You can't choose the same position as player 1.\n");
    goto R2_2;
   }
   else{
    switch (p2)
    {
   case 1:
        Board[0] = zero;
        ShowBoard();  
    break;
   case 2:
        Board[1] = zero;
        ShowBoard();
        break;
   case 3:
        Board[2] = zero;
        ShowBoard();
        break;
   case 4:
        Board[3] = zero;
        ShowBoard();   
        break;
    break;
   case 5:
        Board[4] = zero;
        ShowBoard();   
    break;
   case 6:
        Board[5] = zero;
        ShowBoard(); 
    break;
   case 7:
        Board[6] = zero;
        ShowBoard();
    break;
   case 8:
        Board[7] = zero;
        ShowBoard();
    break;
   case 9:
        Board[8] = zero;
        ShowBoard();
    break;
    default: 
    printf("Invalid move! Termination of Game\n");
    }
}

// Round 2

printf("\nRound 2!!!!\n");
int player_1_Round_2;
int player_2_Round_2;
R2:
printf("%s (X) Enter a value except values entered in Round 1 by (both the players): \n", player1);
scanf("%d", &player_1_Round_2);
if (player_1_Round_2 == p1 || player_1_Round_2 == p2){
    printf("You can't Enter that again\n");
    goto R2;
}
else{
switch(player_1_Round_2) {
   case 1:
        Board[0] = cross;
        ShowBoard();
    break;
   case 2:
        Board[1] = cross;
        ShowBoard();
    break;
   case 3:
        Board[2] = cross;
        ShowBoard();
        break;
   case 4:
        Board[3] = cross;
        ShowBoard(); 
    break;
   case 5:
        Board[4] = cross;
        ShowBoard();   
    break;
   case 6:
        Board[5] = cross;
        ShowBoard();   
    break;
   case 7:
        Board[6] = cross;
        ShowBoard();   
    break;
   case 8:
        Board[7] = cross;
        ShowBoard();   
    break;
   case 9:
        Board[8] = cross;
        ShowBoard();   
    break;
   default:
    printf("Invalid move. Termination of Game\n");
    break;
}
}
R2_3:
printf ("%s (O) It's now your turn: \n", player2);
printf("Enter a number except the ones that are already ocupied: ");
scanf("%d",&player_2_Round_2);
if (player_2_Round_2 == p1 || player_2_Round_2 == p2 || player_2_Round_2 == player_1_Round_2){
      printf("You can't Enter that again\n");
    goto R2_3;
}
else{
    switch (player_2_Round_2)
    {
   case 1:
        Board[0] = zero;
        ShowBoard();  
    break;
   case 2:
        Board[1] = zero;
        ShowBoard();  
    break;
   case 3:
        Board[2] = zero;
        ShowBoard();   
    break;
   case 4:
        Board[3] = zero;
        ShowBoard();   
    break;
   case 5:
        Board[4] = zero;
        ShowBoard();  
    break;
   case 6:
        Board[5] = zero;
        ShowBoard();   
    break;
   case 7:
        Board[6] = zero;
        ShowBoard();   
    break;
   case 8:
        Board[7] = zero;
        ShowBoard();  
    break;
   case 9:
        Board[8] = zero;
        ShowBoard();   
    break;
    default: 
    printf("Invalid move! Termination of Game\n");
    break;
    }    
}
//Round 3 
// Now it's possible for someone to win
//player 1
R3:
int player_1_round_3, player_2_round_3;
printf("\nRound 3!!!\n");
printf("%s (X) It's your turn: \n", player1);
scanf("%d", &player_1_round_3);

if (player_1_round_3 == p1 || player_1_round_3 == p2 || player_1_round_3 == player_1_Round_2 || player_1_round_3 == player_2_Round_2){
    printf("You can't Enter that again\n");
    goto R3;
}
else{
    switch(player_1_round_3) {
   case 1:
        Board[0] = zero;
        ShowBoard();  
    break;
   case 2:
        Board[1] = cross;
        ShowBoard();  
    break;
   case 3:
        Board[2] = cross;
        ShowBoard();   
    break;
   case 4:
        Board[3] = cross;
        ShowBoard();   
    break;
   case 5:
        Board[4] = cross;
        ShowBoard();  
    break;
   case 6:
        Board[5] = cross;
        ShowBoard();   
    break;
   case 7:
        Board[6] = cross;
        ShowBoard();   
    break;
   case 8:
        Board[7] = cross;
        ShowBoard();  
    break;
   case 9:
        Board[8] = cross;
        ShowBoard();   
    break;
    default: 
    printf("Invalid move! Termination of Game\n");
    break;
    } 
   }

   //player 2
R3_2:
printf("%s (O) It's your turn: \n", player2);
scanf("%d", &player_2_round_3);

if (player_2_round_3 == p1 || player_2_round_3 == p2 || player_2_round_3 == player_1_Round_2 || player_2_round_3 == player_1_round_3){
    printf("You can't Enter that again\n");
    goto R3_2;
}
else{
    switch(player_2_round_3) {
   case 1:
        Board[0] = zero;
        ShowBoard();  
    break;
   case 2:
        Board[1] = zero;
        ShowBoard();  
    break;
   case 3:
        Board[2] = zero;
        ShowBoard();   
    break;
   case 4:
        Board[3] = zero;
        ShowBoard();   
    break;
   case 5:
        Board[4] = zero;
        ShowBoard();  
    break;
   case 6:
        Board[5] = zero;
        ShowBoard();   
    break;
   case 7:
        Board[6] = zero;
        ShowBoard();   
    break;
   case 8:
        Board[7] = zero;
        ShowBoard();  
    break;
   case 9:
        Board[8] = zero;
        ShowBoard();   
    break;
    default: 
    printf("Invalid move! Termination of Game\n");
    break;
    }    
}
checkWin();
}

int checkWin(){
for(int i =0; i <9; i++){
    printf("%d\n", Board[i]);
}
/*
// x x x (Up)
if (Board[0] == Board[1] == Board[2] == cross ){
    printf("\n%s is the Winner!!\n", player1);
    return 0;
}
// o o o (Up)
else if (Board[0] == Board[1] == Board[2] == zero){
    printf("\n%s is the Winner!!\n", player2);
    return 0;
}

// x x x (Middle)
else if (Board[3] == Board[4] == Board[5] == cross){
    printf("\n%s is the Winner!!\n", player1);
    return 0;
}

// o o o (Middle)
else if (Board[3] == Board[4] == Board[5] == zero){
    printf("\n%s is the Winner!!\n", player2);
    return 0;
}

// x x x (Bottom)
else if (Board[6] == Board[7] == Board[8] == cross){
    printf("\n%s is the Winner!!\n", player1);
    return 0;
}

// o o o (Bottom)
else if (Board[6] == Board[7] == Board[8] == zero){
    printf("\n%s is the Winner!!\n", player2);
    return 0;
}

//x (left)
//x
//x
else if (Board[0] == Board[3] == Board[6] == cross){
    printf("\n%s is the Winner!!\n", player1);
    return 0;
}
//o (left)
//o
//o
else if (Board[0] == Board[3] == Board[6] == zero){
    printf("\n%s is the Winner!!\n", player2);
    return 0;
}
// x (Middle)
// x
// x
else if (Board[1] == Board[4] == Board[7] == cross){
    printf("\n%s is the Winner!!\n", player1);
    return 0;
}
// o (Middle)
// o 
// o
else if (Board[1] == Board[4] == Board[7] == zero){
    printf("\n%s is the Winner!!\n", player2);
    return 0;
}
// x (Right)
// x
// x
else if (Board[2] == Board[5] == Board[8] == cross){
    printf("\n%s is the Winner!!\n", player1);
    return 0;
}
// o (Right)
// o 
// o
else if (Board[2] == Board[5] == Board[8] == zero){
    printf("\n%s is the Winner!!\n", player2);
    return 0;
}
//x 
//  x
//    x
else if (Board[0] == Board[4] == Board[8] == cross){
    printf("\n%s is the Winner!!\n", player1);
    return 0;
}//o 
//  o
//    o
else if (Board[0] == Board[4] == Board[8] == zero){
    printf("\n%s is the Winner!!\n", player2);
    return 0;
}
//    x
//  x
//x
else if (Board[2] == Board[4] == Board[6] == cross){
    printf("\n%s is the Winner!!\n", player1);
    return 0;
}
//    o
//  o
//o
else if (Board[2] == Board[4] == Board[6] == zero){
    printf("\n%s is the Winner!!\n", player2);
    return 0;
}
*/
}

