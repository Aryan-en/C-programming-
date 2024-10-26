#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void parser(char str[]){
for(char i = 0; i < strlen(str); i++){
    if(str[i] == '<'){
        while(str[i]!= '>'){
            i++;
        }

    }
    else if(str[i]== '<' && str[i+1] == '/'){
        while (str[i]!= '>'){
            i++;
        }

    }
       else{
        printf("%c", str[i]);
    }

}
    
}
int main(){
char string[] = "";
printf("Enter a HTML parser");
scanf("%s", &string);
parser(string);
}
