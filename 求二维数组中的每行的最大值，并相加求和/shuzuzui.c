#include <stdio.h>
#include <stdlib.h>

void dfg(int (*m)[2],int n)/*�����ӳ���*/
{
	int abc;/*�������ֵ*/
	int i,j;
	int sum=0;/*������ֵ֮�͵ı���*/

	for(i=0;i<n;i++)
	{
		abc=*(m[i]);/*���������и������ֵ*/
		for(j=0;j<n;j++)
		{
			if(*(m[i]+j)>abc)/*��������е����ִ������ֵ*/
			{
				abc=*(m[i]+j);/*������Ľ���У����ϴ���������¶���Ϊ���ֵ*/
			}
		}
		printf("��%d������������Ϊ%d\n",i,abc);
		sum=sum+abc;/*��ֵ���*/
	}
	printf("\n");
	printf("����֮����:%d\n",sum);
}

int main()
{
	int a[2][2];/*����һ����ά����*/
	int i,j;
	int (*p)[2];/*����һ����ʾ���飬ĳ�������е�ָ���������ָ��ά�����о���ĳ��ĳ��*/
	p=&a[0];

	printf("������鸳ֵ:\n");
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