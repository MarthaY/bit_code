#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"


void InitContact(Contact* pc)

{
	assert (pc);
	pc->sz=0;
	memset(pc->data,0,sizeof(pc->data));//��ʼ��data��(������)�ֽڣ�or MAX*sizeof(PepoInfo)

}

void AddContact(Contact* pc)

{
	assert (pc);
	if (pc->sz==MAX)
	{
		printf ("ͨѶ¼�������޷���ӣ�\n");
		return ;
	}
	//���
	printf("����������:>");
	scanf ("%s",pc->data[pc->sz].name);
	printf("����������:>");
	scanf ("%d",&(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf ("%s",&(pc->data[pc->sz].sex));
	printf("�������ַ:>");
	scanf ("%s",&(pc->data[pc->sz].addr));
	printf("������绰:>");
	scanf ("%s",&(pc->data[pc->sz].tele));
	pc->sz++;
	printf("��ӳɹ���\n");

}

void ShowContact(Contact* pc)
{
	int i=0;
	assert (pc);
	//���� ���� �绰 �Ա� ��ַ
	printf("%10s\t%5s\t%5s\t%15s\t%12s\n","����","����","�Ա�","��ַ","�绰");//\tˮƽ�Ʊ��
	for(i=0;i<pc->sz;i++)
	{
		printf("%10s\t%5d\t%5s\t%12s\t%15s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].addr,
			pc->data[i].tele);
	}

}

int FindByName (Contact* pc)
{
	char name[NAME_MAX]={0};
	int i=0;
	printf("����������:>");
	scanf ("%s",name);
	for(i=0;i<pc->sz;i++)
	{
		if(strcmp (pc->data[i].name,name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)
{
	int pos = 0;
	int i=0;
	if(pc->sz==0)
	{
		printf("���ź���û��ɾ��");
		return ;
	}
	//��
	pos = FindByName (pc);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return ;
	}
	
	//ɾ
	for (i=pos;i<pc->sz-1;i++)
	{
		pc->data[i]=pc->data[i+1];
	}
	pc->sz--;
	printf("ɾ���ɹ���\n");
}