#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    category();



    return 0;
}

void menu() {


}

void item() {

}

void category() {

    char cat[2][10] = {
        "Tom", "Jerry"
    };

    for (int i = 0; i < 2; i++) {
        printf("%s - %p, %u\n", cat[i], cat[i], cat[i]);
    }
}
