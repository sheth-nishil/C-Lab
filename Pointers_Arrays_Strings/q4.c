#include <stdio.h>

int main() {
	char s0[50];
	char s1[50];
	char s2[50];
	char *b[3];
	int i;

	b[0] = s0;
	b[1] = s1;
	b[2] = s2;

	for (i = 0; i < 3; i++) {
		gets(b[i]);
	}

	for (i = 0; i < 3; i++) {
		printf("%s\n", b[i]);
	}

	return 0;
}
