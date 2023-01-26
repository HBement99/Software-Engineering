#include <stdio.h>

int main() {

    int age = 18;

    printf("How old are you: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.");
    }
    else {
        printf(" You are to young to vote!");
    }

    return 0;
}
