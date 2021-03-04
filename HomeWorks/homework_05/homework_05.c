#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main() {

//    capWord();
//    binary();
//    toDecimal();



    return 0;
}

void toDecimal() {

    // Change input binary number to decimal.

    char binNum[8];
    int dec = 0;

    printf("Enter a binary number: ");
    scanf("%s", &binNum);
    size_t size = strlen(binNum);

    if (size > 0 && size <= 8) {

        for (int i = 0; i < size; i++) {

            if (binNum[i] == '1') {
                dec += pow(2, i);
            }
        }

    } else {
        printf("Faqat 8 xonagacha bo'lgan raqamlar kiritiladi \n");
        toDecimal();
    }

    printf("%d", dec);


}

int binary() {


    int num;
    int remainder;
    char bin[8];
    int len = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 255) {

            while(num > 0) {

                remainder = num % 2;
                num /= 2;
                bin[len] = remainder;
                printf("%d, ", remainder);
                len++;

            }


    } else {
        printf("0 dan 255 gacha bo'lgan raqamlar olinadi!\n");
    }

    printf("\n%d", bin);

    return 0;
}


void capWord() {


    char text[] = "bu ummatning qizi";

    size_t size = strlen(text);

    for (int i = 0; i < size; i++) {

        if (text[i] == 32) {
            continue;
        }


    }


}
