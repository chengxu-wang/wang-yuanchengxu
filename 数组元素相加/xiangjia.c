#include <stdio.h>
#include <stdlib.h>

int B(int a[5]);/*声明一个函数，用于数组元素相加*/

int main()
{
	int a[5],i,h;/*定义数组以及其他变量*/
	puts("please input num:");
	for(i=0;i<5;i++)/*为数组赋值*/
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	h=B(a);/*用数组名做实参，调用函数*/
	printf("%d\n",h);
	system("pause");
	return 0;

}
	int B(int a[5])
	{
		int i,f=0;
		for(i=0;i<5;i++)
		{
			f+=a[i];/*数组元素值相加*/
		}
		return f;/*将值返回给函数B*/
	}