/*
    ����һ��һ��������Ҫ�������жϽ������������
*/
#include <iostream>
#include <ctime>
using namespace std;

const int N = 5;
char result[N];
int guess[N];

int main()
{
    // �Ȳ�һ��
    srand((unsigned(time(NULL))));
    cout << "�Ҳµ�������: " ;
    for (int i = 0; i < N - 1; i ++ )
    {
        guess[i] = rand() % 4 + 1;
        cout << guess[i] ;
    }
    cout << endl;
    // �����жϽ��
    for (int i = 0; i < N - 1; i ++ ) cin >> result[i];

    // ��������
    for (int i = 0; i < N - 1; i ++ ) cout << result[i];

    for (int i = 0; i < N - 1; i ++ )
    {
        if (result[0] == '4') // ��Ϊ��char����
        {
            // ���Բ¶���
            cout << "\n����~�Ҳ¶��ˣ�\n ������: " ;
            for (int i = 0; i < N -1 ; i ++ )
            {
                cout << result[i];
            }
            break;
        }
        else
        {
            // ���Ų�
            for (int i = 0; i < N - 1; i ++ )
            {
                // �Ȼ�ȡ��Ϣ
                result[i] = 
            }
            // if ()
        }
    }    

    system("pause");
    return 0;
}