#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	int ipos,itepm;/*数组下标和最小值*/
	int s[10];/*定义数组*/
	puts("显示数组的值:");
	for(i=0;i<10;i++)
		{
			printf("s[%d]=",i);
			scanf("%d",&s[i]);
			printf("\n");
		}
	for(i=0;i<9;i++)/*外层循环表示设定最小值*/
		{
			itepm=s[i];/*最小值赋值*/
			ipos=i;/*记录最小值的下标*/
			for(j=i+1;j<10;j++)/*内层循环表示在数组中找一个数与最小值比较*/
				{
					if (s[j]<s[i])/*如果j（1）<i（0）,将1设为新的最小值，并记录其下标，反之则结束本次比较，进入for循环用下个数与0比较，*/
						{
							itepm=s[j];/*新的最小值*/
							ipos=j;/*新的下标*/
						}
				}
                     /*交换两个数组元素的值*/
					s[ipos]=s[i];/*将s[i]的值赋给新的数组元素，即实现两个值得互换*/
					s[i]=itepm;/*同上*/
		}
	printf("显示排序的数组:\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",s[i]);
	}
	system("pause");
	return 0;
}
							

