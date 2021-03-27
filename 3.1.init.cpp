//#include<stdlib.h>
//#include<stdio.h>
//#include <iostream>
//using namespace std;
//#define MaxSize 10
//
//typedef struct sq{
//	int data[MaxSize];
//	int top=-1;	//做题时注意是指向栈顶元素还是指向栈顶元素上面的位置
//}sqStack;
//
//bool stackEmpty(sqStack S) {
//	if (S.top==-1) {
//		return true;
//	}
//	else{
//		return true;
//	}
//}
//
//bool push(sqStack &S,int e) {
//	if (S.top=MaxSize-1) {	//栈满，报错
//		return false;
//	}
//	S.data[++S.top] = e;
//	return true;
//}
//
//bool pop(sqStack &S,int & e) {
//	if (S.top==-1) {
//		return false;
//	}
//	e = S.data[S.top--];
//	return true;
//}
//
//bool gettop(sqStack &S,int &e) {
//	if (S.top==-1) {
//		return false;
//	}
//	e = S.data[S.top];
//	return true;
//}
//
////共享栈
//typedef struct sh{
//	int data[MaxSize];
//	int top0=-1;
//	int top1=MaxSize;
//}shStack;
//
//bool shStackEmpty(shStack &S) {
//	if (S.top0+1==S.top1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////链栈
//typedef struct LinkNode {
//	int data;
//	struct LinkNode* next;
//}LinkNode,*LinkStack;
//
////初始化
//void initLinkStack(LinkStack &L) {
//	L = NULL;
//}
//
////增
//bool pushLinkStack(LinkStack &L,int e) {
//	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
//	s->data = e;
//	s->next = L;
//	L = s;
//	return true;
//}
//
////删
//bool popLinkStack(LinkStack &L,int &e) {
//	if (L==NULL) {
//		return false;
//	}
//	e = L->data;
//	L = L->next;
//	return true;
//}
//
//void printL(LinkStack &L) {
//	LinkNode* p=L;
//	while (p!=NULL) {
//		printf("%d\n", p->data);
//		p = p->next;
//	}
//}
//
//int main() {
//	LinkStack L;
//	initLinkStack(L);
//	for (int i = 0; i < 10; i++) {
//		pushLinkStack(L, i);
//	}
//	printL(L);
//	printf("-------\n");
//	int e=0;
//	popLinkStack(L, e);
//	cout << e << endl;
//	printf("-------\n");
//	printL(L);
//}
