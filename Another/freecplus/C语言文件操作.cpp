#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    FILE * fp = 0;
    fp = fopen("book.txt", "w");
    if (fp == 0)
    {
        cout << "打开 book.txt 文件失败！" << endl;
        return -1;
    }

    for (int i = 0; i < 3; i++)
    {
        fprintf(fp, "这是第 %d 行数据\n", i + 1);
    }

    fclose(fp);
    
    // 读文件
    char strbuf[301];
    FILE * fp1 = 0;
    fp1 = fopen("book.txt", "r");
    if (fp1 == 0)
    {
        cout << "打开 book.txt 文件失败！" << endl;
        return -1;
    }
    while (1)
    {
        memset(strbuf, 0, sizeof(strbuf));
        if (fgets(strbuf, 301, fp1) == 0)   // 只读取一行数据
        {
            break;
        }
        printf("%s", strbuf);
    }
    fclose(fp1);
    return 0;
}