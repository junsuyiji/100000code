#pragma warning(disable:4996)��
//������һ���ǽ�ֹ��ʾ״̬�����õģ�scanf�е�����
#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct PNode {
	float coef;
	int expn;
	struct PNode* next;

}PNode,*polynomial;

void creat(PNode* L, int n)
{
		L = new PNode;
		L->next = NULL;
		for (int i = 1; i < n; i++)
		{
			PNode *s;
			printf("%d", i);
			scanf("%lf", &s->coef);
			printf("%d", i);
			scanf("%d", &s->expn);

		}
	
}
