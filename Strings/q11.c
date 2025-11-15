#include <stdio.h>
#include <string.h>

int main() {
	char s[200];
	int i, n;

	gets(s);

	n = strlen(s);

	for (i = n - 1; i >= 0; i--) {
		printf("%c\n", s[i]);
	}

	return 0;
}
