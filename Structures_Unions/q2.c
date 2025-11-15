#include <stdio.h>

struct cust {
	int acc;
	char name[50];
	float bal;
};

int main() {
	struct cust c[10];
	int i, acc;
	float amt;
	int code;

	for (i = 0; i < 10; i++) {
		scanf("%d", &c[i].acc);
		scanf(" %[^\n]", c[i].name);
		scanf("%f", &c[i].bal);
	}

	for (i = 0; i < 10; i++) {
		if (c[i].bal < 100) {
			printf("%d %s\n", c[i].acc, c[i].name);
		}
	}

	scanf("%d%f%d", &acc, &amt, &code);

	for (i = 0; i < 10; i++) {
		if (c[i].acc == acc) {
			if (code == 1) {
				c[i].bal = c[i].bal + amt;
			} else if (code == 0) {
				if (c[i].bal < amt) {
					printf("insufficient\n");
				} else {
					c[i].bal = c[i].bal - amt;
				}
			}
			printf("%.2f\n", c[i].bal);
			break;
		}
	}

	return 0;
}
