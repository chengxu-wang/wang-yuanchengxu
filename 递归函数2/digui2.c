#include <stdio.h>
#include <stdlib.h>

int fax(int i)
{
	int x;
	if(i==1)
	{
		return 1;/*��������*/
	}
	else
	{
		x=i+fax(i-1);/*���õݹ麯��*/
		return x;/*���ص����ú�����*/
	}
}

	
int main()
{
	int q,i;
	puts("��1��100����������ӵ�ֵ");
	printf("enter a num:\n");
	scanf("%d",&i);
	q=fax(i);
	printf("%d\n",q);
	system("pause");
	return 0;
}




