#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

int main() {

    /// 16.03.2021.
    bigNumber();


    return 0;
}

void bigNumber() {

    ///

    int num;
    int big;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {

        int mod = num % 10;
        if (big < mod) {
            big = mod;
        }

        num /= 10;
    }
    printf("Biggest -> %d", big);
}

void multiplecationNumbers() {

    /// Foydalanuvchi kiritgan ko'pxonali sonni har birini bir-biriga ko'paytirish kerak.

    int num;
    int sum = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // while loop ochamiz, u foydalanuvchi kiritgan son 0 ga teng bo'lmagucha aylanadi.

    while (num != 0) {

        //

        int mod = num % 10;
        sum *= mod;
        num = num / 10;
    }
    printf("%d", sum);

}

void numSum() {

    int sum = 0;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i <= num;  i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }
    printf("Sum is -> %d", sum);

}


void findBigger() {

    /// Kiritilgan ikki raqamdan kattasini aniqlash.

    // katta sonni tenglab olish uchun int tipidagi bitta o'zgaruvchi e'lon qilamiz.
    // Agar o'zgaruvchiga boshlang'ich qiymat bermasa, ba'zi compaylerlar o'qimaydi.
    // Shuning uchun o'zgaruvchimizning boshlang'ich qiymatini 0 ga tenglab olish kerak.

    int big;
    char option;

    do {
        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d%d", &num1, &num2);

        if (big > num1 && big > num2) {
            printf("Katta son o'zgamadi %d \n", big);

        } else if (num1 > num2) {
            printf("%d is bigger \n", num1);
            big = num1;

        } else {
            printf("%d is bigger \n", num2);
            big = num2;
        }


        printf("Do you want to continue? [y/N] \n");
        scanf(" %c", &option);

    } while(option == 'y' || option == 'Y');
    printf("Program was finished");
}

void repeatLesson() {

    /// do while -> repeat

    char option;

    do {
        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d%d", &num1, &num2);
        printf("%d + %d Answer is: %d \n", num1, num2, num1 +num2);
        printf("Do you want to continue? [y/N] \n");
        scanf(" %c", &option);

    } while (option == 'y' || option == 'Y');
    printf("Exit");
}

void searchNum() {

    /// int seriya ichidan fotdalanuvchii kiritgan sonni topish va FILE'ga

    FILE *file;
    file = fopen("text.txt", "w");


    int numbers[] = {23, 54, 5, 78, 78, 54, 26, 65, 2, 78, 23};

    size_t size = sizeof(numbers) / sizeof(int);

    printf("Enter number what are you searching: ");
    int num;
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {

        if (num == numbers[i]) {
            printf("siz qidirgan son: %d %d index'da \n", num, i);
            fprintf(file, "%s: %d %d indexda turibdi", "Siz qidirgan son ", num);
        }
    }

    fclose(file);
}

void readFile() {

    FILE *file;
    file = fopen("text.txt", "r");
    char str[100];
    fscanf(file, "%s", &str);
    printf("%s", str);
    fclose(file);

    /// TODO: scanf(); ishlamayapti. To'g'rilash kerak.

}
