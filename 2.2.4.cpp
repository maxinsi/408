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
//bool dele(seqList &L,int s,int t) {
//	if (L.length==0||s>=t) {
//		return false;
//	}
//	int indexs=-1;
//	int indext=-1;
//	for (int i = 0; i < L.length; i++) {
//		if (L.data[i]==s) {
//			indexs = i;
//		}
//		if (L.data[i]==t) {
//			indext = i;
//		}
//	}
//	if (indexs==-1||indext==-1) {
//		return false;
//	}
//	int gap = indext - indexs + 1;
//	for (int i = indext + 1; i < L.length; i++) {
//		L.data[i - gap] = L.data[i];
//	}
//	L.length = L.length - gap;
//}
//
//int main() {
//	seqList L;
//	initList(L);
//	printList(L);
//	dele(L,4,10);
//	printList(L);
//}