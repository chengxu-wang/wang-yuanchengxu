#include <stdio.h>
#include <stdlib.h>

int fax(int i)
{
	int x;
	if(i==1)
	{
		return 1;/*结束函数*/
	}
	else
	{
		x=i+fax(i-1);/*调用递归函数*/
		return x;/*返回到调用函数处*/
	}
}

	
int main()
{
	int q,i;
	puts("求1到100所有数字相加的值");
	printf("enter a num:\n");
	scanf("%d",&i);
	q=fax(i);
	printf("%d\n",q);
	system("pause");
	return 0;
}




