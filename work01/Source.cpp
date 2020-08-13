#include<stdio.h>
#include<math.h>
int main() {
	printf("Extra tuition");
	int x, y = 450, z, c, d, e, f = 4, g = 0, h = 10;
	printf("\nEnter Hours : ");
	scanf_s("%d", &x);
	z = x * y;
	printf("\nTotal : %d", z);
	printf("\nPay : ");
	scanf_s("%d", &c);
	d = c - z;
	printf("Change : %d", d);
	printf("\nYour score full of 10: ");
	scanf_s("%d", &e);
	if (5 <= e) {
		printf("You pass the exam");
	}
	else {
		if (e <= f) {
			printf("You fail the exam");
		}
	}
	return 0;
}