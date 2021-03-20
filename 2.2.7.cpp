//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct {
//	int data[10];
//	int length=0;
//}seqList;
//
//typedef struct {
//	int data[50];
//	int length=0;
//}tseqList;
//
//void initList(seqList& L,int r) {
//	for (int i = 0; i < 10; i++) {
//		L.data[i] = i * r;
//	}
//	L.length = 10;
//}
//
//void printList(seqList L) {
//	for (int i = 0; i < L.length; i++) {
//		printf("%d\n", L.data[i]);
//	}
//	printf("-------\n");
//}
//
//void p(tseqList L) {
//	for (int i = 0; i < L.length; i++) {
//		printf("%d\n", L.data[i]);
//	}
//	printf("-------\n");
//}
//
//tseqList merge(seqList& L1, seqList&L2) {
//	int index1 = 0, index2 = 0, index3 = 0;
//	tseqList L3;
//	//增加一个判断如果L1长度+L2长度<L3最大值，false
//	while (index1<L1.length&&index2<L2.length) {
//		if (L1.data[index1]<L2.data[index2]) {
//			L3.data[index3++] = L1.data[index1++];
//		}
//		else {
//			L3.data[index3++] = L2.data[index2++];
//		}
//	}
//	while (index1<L1.length) {
//		L3.data[index3++] = L1.data[index1++];
//	}
//	while (index2<L2.length) {
//		L3.data[index3++] = L2.data[index2++];
//	}
//	L3.length = index3;
//	return L3;
//}
//
//int main() {
//	seqList L1;
//	seqList L2;
//	initList(L1,2);
//	initList(L2,3);
//	printList(L1);
//	printList(L2);
//	tseqList L3 = merge(L1, L2);
//	p(L3);
//}