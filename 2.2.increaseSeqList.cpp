//#include<stdio.h>
//#include<stdlib.h>
//
//const int InitSize = 10;
//typedef struct {
//	int* data;
//	int maxSize;
//	int length;
//} seqList;
//
//void initList(seqList &L) {
//	L.data = (int*)malloc(sizeof(int) * InitSize);
//	L.maxSize = InitSize;
//	L.length = 0;
//}
//
//void increaseSize(seqList &L,int len) {
//	int* p = L.data;
//	L.data = (int*)malloc(sizeof(int) * (InitSize + len));
//	for (int i = 0; i < L.length; i++) {
//		L.data[i] = p[i];
//	}
//	L.maxSize = L.maxSize + len;
//	free(p);
//}
//
//int main() {
//	seqList L;
//	initList(L);
//	for (int i = 0; i < L.length; i++) {
//		L.data[i] = i * 2;
//	}
//	increaseSize(L, 5);
//	return 0;
//}