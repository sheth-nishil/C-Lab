#include <stdio.h>
#include <string.h>

int main() {
	char a[200];
	char b[200];

	gets(a);

	strcpy(b, a);

	printf("%s", b);

	return 0;
}
