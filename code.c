#include <stdio.h>
#define N 6

int main(void){

    int R = 10, rate;
    int ratecounter[11];

    for (int i = 1; i <= R; i++){
        ratecounter[i] = 0;
    }

    for (int i = 0; i < N; i++){
        printf("rate the show from 1 to 10:");
        scanf("%d", &rate);

        while (rate > 10 || rate < 1){
            printf("invalid input! please enter a number between 1 and 10: ");
            scanf("%d", &rate);
        }

        ratecounter[rate]++;
    } 

    printf("\n\n");

    for (int i = 1; i <= R; i++){
        printf("%d of people rated the show %d\n", ratecounter[i], i);
    }

    return 0;
}


