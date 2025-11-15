#include <stdio.h>
#include <ctype.h>

int main() {
	char s[200];
	int i;

	gets(s);

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = toupper((unsigned char)s[i]);
		} else if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = tolower((unsigned char)s[i]);
		}
	}

	printf("%s", s);

	return 0;
}
