#include <stdio.h>
#include <stdlib.h>
int main()

{
	int Num[10],max,min,i;/*�������*/
	/*Ϊ���鸳ֵ*/
	for(i=0;i<10;i++)
	{
		printf("Num[%d]=",i);
		scanf("%d",&Num[i]);
	}
	printf("���������ֵΪ:");
	/*ͨ������ѭ���ҵ����ֵ*/
	for(i=0;i<10;i++)
	{
		max=Num[0];
		if(max<Num[i])
		{
			max=Num[i];
		}
	}
	printf("���ֵΪ:%d\n",max);
	for(i=0;i<10;i++)
	{
		min=Num[0];
		if(min>Num[i])
		{
			min=Num[i];
		}
	}
	printf("��СֵΪ:%d\n",min);
	system("pause");
	return 0;
}

