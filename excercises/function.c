#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 12;
    int b = 15;
    int c = a;
    a = b;
    b = c;

    printf("a = %d", a);
    println("");
    printf("b = %d", b);

}

int println(char str[]) {

    printf("%s\n", str);

    return 0;
}





