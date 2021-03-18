#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main() {

    /// 18.03.2021.

    findNumber();


    return 0;
}


void findNumber() {

    ///

    srand(time(NULL));
    int randNumber = 1 + rand() % 101;
    int enteredNumber;
    printf("Random sonni topish \n");

    do {

        printf("Enter a number: ");
        scanf("%d", &enteredNumber);

        if (randNumber == enteredNumber) {
            printf("True \n");

        } else if (enteredNumber > randNumber) {
            printf("Random number is smaller \n");

        } else if (enteredNumber < randNumber) {
            printf("Random number is bigger \n");

        } else {
            printf("False \n");
        }

    } while (randNumber != enteredNumber);


}

void checkpassword() {

    char pass1[40];
    char pass2[40];

    int i;
    int rev;

    while (1) {
        i = 0;
        rev = 0;

        printf("Enter password: ");
        scanf("%s", pass1);
        printf("Repeat password: ");
        scanf("%s", pass2);

        while (!(pass1[i] == '\0' && pass2[i] == '\0')) {
            if (pass1[i] != pass2[i]) {
                printf("Please, repeat! \n");
                rev = 1;
                break;
            } else {
                i++;
            }
        }
        if (rev == 0) {
            printf("Password is true! \n");
            break;
        }
    }

}

void randomNumber() {

    srand(time(NULL));
    int num[6];

    for (int i = 0; i < 6; i++) {
        int randNum = 1 + rand() % 5;
        num[i] = randNum;
        while (num[i] == num[i - 1]) {
            num[i] = 1 + rand() % 5;
        }
        printf("%d,", randNum);
    }

    printf("Yana tekshirasizmi? [y/N] \n");
    char choosing;
    scanf(" %c", &choosing);

    if (choosing == 'y' || choosing == 'Y') {
        randomNumber();
    } else {
        exit(0);
    }
}

void scanNum() {

    /// Foydalanuvchi

    int numSeria[10];

    for (int i = 0; i < 10; i++) {
        printf("%d - elementni kiriting: ", i);
        scanf("%d", &numSeria[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d, ", numSeria[i]);
    }

}

void openDoor() {



    int open[10];
    int step, door;

    for (step = 0; step < 10; step++) {
        for (door = step; door < 10; door = door + step + 1) {
            open[door] = !open[door];
        }
    }

    printf("Opened doors: \n");

    for (door = 0; door < 10; door++) {
        if(open[door]) {
            printf("%d, ", door);
        }
    }

}

void showAlphabet() {

    /// Sonlar yordamida alifbo harflarini chiqarish.


    for (int i = 65; i <= 90; i++) {
        printf("%c ", i);
    }

    printf("\n");

    for (int i = 'a'; i <= 'z'; i++) {
        printf("%c ", i);
    }

}

void reverseNumber() {

    /// Kiritilgan sonni teskarisiga o'girish.

    int num;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);


    while (num !=0) {
        int remainder = num % 10;
        result = result * 10 + remainder;
        num /= 10;
    }
    printf("%d", result);
}

void smallestNunber(){

    /// Kiritligan sonning eng kichkinasini topish.

    int num;
    int small = 9;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num !=0) {
        int remainder = num % 10;
        if (small > remainder) {
            small = remainder;
        }
        num /= 10;
    }

    printf("%d", small);
}


