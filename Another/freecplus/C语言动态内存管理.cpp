/*
    malloc返回的类型为void *
    free为销毁内存
*/
#include <string.h>
#include <iostream>
using namespace std;

struct girl
{
    char name[50];
    int age;
};

int main(int argc, int *argv[])
{
    int *pi = (int *)malloc(sizeof(int));
    long *pl = (long *)malloc(sizeof(long));
    double *pb = (double *)malloc(sizeof(double));
    char *pc = (char *)malloc(sizeof(char));
    struct girl *pst = (struct girl *)malloc(sizeof(struct girl));
    
    *pi = 10; cout << *pi << endl;
    *pl = 11; cout << *pl << endl;
    *pb = 12; cout << *pb << endl;

    strcpy(pc, "西施"); cout << pc << endl;
    strcpy(pst->name, "杨玉环"); pst->age = 21; cout << pst->name << " " << pst->age << endl;

    free(pi);
    free(pl);
    free(pb);
    free(pc);
    free(pst);

    return 0;
}