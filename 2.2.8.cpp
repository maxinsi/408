//#include<stdio.h>
//
//typedef struct {
//	int data[10];
//	int length=0;
//}seqList;
//
//typedef struct {
//	int data[20];
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
//void initTList(tseqList& L, int r) {
//	for (int i = 0; i < 20; i++) {
//		L.data[i] = i * r;
//	}
//	L.length = 20;
//}
//
//void printList(seqList L) {
//	for (int i = 0; i < L.length; i++) {
//		printf("%d\n", L.data[i]);
//	}
//	printf("-------\n");
//}
//
//void exchange(int A[],int m,int n) {
//	seqList temp;
//	for (int i = 0; i < m; i++) {
//		temp.data[i] = A[i];
//	}
//	temp.length = m;
//	for (int i = m; i < m+n; i++) {
//		A[i-m] = A[i];
//	}
//	for (int j = 0; j < m; j++) {
//		A[n + j] = temp.data[j];
//	}
//}
//
//int main() {
//	const int m = 10, n = 20;
//	int A[m + n];
//	seqList L1;
//	tseqList L2;
//	initList(L1, 2);
//	initTList(L2, 3);
//	for (int i = 0; i < m; i++) {
//		A[i] = L1.data[i];
//	}
//	for (int i = 0; i < n; i++) {
//		A[i+m] = L2.data[i];
//	}
//	for (int i = 0; i < m + n; i++) {
//		printf("%d\n", A[i]);
//	}
//	printf("-------\n");
//	exchange(A, m, n);
//	for (int i = 0; i < m + n; i++) {
//		printf("%d\n", A[i]);
//	}
//}