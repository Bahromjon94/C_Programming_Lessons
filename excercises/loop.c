#include <stdio.h>
#include <stdlib.h>

int main() {

//    romb();
//    fullRomb();
    whileLoop();
//    loopTest();

    return 0;
}


void whileLoop() {

    int i = 1;
    int j = 0;

    while(i < 10) {
        while(j < i) {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }

}


void romb() {

    // for loop yordamida romb shaklini hosil qilish


    for(int i = 1; i < 10; i++) {
        for(int j = 10; j > i; j--) {

            printf(" ");
        }

        for(int k = 0; k < i; k++) {

            printf("* ");
        }

        printf("\n");
    }

    for(int i = 1; i < 10; i++) {
        for(int j = 0; j < i; j++) {

            printf(" ");
        }

        for(int k = 9; k > i; k--) {

            printf(" *");
        }

        printf("\n");
    }
}

void fullRomb() {

    // for loop yordamida romb shaklini yasash


     for(int i = 1; i < 7; i++) {
        for(int j = 7; j > i; j--) {

            printf(" ");
        }

        for(int k = 0; k < i; k++) {

            printf("*");
        }

        for(int k = 0; k < i; k++) {
            printf("*");

        }

        printf("\n");
    }

    for(int i = 1; i < 7; i++) {
        for(int j = 0; j < i; j++) {

            printf(" ");
        }

        for(int k = 7; k > i; k--) {

            printf("*");
        }

        for(int j = 7; j > i; j--) {

            printf("*");
        }

        printf("\n");
    }


    // jami sakkizta for ishlatildi.


}


int loopTest() {


    for(int i = 1; i < 10; i++) {
        for(int j = 10; j > i; j--) {
                printf("*");
        }

        for(int k = 1; k < i; k++) {
            printf("  ");
        }

        for(int j = 10; j > i; j--) {
                printf("*");
        }

        printf("\n");
    }


    for(int i = 1; i < 10; i++) {
        for(int j = 0; j < i; j++) {
                printf("*");
        }

        for(int k = 9; k > i; k--) {
            printf("  ");
        }

        for(int j = 0; j < i; j++) {
                printf("*");
        }

        printf("\n");
    }

    printf("// Jami 8 ta for loop ishlatildi.");


    return 0;
}
