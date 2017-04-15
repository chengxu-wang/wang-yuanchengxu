#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	int Num[10];
	int iTemp;
	puts("请给数组赋值");
	for(i=0;i<10;i++)/*给数组赋值*/
	{
		printf("Num[%d]=",i);
		scanf("%d",&Num[i]);
	}

	for(i=0;i<9;i++)/*交换法排序*/
	{
		for(j=i+1;j<10;j++)
		{
			if(Num[j]<Num[i])
			{
				iTemp=Num[j];
				Num[j]=Num[i];
				Num[i]=iTemp;
			}
		}
	}
	for(i=0;i<10;i++)/*输出经过排序的数组*/
	{
		printf("%d ",Num[i]);
	}
	system("pause");
	return 0;

}