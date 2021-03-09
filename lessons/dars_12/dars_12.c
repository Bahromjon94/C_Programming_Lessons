#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>

void printArr(int numbers[], int size);

int main() {

    // 06.03.2021 12-dars. Pointers.

//    int numbers[] = {45, 1, 87, 268, 8, 3, 4};
//    size_t size = sizeof(numbers) / sizeof(int);

//    bubbleSort(numbers, size);

//    int num;
//    scanf("%d", &num);
//    printf("%d",sum(num));

//    pointerF();

    oddNum(10);


    return 0;
}

void numF(int *num) {

    if (*num % 2 == 0) {
        println("This is an odd number");

    } else {
        println("This is an even number");
    }

}
void oddNum(int num) {
    numF(&num);
}


int sum(int num) {

    if (num != 0) {
        return num + sum(num - 1);


    } else {
        return num;
    }
}

void swap(int *a, int *b) {

    int c = *a;
    *b = *a;
    *a = c;
}

void bubbleSort(int num[], int size) {

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                swap(&num[j], &num[j + 1]);
            }
        }
    }

    printArr(num, size);
}

void printArr(int numbers[], int size) {

    for (int i = 0; i < size; i++) {
        printf("%d, ", numbers[i]);
    }
}


void add(int *num1, int *num2) {

    int result = *num1 + *num2;
    printf("%d", result);

}

void println(char str[]) {
    printf("%s\n", str);
}

void pointerF() {

    int num1;
    int num2;

    println("Enter a first number");
    scanf("%d", &num1);
    println("Enter a second number");
    scanf("%d", &num2);

    int *pNum1 = &num1;
    int *pNum2 = &num2;

    int sum = *pNum1 + *pNum2;

    printf("%d", sum);
}
