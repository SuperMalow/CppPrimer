#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3) // 三个参数
    {
        printf("应该这样使用: xx.exe source dest\n");
        printf("例子: demo.exe book.txt cpbook.txt\n");
        printf("本程序的功能是实现文件的复制, source是源文件, dest是复制后的文件");
        return -1;
    }

    FILE *srcfp, *dstfp;
    // 只读的方式打开源文件
    if ((srcfp = fopen(argv[1], "r")) == 0)
    {
        printf("打开文件%s失败!\n", argv[1]);
        return -1;
    }

    // 只写的方式打开目标文件
    if ((dstfp = fopen(argv[2], "w")) == 0)
    {
        printf("打开文件%s失败!\n", argv[2]);
        return -1;
    }

    int nread = 0;  // 读取的字节数
    int *buf = (int *)malloc(100);    // 存放数据的数据块

    while (1)
    {
        // 每次读取100个字节
        if ((nread = fread(buf, 1, 100, srcfp)) == 0) break;
        // 写入目标文件
        fwrite(buf, 1, nread, dstfp);
    }

    fclose(srcfp);
    fclose(dstfp);

    free(buf);

    return 0;
}