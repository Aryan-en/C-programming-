#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct AgencyRecord {
    char name[36];
    int DLnum;
    char route_from[36];
    char route_to[36];
    int KM;

};
int main(){
    // 3 driver travel agency
    /*name (string)
    Driving license no (int)
    Route (from) - (to) (int)
    Kms Driven (int)
    */
   struct AgencyRecord D1, D2, D3;
   // driver 1
   printf("Driver 1 Enter your name:\n");
   scanf("%d",&D1.name);
   printf("Enter your Driving license no:\n");
   scanf("%d",&D1.DLnum);
   printf("Enter your route from:\n");
   scanf("%d",&D1.route_from);
   printf("Enter your route to:\n");
   scanf("%d",&D1.route_to);
   printf("Enter your Kms Driven:\n\n\n");
   scanf("%d",&D1.KM);
    // driver 2
   printf("Driver 2 Enter your name:\n");
   scanf("%d",&D2.name);
   printf("Enter your Driving license no:\n");
   scanf("%d",&D2.DLnum);
   printf("Enter your route from:\n");
   scanf("%d",&D2.route_from);
   printf("Enter your route to:\n");
   scanf("%d",&D2.route_to);
   printf("Enter your Kms Driven:\n\n\n");
   scanf("%d",&D2.KM);
     // driver 3
   printf("Driver 3 Enter your name:\n");
   scanf("%d",&D3.name);
   printf("Enter your Driving license no:\n");
   scanf("%d",&D3.DLnum);
   printf("Enter your route from:\n");
   scanf("%d",&D3.route_from);
   printf("Enter your route to:\n");
   scanf("%d",&D3.route_to);
   printf("Enter your Kms Driven:\n");
   scanf("%d",&D3.KM);
 
   printf("-------------------------------\n");
   printf("Recod:\n");
   printf("1) %s is DL no. %d driving from %s to %s and has driven %d kms\n", D1.name,D1.DLnum,D1.route_from,D1.route_to,D1.KM);
   printf("2) %s is DL no. %d driving from %s to %s and has driven %d kms\n", D2.name,D2.DLnum,D2.route_from,D2.route_to,D2.KM);
   printf("3) %s is DL no. %d driving from %s to %s and has driven %d kms", D3.name,D3.DLnum,D3.route_from,D3.route_to,D3.KM);
   return 0;
}


