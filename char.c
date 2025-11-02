#include <stdio.h>

int main(){
    char name[30];
    char surname[30];

    printf("what is your name:");
    scanf("%s", &name);

    printf("what is your surname:");
    scanf("%s", &surname);

    printf("hello %s %s", name, surname);



return 0;
}