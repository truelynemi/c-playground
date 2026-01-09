// Playing with optional modifiers
#include <stdio.h>

int main(){

    // Zero Padding and Field Width
    int prisonNumber = 132;
    printf("Your prison number is %05d, make sure to protect your booty cheeks... ⛓️‍👮‍♂️ \n\n", prisonNumber);

    // Precision and Sign Flags
    float day1 = -101.2f;
    float day2 = 50.32f;
    printf("-----DAY 1-----\n");
    printf("'Damn it's really cold outside.' - Ray🥶\n'Yea it's like %+.1f°C' - Nemi❄️😢\n\n", day1);
    printf("-----DAY 2-----\n");
    printf("'OMG it's really warm outside today' - Nemi🥵\n'Yep it's like %+.2f°C' - Ray 🔥🫠\n\n",day2 );


    

    return 0;
}