#include <stdio.h>

int main() {
	int a;
	int go;
	int temp=0;
	scanf("%d", &a);
	go = a;
	if(a%10==3 || a%10 ==6 || a%10 == 9) {
		temp++;
	}
	a/=10;
	if(a%10==3 || a%10 ==6 || a%10 == 9) {
		temp++;
	}
	a/=10;
	if(a%10==3 || a%10 ==6 || a%10 == 9) {
		temp++;
	}
	if(temp == 1) {
		printf("K");
	}
	else if(temp == 2) {
		printf("KK");
	}
	else if(temp == 3) {
		printf("KKK");
	}
	else {
		printf("%d", go);
	}
}
