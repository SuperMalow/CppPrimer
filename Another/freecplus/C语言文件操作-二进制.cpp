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

//  �������ļ�û���еĸ��û���ַ����ĸ��

int main()
{
    FILE *fp = 0;
    struct girl sgirl;
    fp = fopen("book.dat", "w");
    if (fp == 0)
    {
        cout << "�ļ���ʧ��!" << endl;
        return -1;
    }

    strcpy(sgirl.name, "��ʩ");
    sgirl.age = 18;
    sgirl.height = 160;
    strcpy(sgirl.sc, "��");
    strcpy(sgirl.yz, "ò���绨");
    
    fwrite(&sgirl, 1, sizeof(sgirl), fp);   // �ڶ����̶�1 ����Ϊ��Ĵ�С ����Ϊ�ļ�ָ��
    
    strcpy(sgirl.name, "����");
    sgirl.age = 20;
    sgirl.height = 165;
    strcpy(sgirl.sc, "�޵�");
    strcpy(sgirl.yz, "����");
    fwrite(&sgirl, 1, sizeof(sgirl), fp);

    fclose(fp);

    FILE *fp1 = 0;
    fp1 = fopen("book.dat", "r");
    if (fp1 == 0)
    {
        cout << "���ļ�ʧ�ܣ�" << endl;
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