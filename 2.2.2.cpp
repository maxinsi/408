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
//}
//
//void printList(seqList L) {
//	for (int i = 0; i < L.length; i++) {
//		printf("%d\n", L.data[i]);
//	}
//	printf("-------\n");
//}
//
////void reverse(seqList &L) {
////	seqList L2;
////	for (int i = 0; i < L.length; i++) {
////		L2.data[i] = L.data[i];
////	}
////	for (int i = 0; i < L.length; i++) {
////		L.data[i] = L2.data[L.length-1-i];
////	}
////}
//
//void reverse(seqList &L) {
//	int temp;
//	for (int i = 0; i < L.length/2; i++) {
//		temp = L.data[i];
//		L.data[i] = L.data[L.length - 1 - i];
//		L.data[L.length - 1 - i] = temp;
//	}
//}
//
//int main() {
//	seqList L;
//	initList(L);
//	printList(L);
//	reverse(L);
//	printList(L);
//}