#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(){

    // 11-dars. Fuctions.

//    toUpperCase();
//    sayHi("Bahromjon");

    int a = toBinary(5);
    printf("%d", a);

    return 0;
}

int power(int num1, int num2) {

    int res = 1;

    for (int i = 0; i < num2; i++) {
        res *= num1;
    }
    return res;
}


void toDecimal(int num) {

    int i = 1;
    int rem = 0;
    int dec = 0;

    while(num != 0) {

        rem = num % 10;
        dec += power(rem, i);
        num /= 10;
        i++;
    }

    printf("%d", dec);


}
int toBinary(int num) {

    int res = 0;
    int i = 1;
    while (num != 0) {

        int rem = num % 2;
        res = rem * i + res;
        num /= 2;
        i *= 10;
    }
    return res;

}


void sayHi(char name[]);




void toUpperCase() {

    // Kiritilgan textdagi so'zlarning har birini bosh harfda chiqarish.

    char text[] = "salom hammaga, qalaysizlar?";

    size_t size = strlen(text);
    bool isSpace = false;

    for (int i = 0; i < size; i++) {
        if (i == 0 && text[0] >96 && text[0] < 123) {
            text[0] -=32;
        }

        if (text[i] == 32) {
            isSpace = true;
            continue;
        }

        if (isSpace && text[i] > 96 && text[i] < 123) {
            text[i] -= 32;
            isSpace = true;
            continue;

        } else {
            isSpace = false;
        }
    }

    printf("%s", text);

}

void println(char str[100]) {

    printf("%s", str);
    printf("\n");
}

