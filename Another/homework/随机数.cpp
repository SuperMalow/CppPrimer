#include <iostream>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int i=5000;	//���ó�ʼ��ֵΪ2000 
	int flag=1;	// ����whileѭ�� ���Ϊ0�������Բ¶�����
	int flag1=0;	
	int temp=0;
	char a;	//�����ַ����� a 
	printf("%d\n", i);  //%d\n ��printf()�����ĸ�ʽ���ƣ�%d��printf()�����ĸ�ʽ��������ʾ���ֻ�����ʮ����������\n����ͨ�ַ��еĻ��з�����ʾ���������Ƶ���һ�еĿ�ͷ�� 
	while(flag)
	{
		// ������ַ��浽a����
		a = getchar(); //getchar�Ƕ��뺯����һ�֡����ӱ�׼�������ȡ��һ���ַ�����ȡ a ���ַ� 
		if(a=='>')
		{
			// ���ڵ���� ����Ĵ�����幦��Ӧ����ʵ�ֶ���
			if((i - temp) == 0) i++; //"++"��C��C++����JAVA�ȸ߼�������������������ʹ�ɱ���ֵ��������������������ȣ���һ
			flag1 = i;
			i += abs(i - temp) / 2; //abs�Ǿ���ֵ������+=����˼���ǰ���ߵĵ�һ�������Ƶ��ұ� 
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
			// ͬ�������>��һ����
			if((i-temp)==0)i--;      //n--����ȡn��ֵ�������㣬�����������n�Լ� 
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
			printf("������²���ȷ,�²����Ϊ��%d\n",flag-1);
			flag=0;
		}
	}
	return 0;
}

