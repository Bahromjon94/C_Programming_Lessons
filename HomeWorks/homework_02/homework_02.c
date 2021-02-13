#include <stdio.h>
#include <stdlib.h>

int main() {

//    salaryF();
//    gpaF();
//    seller();

}

void salaryF() {

    // 1-vazifa: Xodimning maoshiga besh foiz qo'shish.

    int stage;
    int salary;

    printf("Stajingizni ayting: ");
    scanf("%d", &stage);

    printf("Oyligingizni kiriting ");
    scanf("%d", &salary);

    if(stage >= 5) {

            double percent = salary * 0.05;
            double general = salary + percent;

            printf("Oyligingizga 5 foiz qo'shildi, sizga %lf beriladi \n", general);

    } else {
        printf("Siz faqat %d so'm olasiz \n", salary);

    }

    salaryF();

}

void gpaF() {

    // 2-vazifa: Talabaning bahosini ko'rsatish


    int gpa;

    printf("Enter your gpa: ");
    scanf("%d", &gpa);

    if(gpa >= 0 && gpa <= 100) {

            if(gpa < 25) {
                printf("F");

            } else if(gpa >=25 && gpa < 45) {
                printf("E");

            } else if(gpa >= 45 && gpa < 50) {
                printf("D");

            } else if(gpa >= 50 && gpa < 60) {
                printf("C");

            } else if(gpa >= 60 && gpa < 80) {
                printf("B");

            } else {
                printf("A");

            }

    } else {
        printf("Bunday baho bo'lmaydi! ");

    }

    gpaF();

}

void seller() {

    double price;
    double quantity;

    printf("Mahsulot narxi: ");
    scanf("%lf", &price);

    printf("Mahsulot soni: ");
    scanf("%lf", &quantity);

    double genPrice = price * quantity;

    if(quantity > 0) {

        if(quantity >= 1000) {

            double discount = genPrice * 0.1;
            printf("Sizga o'n foiz chegirma qilib beeramiz. Narxi: %lf bo'ladi. \n", genPrice - discount);


        } else {
            printf("Sizga chegirma qilib bera olmaymiz. Narxi %lf bo'ladi \n", genPrice);

        }

    } else {
        printf("Mahsulot sonini to'g'ri kiriting \n");

    }

    seller();

}

