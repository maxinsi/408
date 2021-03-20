////反转顺序表很灵活
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
//void reverse(seqList &L,int from,int to) {
//	for (int i = 0; i < to-from / 2; i++) {
//		//交换L.data[i]与L.data[n-i-1]
//		int temp = L.data[from+i];
//		L.data[from+i] = L.data[to - i];
//		L.data[to-i] = temp;
//	}
//}
//int main() {
//	seqList L;
//	initList(L);
//	printList(L);
//	reverse(L,0,2);
//	printList(L);
//}