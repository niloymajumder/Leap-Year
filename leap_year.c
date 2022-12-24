// Check whether the year is leap year or not

#include <stdio.h>
int main() {
    int number;
    printf("Check the year: ");
    scanf("%d", &number);

    //used method: any year that is evenly divisible by 4 is a leap year
    if  (number%4 == 0) {
        printf("Yeah! %d is a leap year.",number);
    }
    else {
        printf("Sorry! %d is not a leap year.",number);
    }

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                 