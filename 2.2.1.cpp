//#include<stdio.h>
//
//typedef struct {
//	int data[10];
//	int length = 10;
//}seqList;
//
//bool minDelete(seqList &L,int &e) {
//	if (L.length==0) {
//		return false;
//	}
//	
//	int min = L.data[0];
//	int index = 0;
//	for (int i = 1; i < L.length; i++) {
//		if (L.data[i]<min) {
//			min = L.data[i];
//			index = i;
//		}
//	}
//	e = min;
//	L.data[index] = L.data[L.length-1];
//	L.length--;
//	return true;
//}
//
//void initList(seqList &L) {
//	for (int i = 0; i < 10; i++) {
//		L.data[i] = i * 2;
//	}
//	L.data[0] = 15;
//	L.data[5] = 3;
//}
//
//void printList(seqList L) {
//	for (int i = 0; i < L.length; i++) {
//		printf("%d\n",L.data[i]);
//	}
//	
//}
//
//int main() {
//	int e;
//	seqList L;
//	initList(L);
//	printList(L);
//	minDelete(L,e);
//	printf("--------\n");
//	printList(L);
//	printf("--------\n");
//	printf("%d", e);
//	return 0;
//}
//
