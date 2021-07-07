/*
    malloc���ص�����Ϊvoid *
    freeΪ�����ڴ�
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

    strcpy(pc, "��ʩ"); cout << pc << endl;
    strcpy(pst->name, "����"); pst->age = 21; cout << pst->name << " " << pst->age << endl;

    free(pi);
    free(pl);
    free(pb);
    free(pc);
    free(pst);

    return 0;
}