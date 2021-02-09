#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[] = "Bahromjon";
    double d = 4.4;

    printf("%s %f", name, d);

    return 0;

}

void triangle(){


    for(int i = 1; i < 6; i++) {
        for(int j = 6; j > i; j--){
            printf("*");
        }

        printf("\n");
        }


        for(int i = 1; i < 6; i++){
            for(int j = 0; j<i; j++){
                printf("*");
            }
            printf("\n");

    }



}
