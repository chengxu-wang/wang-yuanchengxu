#include <stdio.h>
#include <stdlib.h>

int fac(int n)/*这是一个递归函数*/
{
	int t;/*返回变量*/
	if((n==0)||(n==1))/*结束函数入栈，同时开启函数出栈*/
	{
		return 1;/*结束值*/
	}
	else
	{
		t=n*fac(n-1);/*函数入栈*/
		return t;/*将值返回给t,*/
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