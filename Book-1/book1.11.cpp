#include <iostream>
using namespace std;

int main()
{
    int v1, v2;
    cin >> v1 >> v2;
    int val = 0;
    if (v1 > v2)
    {
        while (v1 >= v2)
        {
            cout << v1 << " ";
            v1--;
        }
    }
    else
    {
        while (v1 <= v2)
        {
            cout << v1 << " ";
            v1++;
        }
    }
    return 0;
}