#include <iostream>
using namespace std;

int main()
{
    int oldNum, newNum;
    if (cin >> oldNum)
    {
        int cnt = 1;
        while (cin >> newNum)
        {
            if (newNum == oldNum)
            {
                cnt ++;
            }
            else
            {
                cout << oldNum << " ���ִ��� " << cnt << endl;
                cnt = 1;
                oldNum = newNum;
            }
        }
        cout << oldNum << " ���ִ��� " << cnt << endl;
    }
    return 0;
}