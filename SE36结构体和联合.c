#include <stdio.h>
#include <string.h>

union  Price{
    int price;
    char isFree;
};

struct Square
{
    int height;
    char color;
    union { 
        int  agnel;
        char isRound[4]; 
    } round;
} Square1 = {10, 'R', 50}, Square2, Square3 = {30, 'R', 'N'};

typedef struct Student 
{
    int number;
    char name[16];
    struct 
    {
        int year;
        int month;
        int day;
    } brithday;
    char sex;
} STU;

int main(int argc, char const *argv[]) {
    //////////////////////////////////////////////////////////////////
    union Price new;
    new.price = 10;
    printf("%d\t%p\n", new.price, &new.price);
    new.isFree = 'Y';
    printf("%c\t%p\n", new.isFree, &new.price);
    printf("\n");
    //////////////////////////////////////////////////////////////////
    Square2 = Square1;
    Square2.color = 'G';
    Square2.height = 20;

    printf("size of struct Square: %lu byte\n", sizeof(Square1));
    printf("Square1: %d   Color: %c   Angel: %d\n",
            Square1.height, Square1.color, Square1.round);
    printf("Square2: %d   Color: %c   Angel: %d\n",
            Square2.height, Square2.color, Square2.round);
    printf("Square3: %d   Color: %c   Angel: %c\n",
            Square3.height, Square3.color, Square3.round);
    printf("\n");
    //////////////////////////////////////////////////////////////////
    struct Student student[3] = {{1001, "刘一", 2000, 8, 9, 'M'},
                                {1002, "陈二", 2000, 12, 25, 'F'}};

    student[2].number = 1003;
    strcpy(student[2].name, "张三");
    student[2].brithday.year = 2003;
    student[2].brithday.month = 5;
    student[2].brithday.day = 30;
    student[2].sex = 'M';

    for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++) {
        printf("%d\n", student[i].number);
        printf("%s\n", student[i].name);
        printf("%d-%02d-%02d\n", student[i].brithday.year,
               student[i].brithday.month, student[i].brithday.day);
        printf("\n");
    }
    //////////////////////////////////////////////////////////////////
    STU student3 = {1004, "李四", 2000, 8, 9, 'M'};
    printf("%d\n", student3.number);
    printf("%s\n", student3.name);
    printf("%d-%02d-%02d\n", student3.brithday.year, student3.brithday.month,
           student3.brithday.day);
    printf("\n");
    //////////////////////////////////////////////////////////////////
    STU student4 = {1005, "王五", 2000, 12, 25, 'F'};
    printf("%d\n", student4.number);
    printf("%s\n", student4.name);
    printf("%d-%02d-%02d\n", student4.brithday.year, student4.brithday.month,
           student4.brithday.day);
    printf("\n");
    //////////////////////////////////////////////////////////////////
    STU student5 = student4;
    printf("%d\n", ++student5.number);
    printf("%s\n", student5.name);
    printf("%d-%02d-%02d\n", student5.brithday.year, student5.brithday.month,
           student5.brithday.day);
    printf("\n");
    //////////////////////////////////////////////////////////////////
    STU *student6 = &student5;
    printf("%d\n", student6->number);
    printf("%s\n", student6->name);
    printf("%d-%02d-%02d\n", student6->brithday.year, student6->brithday.month,
           student6->brithday.day);
    printf("\n");
    //////////////////////////////////////////////////////////////////
    STU *student7 = &student5;
    printf("%d\n", (*student7).number);
    printf("%s\n", (*student7).name);
    printf("%d-%02d-%02d\n", (*student7).brithday.year,
           (*student7).brithday.month, (*student7).brithday.day);
    printf("\n");
    //////////////////////////////////////////////////////////////////
    STU *student8;
    printf("Please input number: ");
    scanf("%d", &student8->number);
    printf("Please input name: ");
    scanf("%s", &student8->name);
    printf("Please input brithday: ");
    scanf("%d-%d-%d", &student8->brithday.year, &student8->brithday.month,
          &student8->brithday.day);
    printf("%d\n", student8->number);
    printf("%s\n", student8->name);
    printf("%d-%02d-%02d\n", student8->brithday.year, student8->brithday.month,
           student8->brithday.day);
    //////////////////////////////////////////////////////////////////
    return 0;

    }

/* Reference
 [C语言之结构体就这样被攻克了（绝对值得收藏的文章）](https://www.eet-china.com/mp/a15348.html)
*/