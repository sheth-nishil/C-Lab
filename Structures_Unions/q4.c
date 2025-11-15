#include <stdio.h>

struct cr {
	char name[50];
	int age;
	int matches;
	float avg;
};

int main() {
	struct cr c[10];
	struct cr t;
	int i, j;

	for (i = 0; i < 10; i++) {
		scanf(" %[^\n]", c[i].name);
		scanf("%d%d%f", &c[i].age, &c[i].matches, &c[i].avg);
	}

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (c[i].avg > c[j].avg) {
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%s %.2f\n", c[i].name, c[i].avg);
	}

	return 0;
}
