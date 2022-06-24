#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n < 0) {
		puts("ERROR\n");
	} else {
		float sum = 0;
		int i;
		for (i = 1; i <= n; i++) {
			/* code */
			sum += 1.0 / i;
		}
		printf("%0.5f\n", sum);
	}
	return 0;
}
