#include <stdio.h>

int main() {
	char s[100];
	int i;

	gets(s);

	for (i = 0; i < 5; i++) {
		printf("%s\n", s);
	}

	return 0;
}
