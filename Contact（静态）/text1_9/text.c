#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void menu()
{
	printf("**************************************\n");
	printf("**** 1.add              2.del     ****\n");
	printf("**** 3.serch            4.modify  ****\n");
	printf("**** 5.show             6.empty   ****\n");
	printf("**** 7.sort             0.exit    ****\n");
	printf("**************************************\n");
	printf("**************************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SERCH,
	MODIFY,
	SHOW,
	EMPTY,
	SORT,

};
void test()
{
	int input=0;
	//����ͨѶ¼
	Contact con ;
	InitContact(&con);//�����ڲ�Ҫ�ı亯���ⲿ��ֵʱ��Ҫ����ַ��
					  //��ʼ��ͨѶ¼

	do
	{
		menu ();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SERCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);//������ַҲ���ԣ������Ǵ�ӡ����Ч�ʻ����
			break;
		case EMPTY:
			break;
		case SORT:
			break;
		case EXIT:
			printf("�˳�ͨѶ¼��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
	
		}
	}while (input);
}
int main ()
{
	test();
	return 0;
}