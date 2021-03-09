#include <stdio.h>
#include <stdlib.h>

int main() {

    // 6-dars. Loops

//    evenNumbers();
//    factorial();
//    stars();
//    primeNumber();

    primeNums();

    return 0;

}

int kabisa() {


}

int evenNumbers() {

    int num;
    scanf("%d", &num);


    for(int i = 1; i <= num; i++) {

        if(i % 2 != 0){
            printf("%d, ", i);
        }
    }

    return 0;
}

int factorial() {

    int num;
    int counter = 1;

    printf("Enter a number: ");
    scanf("%l", &num);

    if(num <= 10) {

        for(int i = 1; i <= num; i++) {

            counter *= i;
            printf("%d, ", counter);
        }

        printf("Factorial is: %d", counter);

    }

    return 0;

    // Ishlamadi, sababini topish kerak!
}

int stars() {

    for(int i = 1; i < 10; i++) {
        for(int j = 10; j > i; j--) {
            printf("+");
        }

        for(int h = 0; h < 1; h++) {
            printf(" ");
        }
        for(int k = 1; k < i; k++) {
            printf("##");
        }
        for(int h = 0; h < 1; h++) {
            printf(" ");
        }

        for(int j = 10; j > i; j--) {
            printf("+");
        }

        printf("\n");
    }

    printf("\n");

    for(int i = 1; i < 10; i++) {
        for(int j = 0; j < i; j++) {
            printf("+");
        }

        for(int h = 0; h < 1; h++) {
            printf(" ");
        }
        for(int k =9; k > i; k--) {
            printf("##");
        }

        for(int h = 0; h < 1; h++) {
            printf(" ");
        }

        for(int j = 0; j < i; j++) {
            printf("+");
        }

        printf("\n");
    }




}

int primeNumber() {

    int num, counter = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num / 2; i++) {

        if(num % i == 0) {
            counter++;
            break;

        }

    }

    if(counter == 0 && num != 1) {
        printf("This is a prime number \n");

    } else {
        printf("This isn't a prime number \n");

      }

    primeNumber();

}

void primeNums() {

    int num;
    int isPrime;
    int counter = 0;

    printf("Enter a number: ");
    scanf("%d", &num);


    for(int i = 2; i <= num; i++) {
        for(int j = 2; j < i; j++) {

            isPrime = 0;
            if(i % j == 0) {
                isPrime++;
                break;
            }
        }


        if(isPrime == 0) {
            counter++;
            printf("%d. %d \n",counter, i);
        }


    }


}







// tub sonnni aniqlaydigan dastur
// 1 dan 100 gacha bo'lgan sonlarning yigindisi
// birinchi 100 ta tub sonning yigindisi
// fordalanuvchi son kiritadi. kiritildan sonni teskarisini chiqarish.

