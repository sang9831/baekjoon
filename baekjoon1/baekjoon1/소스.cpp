//10818문제
#include <stdio.h>

void calc(int N) {
	int* array = new int[N];
	int answer[2] = { 0, 0 };

	for (int i = 0; i < N; i++) {
		//printf("숫자입력=");
		scanf_s("%d", &array[i]);
	}

	/*for (int i = 0; i < N; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");*/

	answer[0] = array[0];

	for (int i = 1; i < N; i++) {
		if (array[i] < answer[0]) {
			answer[0] = array[i];
		}
		else if (array[i] > answer[1]) {
			answer[1] = array[i];
		}
		//printf("=%d %d\n", answer[0], answer[1]);
	}

	printf("%d %d", answer[0], answer[1]);
}

int main() {
	int a;
	//printf("N입력=");
	scanf_s("%d", &a);
	calc(a);
}