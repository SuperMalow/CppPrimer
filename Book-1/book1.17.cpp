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
                cout << oldNum << " 出现次数 " << cnt << endl;
                cnt = 1;
                oldNum = newNum;
            }
        }
        cout << oldNum << " 出现次数 " << cnt << endl;
    }
    return 0;
}