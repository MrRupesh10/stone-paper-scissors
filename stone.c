/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(0));
int player,computer =(rand() % 2) +0;
printf(" 0 = rock \n 1 = paper \n 2 = scissor \n");
scanf("%d",&player);
printf("%d \n",computer);
if(player==computer){
    printf("Draw ! try again:");
}
else if(player==0 && computer==1){    
    printf("You won , congrats!");
}
else if(player==0 && computer==2){
    printf("You won , congrats!");
}
else if(player==1 && computer==0){
    printf("You won , congrats!");
}
else if(player== 1 && computer== 2){
    printf("computer won");
}
else if(player==2 && computer==0){
    printf("computer won");
}
else if(player==2 && computer==1){
    printf("You won ,congrats!");
}
return 0;
}