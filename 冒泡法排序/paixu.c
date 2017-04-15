#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>

int main()
{
	int a[10];/*设置一个数组*/
	int i,j;/*循环变量*/
	int iTemp;/*中间变量*/

	puts("为数组赋值");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	/*用冒泡法为数组排序(从小到大排列)*/
	for(i=1;i<10;i++)
	{
		for(j=9;j>=i;j--)/*当前元素与数组中的元素全部做比较*/
		{
			if(a[j]<a[j-1])/*如果j的值小于j-1*/
			{
				iTemp=a[j-1];/*将j-1的值赋给temp，*/
				a[j-1]=a[j]; /*将j的值赋给j-1，*/
				a[j]=iTemp;  /* 将temp赋给j完成值的互换，即大的数值往后走，小的数值往前走*/
			}                   /*j和j-1指的是数组的下标所对应的值*/
		}
	}
	puts("输出经过排序的数组元素:");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}

