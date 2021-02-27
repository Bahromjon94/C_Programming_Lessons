#include <stdio.h>
#include <stdlib.h>

int main() {

    // Loops

//    primeNumber();
//    hundredPrime();
//    primeNums();
//    prime();

//    revNums();

    polindromF();

    return 0;
}

void polindromF() {

    int num;
    int revNum;
    int polindrom;

    println("Enter a number: ");
    scanf("%d", &num);

    int tek = num;

    while(num > 0) {

        revNum = num % 10;
        polindrom = polindrom * 10 + revNum;
        num /= 10;

    }

    if(polindrom == tek) {
        println("This is a polindrom");

    } else {
        println("This isn't a polindrom");

    }

    printf("%d", polindrom);

    polindromF();

}

void revNums() {

    int num;

    println("Enter a number: ");
    scanf("%d", &num);


    while(num > 0) {

        int revNum = num % 10;
        printf("%d", revNum);
        num /= 10;

    }
}


int prime() {

    int isPrime;
    int num;

    println("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num/2; i++) {

        isPrime = 0;
        if(num % i == 0) {
            isPrime++;
            break;
        }
    }

    if(isPrime == 0 && num != 1) {
        println("Tub");

    } else {
        println("Tub emas");
    }

    prime();
}

int primeNumber() {

    int isPrime;
    int num;

    println("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num / 2; i++) {

        isPrime = 0;
        if(num % i == 0) {
            isPrime++;
            break;
        }

        if(isPrime == 0) {


        }
    }

    if(isPrime == 0) {
        println("This is a prime number");

    } else {
        println("This isn't a prime number");

    }

    primeNumber();

    return 0;
}


int hundredPrime() {

    // 3-vazifa. Birinchi 100 ta tub sonlarning yig'indisini hisoblash!

    int isPrime;
    int counter = 1;
    int sum = 0;
    int prime = 2;

    while(counter <= 100) {
        for(int j = 2; j < prime; j++) {
            isPrime = 0;

            if(prime % j == 0) {
                isPrime++;
                break;
            }
        }

        if(isPrime == 0) {
            counter++;
            sum += prime;
            printf("%d.  \n",counter);
        }

        prime++;

    }

    printf("Birinchi 100 ta tub sonlarning yig'indisi: %d", sum);

    return 0;

}

int primeNums() {

    int counter = 0;
    int isPrime;
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
            printf("%d. %d \n", counter, i);
        }
    }

    printf("100 gacha bo'lgan tub sonlar yig'indisi: %d", sum);
}




void println(char str[100]) {

    printf("%s \n", str);

    return 0;
}
