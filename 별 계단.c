**
 **
  **
   **
    **
#include <stdio.h>

int main() {
	int a;
	int b=0;
	scanf("%d", &a);
	for(int i=1; i<=a; i++) {
		for(int j=1; j<=b; j++) {
			printf(" ");
		}
 		printf("**\n");
 		b++;
 	}
 	
}
