#include <iostream>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int i=5000;	//设置初始数值为2000 
	int flag=1;	// 控制while循环 如果为0则代表电脑猜对数字
	int flag1=0;	
	int temp=0;
	char a;	//定义字符变量 a 
	printf("%d\n", i);  //%d\n 是printf()函数的格式控制，%d是printf()函数的格式声明，表示结果只能输出十进制整数，\n是普通字符中的换行符，表示输出后控制移到下一行的开头。 
	while(flag)
	{
		// 读入的字符存到a里面
		a = getchar(); //getchar是读入函数的一种。它从标准输入里读取下一个字符，读取 a 的字符 
		if(a=='>')
		{
			// 大于的情况 下面的代码具体功能应该是实现二分
			if((i - temp) == 0) i++; //"++"是C和C++还有JAVA等高级语言里的自增运算符，使可变左值（如变量，迭代器变量等）加一
			flag1 = i;
			i += abs(i - temp) / 2; //abs是绝对值函数，+=的意思就是把左边的第一个符号移到右边 
			temp = flag1;	
			flag ++;
			if(i >= 10000)
			{
				i = 10000;
				temp = 9500;
			}
			printf("%d\n", i);
			a = getchar();	
		}
		if(a == '<')
		{
			// 同理跟上面>是一样的
			if((i-temp)==0)i--;      //n--，先取n的值进行运算，运算结束后再n自减 
			flag1=i;
			i-=abs(i-temp)/2;
			temp=flag1;
			flag++;
			if(i<=0)
			{
				i=0;
				temp=50;
			}
			printf("%d\n",i);
			a=getchar();
		}
			if(a=='=')
		{
			printf("计算机猜测正确,猜测次数为：%d\n",flag-1);
			flag=0;
		}
	}
	return 0;
}

