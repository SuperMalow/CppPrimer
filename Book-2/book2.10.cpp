#include <iostream>
using namespace std;

string global_str;
int global_int;
int main()
{
    int local_int;
    string local_str;

    cout << global_str << endl;
    cout << global_int << endl;
    cout << local_str << endl;
    cout << local_int << endl;
    
    system("pause");
    return 0;
}