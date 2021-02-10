#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1-dars: o'zgaruvchilarni e'lon qilish



    char name[] = "Bahromjon";
    printf("%s\n", name);
    // char[] tipli o'zgaruvchi o'z ichiga belgilar to'plamini oladi.


    int age = 26;
    printf("%d\n", age);
    // int tipli o'zgaruvchi butun sonlarni oladi.


    float weight = 55.4;
    printf("%f\n", weight);
    // float tipli o'zgaruvchilarga qoldiqli sonlarni berish mumkin.


    double height = 168.5;
    printf("%lf\n", height);
    // double tipli o'zgaruvchilar qoldiqli sonlarni e'lon qilish uchun. U floatdan ko'proq sonlarni o'zisa saqlaydi.


    short gpa = 5;
    // short tipli o'zgaruvchilar ham butun sonlarni e'lon qilish uchun ishlatiladi.


    char c = 'w';
    printf("%c\n", c);
    // char tipli o'zgaruvchilarda faqatgina bir dona simvolni e'lon qilish mumkin.


    // #scanf(); funksiyasi


    char s[80];
    printf("ikkinchi Enter a string: ");
    fgets(s, 80, stdin);
    printf ("Here is your string: %s", s);



    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number is : %d\n", num);
    // int tipli o'zgaruvchiga qiymat berish uchun yuqoridagi kabi ketma-ketlikdan faoydanalinadi.



    char buff[39];
    printf("yoz: ");
    gets(buff);
    printf("%s", buff);


    char word[20];
    printf("Please, enter a word: ");
    scanf("%s", &word);
    printf("word is: %s\n", word);
    // matnlar to'plamiga qiymat berish uchun yuqoridagi ketma-ketlikdan foydalanish mimkin,
    // lekin bu usul bilan qiymat berilsa, scanf(); funksiyasi ishni to'xtatadi.



    char buf[20];
    printf("So'z: ");
    fgets(buf, 20, stdin);
    printf("string is: %s\n", buf);

    return 0;

}


