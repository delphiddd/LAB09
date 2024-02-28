#include <stdio.h>

struct student
{
    int id;
    char name[25];
    int age;
};

int main()
{
    int test_id;
    struct student card[5] = {{67091430 , "SoponPhumeechanya", 18}, {67091431, "Harry Potter", 25}, {67091432, "Captain Marvel", 85}, {67091433 , "Thor Ragnarok", 40}, {67091434, "Tony Stark", 30}};
    printf("Enter ID: ");
    scanf("%d" , &test_id);
    for (int i = 1;i<=5;i++){
        if (card[i].id == test_id){
            printf("Name of %d = %s\n" , test_id , card[i].name);
            printf("Age of %d = %d\n" , test_id , card[i].age);
            break;
        } else{
            printf("ID Eror\n");
            break;
        }
    }
}
