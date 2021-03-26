#include<stdio.h>
#include<stdlib.h>

//�����н���ͨ���������ݺ͵���ǰ��ָ������𵽽���ʱ�临�Ӷȵ�Ч��
#define Max 10
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;

typedef struct DNode{
	int data;
	struct DNode* next;
	struct DNode* prior;
}DNode,*DLinkList;

//��̬����
//Ԫ���±귴ӳ������洢��ַ����i��Ԫ�ر�ʾ�߼�˳��
//Ϊ��Ѱ�ҿ���Ԫ��λ�ã����Խ����±�����Ϊ-2
typedef struct{
	int data;
	int next;
}SNode,SLinkList[Max];

void initSLinkList() {
	SLinkList a;
}

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

bool insertPrior(LNode* p, int e) {
	if (p==NULL) {
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s==NULL) {
		return false;
	}
	s->next = p->next;
	p->next = s;	//s���ӵ�p��
	int temp = p->data;	//���������򲿷�
	p->data = s->data;
	s->data = temp;
	return true;
}

//ɾ���ض�λ�õ�Ԫ�أ����ҷ���e��ֵ
bool linkListDelete(LinkList &L,int i,int &e) {
	if (i<1) {
		return false;
	}
	LNode* p;
	int j = 0;
	p = L;
	while (p!=NULL&&j<i-1) {
		p = p->next;
		j++;
	}
	if (p==NULL) {
		return false;
	}
	LNode* q = p->next;		//q���p�ĺ��
	e = q->data;	//��������
	p->next = q->next;	//ɾ�����
	free(q);
	return true;
}

//ɾ��ָ�����p
bool nodeDelete(LinkList &L,LNode *p) {
	if (p==NULL) {
		return false;
	}
	LNode* q;
	int j = 0;
	q = L;
	while (q!=NULL) {
		if (q->next==p) {	//�ҵ�pǰ��Ľ��
			q->next = p->next;
			return true;
		}
		q = q->next;
	}
	if (q==NULL) {
		return false;
	}
}

LNode* getElem(LinkList &L,int i) {
	if (i<1) {
		return NULL;
	}
	LNode* p;
	int j = 0;
	p = L;
	while (p!=NULL&&j<i) {
		p = p->next;
		j++;
	}
	return p;
}

//��壬����ָ�룬s�����¿ռ�����ݣ�r��ʾ��ǰ���һ��LNode
LinkList list_tailInsert() {
	int elem;
	LinkList L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	LNode* s = L, *r = L;
	scanf("%d", &elem);
	while (elem!=9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = elem;
		r->next = s;
		r = s;
		scanf("%d", &elem);
	}
	r->next = NULL;
	return L;
}

//ͷ�巨�����������õ�.���ͷ�巨�����������������õ���Ŀ
LinkList list_headInsert() {
	int elem;
	LinkList L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &elem);
	while (elem!=9999) {
		LNode* s = (LNode*)malloc(sizeof(LNode));
		s->data = elem;
		s->next = L->next;
		L->next = s;
		scanf("%d", elem);
	}
}

//˫��������
bool insertNextDNode(DNode *p,DNode *s) {
	if (p==NULL||s==NULL) {
		return false;
	}
	s->next = p->next;
	if (p->next!=NULL) {
		p->next->prior = s;
	}
	s->prior = p;
	p->next = s;
	return true;
}

//ѭ�������ж�������==NULL��Ϊ==L����