#include <stdio.h>
#include <stdlib.h>

int main() {

//    primeNumber();
//    untilHundred();

//    hundredPrime();

//    reverseNum();

    return 0;
}

int primeNumber() {

    // 1-vazifa. Kiritilgan raqamni tub yoki tub emasligini aniqlash.

    int num;
    int isPrime;

    println("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num / 2; i++) {

        if(num % i == 0) {
            isPrime++;
            break;
        }
    }

    if(isPrime == 0 && num != 1) {
        println("This is a prime number");

    } else {
        println("This isn't a prime number");

    }

    primeNumber();

    return 0;
}

int untilHundred() {

    // 2-vazifa. 100 gacha bo'lgan tub sonlarning yig'indisini hisoblash.

    int isPrime;
    int counter = 0;
    int sum = 0;


    for(int i = 2; i <= 100; i++) {
        for(int j = 2; j < i; j++) {
            isPrime = 0;

            if(i % j == 0) {
                isPrime++;
                break;
            }
        }

        if(isPrime == 0) {
            counter++;
            sum += i;
            printf("%d. %d \n",counter, i);
        }
    }

    printf("100 gacha bo'lgan tub sonlarning yig'indisi: %d", sum);

    return 0;

}

int hundredPrime() {

    // 3-vazifa. Birinchi 100 ta tub sonlarning yig'indisini hisoblash!

    int isPrime;
    int counter = 0;
    int sum = 0;
    int num = 2;


    for(int i = 2; i <= 541; i++) {
        for(int j = 2; j < i; j++) {
            isPrime = 0;

            if(i % j == 0) {
                isPrime++;
                break;
            }
        }

        if(isPrime == 0) {
            counter++;
            sum += i;
            printf("%d. %d \n",counter, i);
        }
    }

    printf("Birinchi 100 ta tub sonlarning yig'indisi: %d", sum);



    return 0;

}

int reverseNum() {

    int num;
    int a = 0;

    println("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        int revNum = num % 10;
        num /= 10;
        printf("%d", revNum);
    }

}

void println(char str[100]) {

    printf("%s \n", str);
}
