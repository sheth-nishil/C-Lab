#include <stdio.h>

struct sd {
	int r;
	char name[50];
	int p;
	int m;
	int c;
	int t;
};

int main() {
	struct sd s;

	scanf("%d", &s.r);
	scanf(" %[^\n]", s.name);
	scanf("%d%d%d", &s.p, &s.m, &s.c);

	s.t = s.p + s.m + s.c;

	printf("%d\n", s.r);
	printf("%s\n", s.name);
	printf("%d\n", s.p);
	printf("%d\n", s.m);
	printf("%d\n", s.c);
	printf("%d\n", s.t);

	return 0;
}
