#include <stdio.h>
#include <stdlib.h>

int main() {

    maxValueOfArr();

//    reverseArray();

//    averageValue();
//    pointerF();
//    testArr();

    return 0;
}


int maxValueOfArr() {

    int nums[] = {2, 45, 79, -78, 7};

    size_t size = sizeof(nums) / sizeof(int);

    int biggest = nums[0];

    for(int i = 1; i < size; i++) {

        if(biggest < nums[i]) {
            biggest = nums[i];

        }

    }

    printf("%d", biggest);




}

int testArr() {

    int len = 0;

    int nums[3];

    nums[0] = 3;
    nums[1] = 5;
    nums[2] = 9;
    nums[3] = 4;

    for(int i = 0; i < nums[len]; i++) {
        printf("%d, ", nums[i]);
    }

    return 0;
}

int reverseArray() {

    int len = 0;
    int nums[5];


    for(int i = 0; i < 5; i++) {

        printf("Enter number %d: \n", i + 1);
        scanf("%d", &nums[i]);

    }

    size_t size = sizeof(nums);

    for(int i = 4; i >= 0; i--) {
        len++;
        printf("%d, ", nums[i]);

    }

}

int averageValue() {

    int len = 0;

    int nums[] = {54, 65, 78, 15, 5, 7, 67};

    double average = 0;
    int sum = 0;
    size_t size = sizeof(nums) / sizeof(int);

    for(int i = 0; i < size; i++) {
        printf("%d\n", nums[i]);
        len++;
        sum += nums[i];
    }

    average = sum / size;
    printf("Sum = %d\n", sum);
    printf("O'rta qiymat = %f", average);


    // Average qoldiqni 0 qilib olyapti, to'g'lash kerak.

    return 0;

}

int pointerF() {

    // Pointerni ko'rsatish.

    char name[] = "Bahromjon";
    int len = 0;

    for(int i = 0; i < name[len]; i++) {

        printf("%p \n", name[i]);
        len++;
    }

    printf("Pointer = %p", name);


    return 0;
}

