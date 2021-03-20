//#include<stdlib.h>
//#include<stdio.h>
//
//void circle(int A[],int n,int p) {
//	int* temp = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < p; i++) {
//		temp[i] = A[i];
//	}
//	for (int j = p; j < n; j++) {
//		A[j - p] = A[j];
//	}
//	for (int k = 0; k < p; k++) {
//		A[n - p + k] = temp[k];
//	}
//}
//
//int main() {
//	int n = 20;
//	int A[20];
//	for (int i = 0; i < n; i++) {
//		A[i] = i * 1;
//		printf("%d\n", A[i]);
//	}
//	printf("--------\n");
//	circle(A, 20, 5);
//	for (int j = 0; j < n; j++) {
//		printf("%d\n", A[j]);
//	}
//}