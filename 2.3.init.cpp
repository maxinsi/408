#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;

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

bool insertPrior(LNode* p, LNode* s) {
	if (p==NULL||s==NULL) {
		return false;
	}
	s->next = p->next;
	p->next = s;	//s连接到p后
	int temp = p->data;	//交换数据域部分
	p->data = s->data;
	s->data = temp;
	return true;
}