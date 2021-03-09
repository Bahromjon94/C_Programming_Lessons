#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int index = 0;

struct Teacher {

    char name[50];
};

struct Student {

    char name[30];
    char unvr[60];
    int age;

};

struct Lesson {

    char title[30];
    int duration;
    struct Teacher teacher;
    struct Student studentsList[20];

};


struct Teacher azamat;
struct Teacher muhammadJewel;
struct Lesson android;
struct Lesson frontEnd;
struct Student students[20];



int main() {

    strcpy(azamat.name, "Azamat");
    strcpy(muhammadJewel.name, "Muhammad Javohir");

    android.duration = 300;
    strcpy(android.title, "Android BootCamp");
    android.teacher = azamat;

    frontEnd.duration = 300;
    strcpy(frontEnd.title, "Front End");
    frontEnd.teacher = muhammadJewel;

    return 0;
}

void lessonList() {



}

void studentList() {



    struct Student student0 = { .name = "Student 0", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student1 = { .name = "Student 1", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student2 = { .name = "Student 2", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student3 = { .name = "Student 3", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student4 = { .name = "Student 4", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student5 = { .name = "Student 5", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student6 = { .name = "Student 6", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student7 = { .name = "Student 7", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student8 = { .name = "Student 8", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student9 = { .name = "Student 9", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student10 = { .name = "Student 10", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student11 = { .name = "Student 11", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student12 = { .name = "Student 12", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student13 = { .name = "Student 13", .age = 26, .unvr = "Najot Ta'lim" };
    struct Student student14 = { .name = "Student 14", .age = 26, .unvr = "Najot Ta'lim" };

    android.] = student0;


    students [0] = student0;
    students [1] = student1;
    students [2] = student2;
    students [3] = student3;
    students [4] = student4;
    students [5] = student5;
    students [6] = student6;
    students [7] = student7;
    students [8] = student8;
    students [9] = student9;
    students [10] = student10;
    students [11] = student11;
    students [12] = student12;
    students [13] = student13;

}

void teacherList() {

    printf("%s", azamat.name);

}




void println(char str[]) {
    printf("%s\n", str);
}


void printDash(char str[]) {

    size_t size = strlen(str);

    for (int i = 0; i < size + 2; i++) {
        printf("-");
    }
    printf("\n");
    printf(" %s \n", str);

    for (int i = 0; i < size + 2; i++) {
        printf("-");
    }

    printf("\n");
}
