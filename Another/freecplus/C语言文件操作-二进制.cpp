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

    return 0;
}