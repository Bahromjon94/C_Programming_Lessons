#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

//    login();


    printDash("Welcome back to the channel @IT_Junior_uz!");

    return 0;
}

void login() {

    char log[20];
    char pass[20];

    println("Enter your login");
    scanf("%s", &log);

    println("Enter your password");
    scanf("%s", &pass);

    if (strcmp(log, "Admin") == 0 && strcmp(pass, "admin") == 0) {
        println("Welcome!");

    } else {
        println("Wrong login or password");
        login();
    }
}



void println(char str[]) {

    printf("%s", str);
    printf("\n");
}

void printDash(char str[]) {

    size_t size = strlen(str);

    for (int i = 0; i < size + 2; i++) {
        printf("-");
    }

    printf("\n\n %s \n\n", str);

    for (int i = 0; i < size + 2; i++) {
        printf("-");
    }

}

