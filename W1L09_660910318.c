#include <stdio.h>

struct student
{
    char name[10];
    int age;
    int height;
};

int main() {
    struct student card[4];
    int i;
    float sum_of_age , sum_of_height;
    for (i = 1; i <= 4; i++) {
        printf("Enter name of student #%d: ", i);
        scanf("%s", card[i].name);
        printf("Enter age of student #%d: ", i);
        scanf("%d", &card[i].age);
        printf("Enter height of student #%d: ", i);
        scanf("%d", &card[i].height);
        printf("\n");
        printf("\n");
        sum_of_age = sum_of_age + card[i].age;
        sum_of_height = sum_of_height + card[i].height;
    }

    float result_of_age = sum_of_age / 4.0;
    float result_of_height = sum_of_height / 4.0;
    printf("Average of age = %.3f\n", result_of_age);
    printf("Average of height = %.3f\n", result_of_height);
}
