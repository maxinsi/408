#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;

////����ͷ���
//bool initList(LinkList &L) {
//	L = NULL; //�ձ�û�д�Ž��
//	return true;
//}
//
//bool empty(LinkList &L) {
//	return (L == NULL);
//}

//��ͷ���
bool initList(LinkList &L) {
	L = (LNode*)malloc(sizeof(LNode));
	if (L==NULL) {
		return false;
	}
	L->next = NULL;
	return true;
}

//�̶�λ�ò���
bool insert(LinkList &L,int i, int e) {
	if (i<1) {
		return false;
	}
	LNode* p;//pָ��ǰɨ�赽�Ľ��
	int j = 0;//��ǰpָ��ڼ������
	p = L;//pָ��ͷ��㣬ͷ����ǵ�0����㣨�������ݣ�
	while (p!=NULL&&j<i-1) {
		p = p->next;
		j++;
	}

	return insertNext(p, e);

}

//��������
bool insertNext(LNode *p,int e) {
	if (p==NULL) {
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s==NULL) {//�ڴ治�㣬����ʧ��
		return false;
	}
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

bool insertPrior(LNode* p, LNode* s) {
	if (p==NULL||s==NULL) {
		return false;
	}
	s->next = p->next;
	p->next = s;	//s���ӵ�p��
	int temp = p->data;	//���������򲿷�
	p->data = s->data;
	s->data = temp;
	return true;
}