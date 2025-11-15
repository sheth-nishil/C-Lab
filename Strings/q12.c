#include <stdio.h>
#include <ctype.h>

int main() {
	char s[200];
	int i;
	int a, e, ii, o, u;

	a = 0;
	e = 0;
	ii = 0;
	o = 0;
	u = 0;

	gets(s);

	for (i = 0; s[i] != '\0'; i++) {
		char c = tolower((unsigned char)s[i]);
		if (c == 'a') {
			a++;
		} else if (c == 'e') {
			e++;
		} else if (c == 'i') {
			ii++;
		} else if (c == 'o') {
			o++;
		} else if (c == 'u') {
			u++;
		}
	}

	printf("a=%d\n", a);
	printf("e=%d\n", e);
	printf("i=%d\n", ii);
	printf("o=%d\n", o);
	printf("u=%d\n", u);

	return 0;
}
