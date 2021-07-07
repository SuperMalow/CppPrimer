#include <iostream>
#include <string.h>
using namespace std;

struct girl
{
    char name[50];
    int age;
    int height;
    char sc[30];
    char yz[30];
};

//  二进制文件没有行的概念，没有字符串的概念。

int main()
{
    FILE *fp = 0;
    struct girl sgirl;
    fp = fopen("book.dat", "w");
    if (fp == 0)
    {
        cout << "文件打开失败!" << endl;
        return -1;
    }

    strcpy(sgirl.name, "西施");
    sgirl.age = 18;
    sgirl.height = 160;
    strcpy(sgirl.sc, "火爆");
    strcpy(sgirl.yz, "貌美如花");
    
    fwrite(&sgirl, 1, sizeof(sgirl), fp);   // 第二个固定1 第三为存的大小 第四为文件指针
    
    strcpy(sgirl.name, "杨玉环");
    sgirl.age = 20;
    sgirl.height = 165;
    strcpy(sgirl.sc, "无敌");
    strcpy(sgirl.yz, "天仙");
    fwrite(&sgirl, 1, sizeof(sgirl), fp);

    fclose(fp);

    FILE *fp1 = 0;
    fp1 = fopen("book.dat", "r");
    if (fp1 == 0)
    {
        cout << "打开文件失败！" << endl;
        return -1;
    }

    while (1)
    {
        if (fread(&sgirl, 1, sizeof(struct girl), fp1) == 0) break;

        printf("name = %s, age = %d, height = %d, sc = %s, yz = %s\n",sgirl.name, sgirl.age, sgirl.height, sgirl.sc, sgirl.yz);
    }

    fclose(fp1);

    return 0;
}