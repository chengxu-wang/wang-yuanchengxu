#include <stdio.h>
#include <stdlib.h>

int fac(int n)/*����һ���ݹ麯��*/
{
	int t;/*���ر���*/
	if((n==0)||(n==1))/*����������ջ��ͬʱ����������ջ*/
	{
		return 1;/*����ֵ*/
	}
	else
	{
		t=n*fac(n-1);/*������ջ*/
		return t;/*��ֵ���ظ�t,*/
	}
}
 int main()
{
	int n,y;
	printf("Enter n:\n");
	scanf("%d",&n);
	y=fac(n);
	printf("output n:%d\n",y);
	system("pause");
	return 0;
}