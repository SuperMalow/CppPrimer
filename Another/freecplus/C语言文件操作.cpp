#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    FILE * fp = 0;
    fp = fopen("book.txt", "w");
    if (fp == 0)
    {
        cout << "�� book.txt �ļ�ʧ�ܣ�" << endl;
        return -1;
    }

    for (int i = 0; i < 3; i++)
    {
        fprintf(fp, "���ǵ� %d ������\n", i + 1);
    }

    fclose(fp);
    
    // ���ļ�
    char strbuf[301];
    FILE * fp1 = 0;
    fp1 = fopen("book.txt", "r");
    if (fp1 == 0)
    {
        cout << "�� book.txt �ļ�ʧ�ܣ�" << endl;
        return -1;
    }
    while (1)
    {
        memset(strbuf, 0, sizeof(strbuf));
        if (fgets(strbuf, 301, fp1) == 0)   // ֻ��ȡһ������
        {
            break;
        }
        printf("%s", strbuf);
    }
    fclose(fp1);
    return 0;
}