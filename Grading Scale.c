#include <stdio.h>


int main() {

    int grade;
    printf("Enter your Grade: ");

    scanf("%i", &grade);

    if (grade == 100) {
        printf("You did awesome, A+");
    }
    else if (grade >= 90) {
        printf("You have an A");
    }
    else if (grade >= 80) {
        printf("You passed with a B");
    }
    else if (grade >= 70) {
        printf("You barely passed with a C");
    }
    else if (grade >= 60) {
        printf("You didnt pass the class, but you did not fail");
    }
    else {
        printf("You failed, see you next year.");
    }

    return 0;
}