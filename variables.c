// Playing around with variables & format specifiers
#include <stdio.h>
#include <stdbool.h>

int main(){

    //Integers
    int babyChick = 2;
    printf("There are %d baby chickens in the farm. 🐤\n\n", babyChick);

    // Float and Double
    float score = 60.4f;
    printf("He got a score of %.1f%%\n", score);

    double e = 2.718281828459045;
    printf("The value of e is %.16f\n\n", e);

    // Char and String
    char shout = '!';
    char name[] = "reniPOO";

    printf("Hellooo%c\n", shout);
    printf("My name is %s 💩\n", name);

    // Boolian 
    bool hasNugget = true;
    
    if(hasNugget){
        printf("You HAVE a nugget!! 🐥💛 ");
    }
    else{
        printf("You do NOT have a nugget... 😤");
    }
    
    return 0;
}