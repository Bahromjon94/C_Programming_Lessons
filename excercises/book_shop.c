#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    printDash("Assalomu alaykum!");

    category();


    return 0;
}

void category() {

    char catg[4][20] = {
        "Diniy kitoblar",
        "O'zbek adabitoti",
        "Jahon adabiyoti",
        "She'riy kitoblar"
    };

    println("Kategoriyalardan birini tanlang");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s \n", i+1, catg[i]);
    }
    int num;
    scanf("%d", &num);

    if (num > 0 && num <= 4) {
        bookList(num);

    } else {
        println("Yo'q bo'limni tanladingiz, boshqatdan tanlang!");
        category();
    }

}

void bookList(int num) {


    char uzb[5][60] = {
        "Abdulla Qodiriy - O'tkan kunlar",
        "Abdulhamid Cho'lpon - Kecha va kundzu",
        "Tohir Malik - Shaytanat",
        "Erkin Malik - Dou olgan kelinchak",
        "O'tkir Hoshimov - Dunyoning ishlari"
    };

    switch(num) {

        case 1:
            println("Diniy kitoblar bo'limi");
            int a = book(1, "Shayx Muhammad Sodiq Muhammad Yusuf - Baxtiyor oila", 55000);
            int b = book(2, "Alixon To'ra Sog'uniy - Tarixi Muhammidiy", 192000);
            int c = book(3, "Odinaxon Muhammad Sodiq - Go'zal o'rnak", 17000);
            int d = book(4, "Mubashshir Ahmad - Olim, Odam va Olam", 25000);
            int e = book(5, "Doktor Jihod Turboniy - Islom ummatining 100 buyuk shaxsi", 215000);
            printf("6. << Ortga");


            int choosing;
            scanf("%d", &choosing);

            if

            break;

        case 2:
            break;

    }


}

int book(int id, char title[], int price) {
    int num = 1;
    printf("%d. %s - %d so'm\n", id, title, price);

    return price;
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

    printf("\n %s \n", str);

    for (int i = 0; i < size + 2; i++) {
        printf("-");
    }
    println("");
}
