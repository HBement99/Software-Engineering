#include <stdio.h>

int
main() {

    int number;
    number = 18;

    printf("Enter your age:");

    scanf("%d", &number);
    if (number >= 18)
        printf("Yes you can vote");
    else {
        (18 < number);
        printf("You are not allowed to vote.");
    }
    printf("\n");

    int day = 5;
    (day < 10) ? printf("Its Monday.") : printf("Its Friday!");

    return 0;

}