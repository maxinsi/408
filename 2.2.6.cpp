//条件加强时散列表做

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
//bool dele(seqList &L) {
//	if (L.length==0) {
//		return false;
//	}
//
//	int i = 0;
//	for (int j = 1; j < L.length;j++) {
//		if (L.data[i]!=L.data[j]) {
//			i = i + 1;
//			L.data[i] = L.data[j];
//		}
//	}
//	L.length = i + 1;
//	return true;
//}