#include <stdio.h>

struct stu {
	int r;
	char name[50];
	char course[50];
	char major[50];
	char minor[50];
};

int main() {
	struct stu s[10];
	int i, r;

	for (i = 0; i < 10; i++) {
		scanf("%d", &s[i].r);
		scanf(" %[^\n]", s[i].name);
		scanf(" %[^\n]", s[i].course);
		scanf(" %[^\n]", s[i].major);
		scanf(" %[^\n]", s[i].minor);
	}

	for (i = 0; i < 10; i++) {
		printf("%s\n", s[i].name);
	}

	scanf("%d", &r);

	for (i = 0; i < 10; i++) {
		if (s[i].r == r) {
			printf("%d\n", s[i].r);
			printf("%s\n", s[i].name);
			printf("%s\n", s[i].course);
			printf("%s\n", s[i].major);
			printf("%s\n", s[i].minor);
			break;
		}
	}

	return 0;
}
