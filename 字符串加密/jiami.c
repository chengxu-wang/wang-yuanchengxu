#include <stdio.h>
#include <stdlib.h>

char iString(char iStr1[100]);/*����һ�����ܺ���*/

int main()
{
	char iStr[100]={'\0'};/*���屣��Ҫ���ܵ��ַ������ַ�����*/
	char iWord[100]={'\0'};/*���屣��Ҫ���ܵ��ַ������ַ�����*/
	int i;
	int iNum=0;/*����һ�����ڱ����ַ������ȵı���*/
	
	puts("������Ҫ���ܵ��ַ�:");
	gets(iStr);/*�����ַ���*/
	iNum=strlen(iStr);/*��ȡ�ַ�������*/
	for(i=0;i<iNum;i++)/*Ϊ�ַ�������ѭ��*/
	{
		iWord[i]=iStr[i]+i+5;
	}
	iWord[i]='\0';/*�ֶ���ӽ�����*/
	printf("������ܺ���ַ�:%s\n",iWord);
	iString(iWord);/*�����ַ������ܺ���*/
	system("pause");
	return 0;
}
/*���ܺ���*/
char iString(char iStr1[100])/*iS��ֵΪiWord*/
{
	int iNu,i;
	char iSstring[100];
	iNu=strlen(iStr1);
	for(i=0;i<iNu;i++)/*�ַ������ܺ���*/
	{
		iSstring[i]=iStr1[i]-i-5;
	}
	iSstring[i]='\0';/*�ֶ���ӽ�����*/
	printf("������ܺ���ַ�:%s\n",iSstring);
}

