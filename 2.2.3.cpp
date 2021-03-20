//#include<stdio.h>
//
//typedef struct {
//	int data[10];
//	int length = 10;
//}seqList;
//
//void initList(seqList& L) {
//	for (int i = 0; i < 10; i++) {
//		L.data[i] = i * 2;
//	}
//
//	L.data[0] = 4;
//	L.data[6] = 4;
//}
//
//void printList(seqList L) {
//	for (int i = 0; i < L.length; i++) {
//		printf("%d\n", L.data[i]);
//	}
//	printf("-------\n");
//}
//
//void dele(seqList &L,int x) {
//	int k = 0;
//	for (int i = 0; i < L.length; i++) {
//		if (L.data[i]==x) {
//			k++;
//		}
//		else {
//			L.data[i - k] = L.data[i];
//		}
//	}
//	L.length = L.length - k;
//}
//
//int main() {
//	seqList L;
//	initList(L);
//	printList(L);
//	dele(L, 4);
//	printList(L);
//}
//
//
