// Playing around with arithmetic operators and arguemented assignments
#include <stdio.h>
#include <stdbool.h>

int main(){

    // Addition
    printf("---------❄️FRIDGE---------\n");
    int eggs = 3;
    int beans = 2;
    int poultry = 0;

    poultry = eggs + beans;
    printf("You have a total of %d poultry products in your fridge.🥚🫘\n\n");

    // Decrementing and Augumented Assignments
    printf("---------🎮Game---------\n");
    int lives = 3;
    int deaths = 0;

    bool playerIsDead = true;
    if(playerIsDead){
        lives--;
        deaths+=1;
        printf("💔YOU DIED!💔\n");
        printf("Total Lives: %d❤️\n", lives);
        printf("Total Deaths: %d☠️\n",deaths);
    }
    else {
        printf("Total Lives: %d❤️\n", lives);
        printf("Total Deaths: %d☠️\n",deaths); 
    }
        

    return 0;
}