#include <stdio.h>
#include <stdlib.h>

void weg(int *a,int n)/*用指针做函数参数时，返回值类型为空，不指定返回值类型*/
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
	printf("赋值:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",c+i);/*用c+i时，不用&。二者同时共用程序要死机*/
	}
	weg(s,5);
	system("pause");
	return 0;
}
