#include <stdio.h>
#include <string.h>

int main() {
	char name[200];
	int i;
	int last;

	gets(name);

	i = 0;
	last = 0;

	while (name[i] != '\0') {
		if (name[i] == ' ') {
			if (i > last) {
				printf("%c.", name[last]);
			}
			last = i + 1;
		}
		i++;
	}

	printf("%s", name + last);

	return 0;
}
