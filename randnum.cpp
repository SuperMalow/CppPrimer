/*
由计算机随机生成一个四位数,四位数的每一位可能是1 2 3 4中的任何一个(比如3341,1422, 4434等)程序运行后,游戏参与者猜测后通过键盘输入一个四位数,由计算机进行判断,并输出xAyB的结果.x表示位置和数值都正确的数字个数,y表示数值正确,位置不正确的数字个数(例如:答案是1234,输入若为3412,则判断结果为0A4B,输入若为1243,则判断结果为2A2B,输入若为111,则判断结果为1A0B).根据提示,游戏参与者通过键盘输入再次输入猜测的四位数,计算机再给出判断结果,直到所有数字和位置都猜测正确,游戏结束.游戏结束时提示总共的猜测次数 和游戏时间.作业采用word文档书写(格式见附件) .要求 提供源代码(含必要的注释), 程序运行的视频(含同步的语音解释)
*/
#include <iostream>
#include <ctime>        // 跟<time.h>一样
using namespace std;

const int N = 4;
int randNum[N];     // 存的是随机数
int guessNum[N];    // 用户猜的数的数组
int guess;          // 用户猜的数未分位
int x = 0;          // x为位置跟数字都正确  
int y = 0;          // y为数字正确,位置不正确
int cnt = 0;        // cnt为猜的次数

int main()
{
    clock_t startTime, endTime;
    startTime = clock();
    srand((unsigned)time(NULL)); // 随机种子根据
    for (int i = 0; i < N; i ++ )
    {
        randNum[i] = rand() % 4 + 1; // 随机数从1到4
        
        // randNum[i] = i + 1; // 这句是让电脑不随机值 值为1234
    }
    while(cnt != -1)
    {
        cnt ++ ; // 每猜一次就会计一次数

        // 这里是知道电脑的随机值
        cout << "电脑的随机值是: " ;
        for (int i = 0; i < N; i ++ )
        {
            cout << randNum[i] ;
        }

        // 开始猜
        cout << "\n输入你猜的数字: ";
        cin >> guess;
        // 分位 把输入的数字进行分位存到数组
        for (int i = N - 1; i >= 0; i -- ) // 从N-1 开始是因为分位是从个位再到十位的分
        {
            // 这里的存储顺序是跟我们千百十个位一样的
            guessNum[i] = guess % 10;
            guess /= 10;
        }

        // 进入判断
        for (int i = 0; i < N; i ++ )
        {
            if (randNum[i] == guessNum[i])
            { 
                x ++; // 位置跟数值都相等
            }
            else
            {
                for (int j = 0; j < N; j ++ )
                {    
                    if (randNum[i] == guessNum[j] && i != j)
                    {
                        y ++ ; // 数值相等但是位置不等
                    }
                }
            }
        }
        cout << "你猜的结果为: " << x << "A" << y << "B" << endl;
        
        //如果x的值为4 即4AyB  则猜对了
        if (x == 4)
        {
            cout << "你猜对了！" << endl;
            break;
        }
        else
        {
            // 再次初始化 
            x = 0, y = 0; // 因为一开始的x跟y是全局变量 不初始化第二遍再猜值会延续上一次的
        }
    }
    endTime = clock();
    cout << "一共猜了 " << cnt << " 次" << endl;
    cout << "一共花了 " << (double)(endTime - startTime) / CLOCKS_PER_SEC << " 秒" << endl;

    system("pause");    // 暂停窗口的功能 可去掉
    return 0;
}