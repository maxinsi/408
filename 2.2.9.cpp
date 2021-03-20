//#include<stdio.h>
//
//typedef struct {
//	int data[50];
//	int length = 0;
//}seqList;
//
//void initList(seqList& L) {
//	for (int i = 0; i < 10; i++) {
//		L.data[i] = i * 2;
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
//void insert(seqList &L,int x) {
//	int index1=0;
//	int index2=L.length-1;
//	bool flag = false;
//	int mid = 0;
//	while (index1<=index2) {
//		mid = (index1 + index2) / 2;
//		if (x==L.data[mid]) {
//			flag = true;
//			break;
//		}
//		else if (x>L.data[mid]) {
//			index1 = mid+1;
//		}
//		else {
//			index2 = mid-1;
//		}
//	}
//
//	//找到x在最后一位时不进行交换，否则会有脏数据。
//	if (flag&&mid!=L.length-1) {
//		L.data[mid] = L.data[mid + 1];
//		L.data[mid + 1] = x;
//	}
//	if (!flag) {
//		for (int i = L.length; i > index2; i--) {
//			L.data[i] = L.data[i - 1];
//		}
//		L.data[index1] = x;
//		L.length++;
//	}
//}
//
//int main() {
//	seqList L;
//	initList(L);
//	printList(L);
//	insert(L, 5);
//	printList(L);
//	insert(L, 18);
//	printList(L);
//}