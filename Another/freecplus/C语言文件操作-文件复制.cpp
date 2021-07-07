#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3) // ��������
    {
        printf("Ӧ������ʹ��: xx.exe source dest\n");
        printf("����: demo.exe book.txt cpbook.txt\n");
        printf("������Ĺ�����ʵ���ļ��ĸ���, source��Դ�ļ�, dest�Ǹ��ƺ���ļ�");
        return -1;
    }

    FILE *srcfp, *dstfp;
    // ֻ���ķ�ʽ��Դ�ļ�
    if ((srcfp = fopen(argv[1], "r")) == 0)
    {
        printf("���ļ�%sʧ��!\n", argv[1]);
        return -1;
    }

    // ֻд�ķ�ʽ��Ŀ���ļ�
    if ((dstfp = fopen(argv[2], "w")) == 0)
    {
        printf("���ļ�%sʧ��!\n", argv[2]);
        return -1;
    }

    int nread = 0;  // ��ȡ���ֽ���
    int *buf = (int *)malloc(100);    // ������ݵ����ݿ�

    while (1)
    {
        // ÿ�ζ�ȡ100���ֽ�
        if ((nread = fread(buf, 1, 100, srcfp)) == 0) break;
        // д��Ŀ���ļ�
        fwrite(buf, 1, nread, dstfp);
    }

    fclose(srcfp);
    fclose(dstfp);

    free(buf);

    return 0;
}