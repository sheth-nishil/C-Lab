#include <stdio.h>
#include <string.h>

int main() {
	char s[200];
	int i, n;
	char t;

	gets(s);

	n = strlen(s);

	for (i = 0; i < n / 2; i++) {
		t = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = t;
	}

	printf("%s", s);

	return 0;
}
