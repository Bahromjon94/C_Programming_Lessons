#include <stdio.h>
#include <stdlib.h>

int main() {


//    star();
//    fir();

    excercises();


    return 0;
}

void star() {


    for(int i = 1; i < 10; i++) {
        for(int j = 10; j > i; j--) {

            printf("*");
        }

        for(int k = 0; k < i; k++) {
            printf(" ");

        }

        for(int j = 0; j < 1; j++) {
            printf("*");
        }

        for(int k = 0; k < i; k++) {
            printf(" ");
        }

        for(int k = 10; k > i; k--) {
            printf("*");

        }

        printf("\n");
    }

    for(int i = 0; i < 11; i++) {
        printf("* ");
    }
    printf("\n");



    for(int i = 1; i < 10; i++) {
        for(int j = 0; j < i; j++) {

            printf("*");
        }

        for(int k = 10; k > i; k--) {
            printf(" ");

        }

        for(int j = 0; j < 1; j++) {
            printf("*");
        }

        for(int k = 10; k > i; k--) {
            printf(" ");
        }

        for(int k = 0; k < i; k++) {
            printf("*");

        }


        printf("\n");
    }

}

void fir() {

    printf("\n\n");

    for(int i = 1; i < 10; i++) {
        for(int j = 10; j > i; j--) {

            printf(" ");
        }
        for(int j = 0; j < i; j++) {

            printf(" *");
        }



        for(int j = 10; j > i; j--) {

            printf("  ");
        }


        for(int j = 0; j < i; j++) {

            printf("* ");
        }


        for(int j = 10; j > i; j--) {

            printf("  ");
        }


        for(int j = 0; j < i; j++) {

            printf("* ");
        }


        for(int j = 10; j > i; j--) {

            printf("  ");
        }



        printf("\n");
    }

}

void excercises() {

    int arr[] = {66, 97, 104,114, 111, 109};

    for(int i = 0; i <= 5; i++) {
        printf("%c", arr[i]);
    }

}
