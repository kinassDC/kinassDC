#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 100

//������������
//int sort(int a[6], int b[6]) {
//	for (int i = 0; i < 6; i++) {
//		int num = 0;
//		for (int ii = 0; ii < 6; ii++ ) {
//			if (a[i] - a[ii] < 0) {
//				num++;
//			}
//		}
//		b[num] = a[i];
//	}
//	for (int i = 0; i < 6; i++) {
//		int num = b[i];
//		printf("%d\n", num);
//	}
//	return 0;
//}
//
//int main() {
//	int arr[6] = { 4, 5, 2,11, 7, 8 };
//	int ar[6] = { 0, 0, 0, 0, 0, 0};
//	sort(arr, ar);
//	return 0;
//}

void sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int temp = a[i];
		for (int ii = i + 1; ii < n - 1; i++) {
			if (temp > a[ii]) {
				int temp1 = temp;
				temp  = a[ii];
				a[ii] = temp1;
			}
		}
		a[i] = temp;
	}
}
//int main() {
//	int n, a[MAX];
//	printf("������Ҫ�Ƚϵ�Ԫ�ظ�����");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("��%d��Ԫ��:", i + 1);
//		scanf_s("%d", &a[i]);
//	}
//	printf("�����: ");
//	sort(a, n);
//	for (int i = 0; i < n; i++) {
//		printf("%d", a[i]);
//	}
//	return 0;
//}
#define MAX_SIZE 100 

//void sort(int a[], int n) {
//    int i, j, temp;
//    for (i = 0; i < n - 1; ++i) {
//        for (j = 0; j < n - i - 1; ++j) {
//            if (a[j] > a[j + 1]) {
//                temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
//}

int main() {
    int a[MAX_SIZE], n, i;

    printf("����Ԫ�ظ���:");
    scanf("%d", &n);

    printf("����%d��Ԫ��:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, n);

    printf("����������:");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}