#include <iostream>
using namespace std;

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i) sum += i;

    cout << "i = " << i << " sum = " << sum << endl;
    system("pause");
    return 0;
}