#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define T 36000

int add(int a, int b) {
	if (!a) return b;
	return add((a&b) << 1, a^b);
}

int main() {
	srand(time(0));
	int count[13] = { 0 };
	for (int i = 0;i < T;i++) {
		count[add((add(rand() % 6, 1)), (add(rand() % 6, 1)))]++;
	}
	printf("Sum\tTimes\tProbability\n");
	for (int i = 2;i < 13;i++) printf("%d\t%d\t%.3f\n", i, count[i], (float)count[i] / 36000);
	putchar('\n');
}
