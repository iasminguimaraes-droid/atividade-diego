#include <stdio.h>

struct Placar {
    int timeA;
    int timeB;
};

void main() {
    printf("digite o placar do time A:");
    struct Placar placar;
    scanf("%i", &placar.timeA);

    printf("digite o placar do time B:");
    scanf("%i", &placar.timeB);

    printf("placar do time A: %i\n", placar.timeA);
    printf("placar do time B: %i\n", placar.timeB);

    if(placar.timeA > placar.timeB) {
        printf("time A venceu!\n");
    } 
    else if (placar.timeA == placar.timeB) {
        printf("empatou\n");
    }
    else {
        printf("time B venceu!\n");
    }

}
