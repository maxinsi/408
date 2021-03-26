#include<stdio.h>
#include<stdlib.h>

//链表中结点间通过复制数据和调换前后指针可以起到降低时间复杂度的效果
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

//静态链表
//元素下标反映了物理存储地址，第i个元素表示逻辑顺序
//为了寻找空闲元素位置，可以讲其下表设置为-2
typedef struct{
	int data;
	int next;
}SNode,SLinkList[Max];

void initSLinkList() {
	SLinkList a;
}

////不带头结点
//bool initList(LinkList &L) {
//	L = NULL; //空表，没有存放结点
//	return true;
//}
//
//bool empty(LinkList &L) {
//	return (L == NULL);
//}

//带头结点
bool initList(LinkList &L) {
	L = (LNode*)malloc(sizeof(LNode));
	if (L==NULL) {
		return false;
	}
	L->next = NULL;
	return true;
}

//固定位置插入
bool insert(LinkList &L,int i, int e) {
	if (i<1) {
		return false;
	}
	LNode* p;//p指向当前扫描到的结点
	int j = 0;//当前p指向第几个结点
	p = L;//p指向头结点，头结点是第0个结点（不存数据）
	while (p!=NULL&&j<i-1) {
		p = p->next;
		j++;
	}

	return insertNext(p, e);

}

//后插入操作
bool insertNext(LNode *p,int e) {
	if (p==NULL) {
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s==NULL) {//内存不足，分配失败
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
	p->next = s;	//s连接到p后
	int temp = p->data;	//交换数据域部分
	p->data = s->data;
	s->data = temp;
	return true;
}

//删除特定位置的元素，并且返回e的值
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
	LNode* q = p->next;		//q标记p的后继
	e = q->data;	//复制数据
	p->next = q->next;	//删除结点
	free(q);
	return true;
}

//删除指定结点p
bool nodeDelete(LinkList &L,LNode *p) {
	if (p==NULL) {
		return false;
	}
	LNode* q;
	int j = 0;
	q = L;
	while (q!=NULL) {
		if (q->next==p) {	//找到p前面的结点
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

//后插，两个指针，s开辟新空间存数据，r表示当前最后一个LNode
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

//头插法，数据是逆置的.因此头插法可以用来做链表逆置的题目
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

//双向链表后插
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

//循环链表判断条件由==NULL变为==L本身