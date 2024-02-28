#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

struct ohms
{
    char name[10];
    char band[2]; 
    float bandmulti;
    int err;
};

int main()
{
    struct ohms realband[5];  // สร้างstruct ตัวปลอมเพื่อที่จะมาspotหรืแเก็บตัวจริง
    struct ohms rbands[12] = {
        {"black", "0", 1, 0},
        {"brown", "1", 10, 1},
        {"red", "2", 100, 2},
        {"orange", "3", 1000, 0},
        {"yellow", "4", 10000, 0},
        {"green", "5", 100000, 0},
        {"blue", "6", 1000000, 0},
        {"violet", "7", 10000000, 0},
        {"gray", "8", 100000000, 0},
        {"white", "9", 1000000000, 0},
        {"gold", "G", 0.1, 5},
        {"silver", "S", 0.01, 10}}; /// สร้าง struct ตัวจริง
    printf("Enter color of band #1: ");
    scanf("%s", realband[0].name);
    printf("Enter color of band #2: ");
    scanf("%s", realband[1].name);
    printf("Enter color of band #3: ");
    scanf("%s", realband[2].name);
    printf("Enter color of band #4: ");
    scanf("%s", realband[3].name);
    printf("Enter color of band #5: ");
    scanf("%s", realband[4].name);
    for (int i = 0; i < 12; i++) //วนรอบเเรกของstruct ตัวจริง
    {
        for (int j = 0; j < 5; j++) //วนรอบ2 ของstruct ตัวปลอม
        {
            if (strcmp(realband[j].name, rbands[i].name) == 0) ///นำตัวจริงเเละตัวปลอมมาcmpกันถ้าเหทือนกันจะได้0เเละจะให้ตัวที่เหมือนเป็นstructตัวนั้น
            {
                realband[j] = rbands[i];
            }
        }
    }
    char bands[6]; //สร้างbandsเพื่อเก็บค่าbandที่จะมารวมกัน
    sprintf(bands , "%s%s%s" , realband[0].band , realband[1].band , realband[2].band);///รวมbandเเต่ละตัว
    int trans_bands = atoi(bands); //เเปรงเป็น atoi
    float result = (trans_bands * realband[3].bandmulti); //คำนวณปกติ
    printf("R = %.2f Ohm error %d" , result , realband[4].err);
}
