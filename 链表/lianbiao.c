#include <stdio.h>
#include <stdlib.h>

struct student/*建立一个节点结构*/
{
	char name[20];
	int num;
	struct student* pNext;/*用来保存下一个节点的指针*/
};

int iCount;/*表示链表的长度*/

struct student* Create()/*用Greate函数建立列表，会返回链表的头指针*/
{
	struct student* pHead=NULL;/*头指针为空*/
	struct student *pEnd,*pNew;/*用于表示新节点和最后一个节点*/

	iCount=0;
	pEnd=pNew=(struct student*)malloc(sizeof(struct student));/*初次分配内存，并且返回一个指针*/
	printf("请输入数据:\n");
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->num);
	while(pNew->num!=0)/*想要结束链表输入，必须使while条件满足*/
	{
		iCount++;
		if(iCount=1)/*用于第一次加入节点*/
		{
			pNew->pNext=pHead;/*将下一个节点设置为空*/
			pEnd=pNew;/*表明这既是首也是尾，这只适用于头指针*/
			pHead=pNew;/*将指针赋给头指针*/
		}
		else/*用于不是第一次加入节点*/
		{
			pNew->pNext=NULL;/*将新加入节点结构中的指针指向为空*/
			pEnd->pNext=pNew;/*新的指针赋给上一个节点结构的结构指针*/
			pEnd=pNew;/*将新的节点结构定义为最后一个节点*/
		}
		pNew=(struct student*)malloc(sizeof(struct student));/*再次分配内存，并且返回一个指针*/
		scanf("%s",&pNew->name);
		scanf("%d",&pNew->num);
	}
	free(pNew);/*释放多余内存*/
	return pHead;/*返回头指针*/
}

void print(struct student* pHead)/*print函数用于链表的输出*/
{
	struct student* pTemp;/*建立一个临时指针用于链表的临时操作*/
	int index=1;/*表示链表的序号*/
	pTemp=pHead;/*将头指针赋给临时指针*/

	while(pTemp!=NULL)/*第一次输出的是头指针*/
	{
		printf("输出第NO%d个链表:\n",index);
		printf("%s\n",pTemp->name);
		printf("%d\n",pTemp->num);
		pTemp=pTemp->pNext;/*（头指针输出后）移动临时指针到下一个节点*/
		index++;/*链表序号自加*/
	}
}
/*插入链表*/
struct student* Insert(struct student* pHead)
{
	struct student* pNew;/*指向新分配的空间*/
	
	printf("请输入要插入的信息:\n");
	pNew=(struct student*)malloc(sizeof(struct student));/*分配内存，并返回一个指针，将指针赋给pNew*/
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->num);
	pNew->pNext=pHead;
	pHead=pNew;
	
	iCount++;
	return pHead;
}

int main()
{
	struct student *pHead;/*定义一个头指针结构*/
	pHead=Create();/*调用链表建立函数*/
	pHead=Insert(pHead);
	print(pHead);/*输出链表*/
	system("pause");
	return 0;
}
















