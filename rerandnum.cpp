/*
    跟上一题一样，不过要人输入判断结果，电脑来猜
*/
#include <iostream>
#include <ctime>
using namespace std;

const int N = 5;
char result[N];
int guess[N];

int main()
{
    // 先猜一遍
    srand((unsigned(time(NULL))));
    cout << "我猜的数字是: " ;
    for (int i = 0; i < N - 1; i ++ )
    {
        guess[i] = rand() % 4 + 1;
        cout << guess[i] ;
    }
    cout << endl;
    // 输入判断结果
    for (int i = 0; i < N - 1; i ++ ) cin >> result[i];

    // 输出输入的
    for (int i = 0; i < N - 1; i ++ ) cout << result[i];

    for (int i = 0; i < N - 1; i ++ )
    {
        if (result[0] == '4') // 因为是char类型
        {
            // 电脑猜对了
            cout << "\n哈哈~我猜对了！\n 数字是: " ;
            for (int i = 0; i < N -1 ; i ++ )
            {
                cout << result[i];
            }
            break;
        }
        else
        {
            // 接着猜
            for (int i = 0; i < N - 1; i ++ )
            {
                // 先获取信息
                result[i] = 
            }
            // if ()
        }
    }    

    system("pause");
    return 0;
}