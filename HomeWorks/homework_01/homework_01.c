#include <stdlib.h>
#include <stdio.h>

int main() {

    // #Homework 1

//    workOne();
//    workTwo();
//    workThree();
    workFour();

    return 0;
}

void workOne() {

    // 1-vazifa: kiritilgan sonni toq yoki juft ekanligini aniqlash

    int num;

    printf("please enter a number: ");
    scanf("%d", &num);

    if(num % 2 != 0) {
        printf("This is an odd number");

    } else {
        printf("This is an even number");

    }

}

void workTwo() {

    // 2-vazifa: foydalanuvchi kiritgan uchta sondan eng kattasini topish

    int num1;
    int num2;
    int num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3) {
        printf("First number is biggest");

    } else if(num2 > num1 && num2 > num3) {
        printf("Second number is biggest");

    } else {
        printf("Third number is biggest");

    }
}

void workThree() {

    // 3-vazifa Kiritilgan son Fizz yoki Buzz yoki FizzBuzz ekanligini aniqlash

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 15 == 0) {
        printf("FizzBuzz\n");

    } else {

        if(num % 3 == 0) {
            printf("Fizz\n");

        } else if(num % 5 == 0) {
            printf("Buzz");

        } else {
            printf("Neither Fizz nor Buzz\n");

        }
    }

    workThree();
}

void workFour() {

    // 4-vazifa: Kabisa yilini aniqlash

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(year == 1700 || year == 1800 || year == 1900 || year == 2100) {
        printf("This isn't a leap year\n");

    } else if(year >= 4) {

        if(year % 4 == 0) {
            printf("This is a leap year\n");

        } else {
            printf("This isn't a leap year\n");

        }

    } else {
        printf("This isn't a leap year\n");
    }

    workFour();

}
