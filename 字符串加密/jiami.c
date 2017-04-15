#include <stdio.h>
#include <stdlib.h>

char iString(char iStr1[100]);/*声明一个解密函数*/

int main()
{
	char iStr[100]={'\0'};/*定义保存要加密的字符串的字符数组*/
	char iWord[100]={'\0'};/*定义保存要解密的字符串的字符数组*/
	int i;
	int iNum=0;/*定义一个用于保存字符串长度的变量*/
	
	puts("请输入要加密的字符:");
	gets(iStr);/*输入字符串*/
	iNum=strlen(iStr);/*获取字符串长度*/
	for(i=0;i<iNum;i++)/*为字符串加密循环*/
	{
		iWord[i]=iStr[i]+i+5;
	}
	iWord[i]='\0';/*手动添加结束符*/
	printf("输出加密后的字符:%s\n",iWord);
	iString(iWord);/*调用字符串解密函数*/
	system("pause");
	return 0;
}
/*解密函数*/
char iString(char iStr1[100])/*iS的值为iWord*/
{
	int iNu,i;
	char iSstring[100];
	iNu=strlen(iStr1);
	for(i=0;i<iNu;i++)/*字符串解密函数*/
	{
		iSstring[i]=iStr1[i]-i-5;
	}
	iSstring[i]='\0';/*手动添加结束符*/
	printf("输出解密后的字符:%s\n",iSstring);
}

