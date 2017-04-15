#include <stdio.h>
#include <stdlib.h>
int main()

{
	int Num[10],max,min,i;/*定义变量*/
	/*为数组赋值*/
	for(i=0;i<10;i++)
	{
		printf("Num[%d]=",i);
		scanf("%d",&Num[i]);
	}
	printf("数组中最大值为:");
	/*通过数组循环找到最大值*/
	for(i=0;i<10;i++)
	{
		max=Num[0];
		if(max<Num[i])
		{
			max=Num[i];
		}
	}
	printf("最大值为:%d\n",max);
	for(i=0;i<10;i++)
	{
		min=Num[0];
		if(min>Num[i])
		{
			min=Num[i];
		}
	}
	printf("最小值为:%d\n",min);
	system("pause");
	return 0;
}

