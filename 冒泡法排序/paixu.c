#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>

int main()
{
	int a[10];/*����һ������*/
	int i,j;/*ѭ������*/
	int iTemp;/*�м����*/

	puts("Ϊ���鸳ֵ");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	/*��ð�ݷ�Ϊ��������(��С��������)*/
	for(i=1;i<10;i++)
	{
		for(j=9;j>=i;j--)/*��ǰԪ���������е�Ԫ��ȫ�����Ƚ�*/
		{
			if(a[j]<a[j-1])/*���j��ֵС��j-1*/
			{
				iTemp=a[j-1];/*��j-1��ֵ����temp��*/
				a[j-1]=a[j]; /*��j��ֵ����j-1��*/
				a[j]=iTemp;  /* ��temp����j���ֵ�Ļ������������ֵ�����ߣ�С����ֵ��ǰ��*/
			}                   /*j��j-1ָ����������±�����Ӧ��ֵ*/
		}
	}
	puts("����������������Ԫ��:");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}

