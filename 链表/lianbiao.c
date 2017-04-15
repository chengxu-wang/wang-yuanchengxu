#include <stdio.h>
#include <stdlib.h>

struct student/*����һ���ڵ�ṹ*/
{
	char name[20];
	int num;
	struct student* pNext;/*����������һ���ڵ��ָ��*/
};

int iCount;/*��ʾ����ĳ���*/

struct student* Create()/*��Greate���������б��᷵�������ͷָ��*/
{
	struct student* pHead=NULL;/*ͷָ��Ϊ��*/
	struct student *pEnd,*pNew;/*���ڱ�ʾ�½ڵ�����һ���ڵ�*/

	iCount=0;
	pEnd=pNew=(struct student*)malloc(sizeof(struct student));/*���η����ڴ棬���ҷ���һ��ָ��*/
	printf("����������:\n");
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->num);
	while(pNew->num!=0)/*��Ҫ�����������룬����ʹwhile��������*/
	{
		iCount++;
		if(iCount=1)/*���ڵ�һ�μ���ڵ�*/
		{
			pNew->pNext=pHead;/*����һ���ڵ�����Ϊ��*/
			pEnd=pNew;/*�����������Ҳ��β����ֻ������ͷָ��*/
			pHead=pNew;/*��ָ�븳��ͷָ��*/
		}
		else/*���ڲ��ǵ�һ�μ���ڵ�*/
		{
			pNew->pNext=NULL;/*���¼���ڵ�ṹ�е�ָ��ָ��Ϊ��*/
			pEnd->pNext=pNew;/*�µ�ָ�븳����һ���ڵ�ṹ�Ľṹָ��*/
			pEnd=pNew;/*���µĽڵ�ṹ����Ϊ���һ���ڵ�*/
		}
		pNew=(struct student*)malloc(sizeof(struct student));/*�ٴη����ڴ棬���ҷ���һ��ָ��*/
		scanf("%s",&pNew->name);
		scanf("%d",&pNew->num);
	}
	free(pNew);/*�ͷŶ����ڴ�*/
	return pHead;/*����ͷָ��*/
}

void print(struct student* pHead)/*print����������������*/
{
	struct student* pTemp;/*����һ����ʱָ�������������ʱ����*/
	int index=1;/*��ʾ��������*/
	pTemp=pHead;/*��ͷָ�븳����ʱָ��*/

	while(pTemp!=NULL)/*��һ���������ͷָ��*/
	{
		printf("�����NO%d������:\n",index);
		printf("%s\n",pTemp->name);
		printf("%d\n",pTemp->num);
		pTemp=pTemp->pNext;/*��ͷָ��������ƶ���ʱָ�뵽��һ���ڵ�*/
		index++;/*��������Լ�*/
	}
}
/*��������*/
struct student* Insert(struct student* pHead)
{
	struct student* pNew;/*ָ���·���Ŀռ�*/
	
	printf("������Ҫ�������Ϣ:\n");
	pNew=(struct student*)malloc(sizeof(struct student));/*�����ڴ棬������һ��ָ�룬��ָ�븳��pNew*/
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->num);
	pNew->pNext=pHead;
	pHead=pNew;
	
	iCount++;
	return pHead;
}

int main()
{
	struct student *pHead;/*����һ��ͷָ��ṹ*/
	pHead=Create();/*��������������*/
	pHead=Insert(pHead);
	print(pHead);/*�������*/
	system("pause");
	return 0;
}
















