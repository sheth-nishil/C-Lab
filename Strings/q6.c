#include <stdio.h>
#include <string.h>

int main() {
	char a[200];
	char b[200];
	int r;

	gets(a);
	gets(b);

	r = strcmp(a, b);

	if (r == 0) {
		printf("same");
	} else if (r > 0) {
		printf("a>b");
	} else {
		printf("a<b");
	}

	return 0;
}
