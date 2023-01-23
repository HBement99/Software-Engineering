//Figuring out how many days are in a Leap Year vs. a Normal Year
#include <stdio.h>

int main() {

    printf("Amount of Days per Quarter in a Normal Year\n");

    int
    jan1 = 31, feb1 = 28, mar1 = 31, apr1 = 30, may1= 31, jun1= 30,
    jul1 = 31, aug1 = 31, sep1 = 30, oct1 = 31, nov1= 30, dec1= 31;

    int Q1 = jan1 + feb1 + mar1;
    printf("Days in Q1 of the Current year: %d\n", Q1);

    int Q2 = apr1 + may1 + jun1;
    printf("Days in Q2 of the Current year: %d\n", Q2);

    int Q3 = jul1 + aug1 + sep1;
    printf("Days in Q3 of the Current year: %d\n", Q3);

    int Q4 = oct1 + nov1 + dec1;
    printf("Days in Q4 of the Current year: %d\n\n", Q4);

    int NormalYear;
    NormalYear = Q1 + Q2 + Q3 + Q4;
    printf("There are %d",NormalYear);
    printf(" days in a normal year.\n");
    printf("Due to there being 28 days in February.\n\n");

    
    printf("Amount of Days per Quarter in a Leap Year\n");


    int
    jan2 = 31, feb2 = 29, mar2 = 31, apr2 = 30, may2= 31, jun2= 30,
    jul2 = 31, aug2 = 31, sep2 = 30, oct2 = 31, nov2= 30, dec2= 31;

    int L1 = jan2 + feb2 + mar2;
    printf("Days in L1 of the Current year: %d\n", L1);

    int L2 = apr2 + may2 + jun2;
    printf("Days in L2 of the Current year: %d\n", L2);

    int L3 = jul2 + aug2 + sep2;
    printf("Days in L3 of the Current year: %d\n", L3);

    int L4 = oct2 + nov2 + dec2;
    printf("Days in L4 of the Current year: %d\n\n", L4);


    int LeapYear;
    LeapYear = L1 + L2 + L3 + L4;
    printf("There are %d", LeapYear);
    printf(" days in a Leap Year.\n");
    printf("Due to there being 29 days in February.\n");


    return 0;
}
