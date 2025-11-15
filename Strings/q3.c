#include <stdio.h>
#include <ctype.h>

int main() {
	char s[200];
	int i;

	gets(s);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = toupper((unsigned char)s[i]);
	}

	printf("%s", s);

	return 0;
}
