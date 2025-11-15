#include <stdio.h>

int main() {
	char s[100];
	int n, i;

	gets(s);
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%s\n", s);
	}

	return 0;
}
