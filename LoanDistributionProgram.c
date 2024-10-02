#include <stdio.h>

int main() {
   //bank loan eligibility
    int age, income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income in Ksh: ");
    scanf("%d", &income);

    if (age >=21 && income >=210000) {
        printf("Congratulations! You qualify for a loan.\n ");

    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n ");
    }
    return 0;
    }