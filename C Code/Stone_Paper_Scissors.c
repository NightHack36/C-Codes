//  stone paper scissors game 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int fun(char you, char comp){
    if(you==comp){
        return 0;
    }
    if(you =='a' && comp == 'b'){
        return -1;
    }
    else if (you =='b' && comp == 'a'){
        return 1;
    }
    else if (you =='a' && comp == 'c'){
        return 1;
    }
    else if (you =='c' && comp == 'a'){
        return -1;
    }
    else if (you =='b' && comp == 'c'){
        return -1;
    }
    else if (you =='c' && comp == 'b'){
        return 1;
    }
}

int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%10+1;
    if(number<=3){
        comp='a';
    }
    else if(number>3 && number<=6){
        comp='b';
    }
    else{
        comp='c';
    }
    printf("enter 'a' for stone, 'b' for paper, 'c' for scissor :- \n");
    scanf("%c",&you);
    int result = fun(you, comp);
    printf("you chose %c and computer chose %c\n",you,comp);
    if(result==0){
        printf("game draw\n");
    }
    else if(result==1){
        printf("you win\n");
    }
    else {
        printf(" you lose");
    }
    return 0;
}