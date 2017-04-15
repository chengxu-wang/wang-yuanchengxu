#include <stdio.h>
#include <stdlib.h>

void dfg(int (*m)[2],int n)/*定义子程序*/
{
	int abc;/*定义最大值*/
	int i,j;
	int sum=0;/*定义数值之和的变量*/

	for(i=0;i<n;i++)
	{
		abc=*(m[i]);/*将数组首行赋给最大值*/
		for(j=0;j<n;j++)
		{
			if(*(m[i]+j)>abc)/*如果数组中的数字大于最大值*/
			{
				abc=*(m[i]+j);/*在上面的结果中，将较大的数字重新定义为最大值*/
			}
		}
		printf("第%d行中最大的数字为%d\n",i,abc);
		sum=sum+abc;/*数值相加*/
	}
	printf("\n");
	printf("数字之和是:%d\n",sum);
}

int main()
{
	int a[2][2];/*定义一个二维数组*/
	int i,j;
	int (*p)[2];/*定义一个表示数组，某行有两列的指针变量，即指二维数组中具体某行某列*/
	p=&a[0];

	printf("请给数组赋值:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",a[i]+j);
		}
	}
	dfg(p,2);
	system("pause");
	return 0;
}