#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {

//    stringF();
    stringBig();

    return 0;
}


void stringF() {

    // 02.02.2021. 1-vazifa. String

    // String - bu simvollar ketma-ketligi.

    // Berilgan so'zning hamma harflarini kattaga harfga o'tkazish.

    char text[] = "HeLlO WorLD!";
    size_t size = strlen(text);

    for (int i = 0; i < size; i++) {

        if (text[i] >= 97 && text[i] <= 122) {
            text[i] -= 32;
        }
    }
    printf("%s", text);
}

void stringBig() {

    // Berilgan gapdagi so'zlarning birinchi harfini bosh harfga o'tkazish.

    char text[] = "assalomu alaykum do'stlar, qalay";

    size_t size = strlen(text);

    char text1[] = "";

    int a;

    for (int i = 0; i < size; i++) {
        if (text[i] == 32) {
            a = text[i + 1] - 32;
            text[i + 1] = a;
            continue;
        }
    }

    printf("%s", text);

}
