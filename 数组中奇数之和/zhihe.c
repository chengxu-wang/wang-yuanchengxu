#include <stdio.h>
#include <stdlib.h>

void weg(int *a,int n)/*��ָ������������ʱ������ֵ����Ϊ�գ���ָ������ֵ����*/
{
	int sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(*(a+i)%2!=0)
		{
			printf("%d ",*(a+i));
			sum=sum+*(a+i);
		}
	}
	printf("\n");
	printf("sum=%d\n",sum);
}

int main()
{
	int *s,c[5];
	int i;
	s=&c;
	printf("��ֵ:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",c+i);/*��c+iʱ������&������ͬʱ���ó���Ҫ����*/
	}
	weg(s,5);
	system("pause");
	return 0;
}
