#include <stdio.h>
#include <string.h>

int main() {
	char s[200];
	int i, n;
	int pal;

	gets(s);

	n = strlen(s);
	pal = 1;

	for (i = 0; i < n / 2; i++) {
		if (s[i] != s[n - 1 - i]) {
			pal = 0;
			break;
		}
	}

	if (pal) {
		printf("yes");
	} else {
		printf("no");
	}

	return 0;
}
