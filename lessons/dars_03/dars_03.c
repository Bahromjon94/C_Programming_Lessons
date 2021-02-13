#include <stdio.h>
#include <stdlib.h>

int main() {

    // 3-dars.

    /*

    // #Calculator

    double num1;
    double num2;

    char amal;


    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Amalni kiriting: ");
    scanf(" %c", &amal);

    printf("Enter a number: ");
    scanf("%lf", &num2);

    double result;

    if(amal == 42) {
        result = num1 * num2;
        printf("%lf", result);

    } else if(amal == 43) {
        result = num1 + num2;
        printf("%lf", result);

    } else if(amal == 47) {
        result = num1 / num2;
        printf("%lf", result);

    } else if(amal == 45) {

        result = num1 - num2;
        printf("%lf", result);

    } else {
        printf("Bunday amal yo'q");

    }

    */

    test();

    return 0;

}

void switchCaase() {

    // switch darslari.

    // #Hafta kunlari.


    int day;

    printf("Hafta kunini raqamda kiriting: ");
    scanf("%d", &day);

    switch(day) {

    case 1:
        printf("Dushanba");
        break;

    case 2:
        printf("Seshanba");
        break;

    case 3:
        printf("Chorshanba");
        break;

    case 4:
        printf("Payshanba");
        break;

    case 5:
        printf("Juma");
        break;

    case 6:
        printf("Shanba");
        break;
    case 7:
        printf("Yakshanba");
        break;

    default:
        printf("Haftada faqat yetti kun bor");

    }

}

void gpaF() {


    int gpa;

    printf("Enter your gpa: ");
    scanf("%d", &gpa);

    if(gpa >= 0 && gpa <= 100) {

            if(gpa < 25) {
                printf("F");

            } else if(gpa >=25 && gpa < 45) {
                printf("E");

            } else if(gpa >= 45 && gpa < 50) {
                printf("D");

            } else if(gpa >= 50 && gpa < 60) {
                printf("C");

            } else if(gpa >= 60 && gpa < 80) {
                printf("B");

            } else {
                printf("A");

            }

    } else {
        printf("Bunday baho bo'lmaydi! ");

    }

    gpaF();

}

void test() {

    for(short i = 1; i > 0; i++) {
        printf("%d ", i);
    }

}

