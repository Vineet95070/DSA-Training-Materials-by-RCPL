#include <stdio.h>

int main(){
	
	const int x = 10;
	
	int *ptr = &x;
	
	*ptr = 20;
	
	printf("%d \n", x);
	
	
	return 0;
}
