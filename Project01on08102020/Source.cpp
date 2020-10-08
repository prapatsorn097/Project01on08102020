#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, L, n, x[100], temp;
	printf("Input N : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
	}
	for (L = 1; L <= n - 1; L++) {
		for (i = 1; i <= n - L; i++) {
			if (x[i] > x[i + 1]) {
				temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
			}
		}
	}
	for (i = 1; i <= n; i++)
		printf("%d ", x[i]);
	printf("\n");
}