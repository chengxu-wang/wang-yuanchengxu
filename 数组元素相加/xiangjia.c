#include <stdio.h>
#include <stdlib.h>

int B(int a[5]);/*����һ����������������Ԫ�����*/

int main()
{
	int a[5],i,h;/*���������Լ���������*/
	puts("please input num:");
	for(i=0;i<5;i++)/*Ϊ���鸳ֵ*/
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	h=B(a);/*����������ʵ�Σ����ú���*/
	printf("%d\n",h);
	system("pause");
	return 0;

}
	int B(int a[5])
	{
		int i,f=0;
		for(i=0;i<5;i++)
		{
			f+=a[i];/*����Ԫ��ֵ���*/
		}
		return f;/*��ֵ���ظ�����B*/
	}