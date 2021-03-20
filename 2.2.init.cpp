//#include<stdlib.h>
//const int MaxSize = 10;
//typedef struct L{
//	int data[MaxSize];
//	int* data1;
//	int length;
//}seqList;
//
//void initList(seqList &L) {
//	for (int i = 0; i < L.length; i++) {
//		L.data[i] = 0;
//	}
//	L.length = 0;
//}
//
////void listInsert(seqList& L, int i,int e) {
////	for (int j = L.length; j >=i; j--) {
////		L.data[j] = L.data[j - 1];
////	}
////	L.data[i - 1] = e;
////	L.length++;
////}
//
//bool listInsert(seqList& L, int i, int e) {
//	bool flag = false;
//	if (i<1||i>L.length+1) {
//		flag = false;
//	}
//	if (i>= MaxSize) {
//		flag = false;
//	}
//	for (int j = L.length; j >=i; j--) {
//		L.data[j] = L.data[j - 1];
//	}
//	L.data[i - 1] = e;
//	L.length++;
//	flag = true;
//	return flag;
//}
//
////用&e把删掉的值带回来
//bool listDelete(seqList& L, int i, int &e) {
//	bool flag = false;
//	if (i<1 || i>L.length) {
//		flag = false;
//	}
//	e = L.data[i - 1];
//	for (int j = i - 1; j <= L.length - 2; j++) {
//		L.data[j] = L.data[j + 1];
//	}
//	L.length--;
//	flag = true;
//	return flag;
//}
//
//int getElem(seqList L,int i) {
//	return L.data[i];
//}
//
//int locateElem(seqList L,int e) {
//	int result=-1;
//	for (int i = 0; i < L.length; i++) {
//		if (L.data[i]==e) {
//			result = i+1;
//		}
//	}
//	return result;
//}
//
//int main() {
//	int e = -1;
//	seqList L;
//	initList(L);
//	listInsert(L, 1, 3);
//	return 0;
//}