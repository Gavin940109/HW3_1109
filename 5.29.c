#include<stdio.h>

int main() {
	int lcm	 = 1;
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	while (1) {
		if (lcm%num1 == 0 && lcm%num2 == 0) {
			printf("LCM is %d\n", lcm);
			break;
		}
		else {
			lcm++;
		}
	}
}