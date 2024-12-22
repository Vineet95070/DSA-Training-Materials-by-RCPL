#include <iostream>
using namespace std;

int main(){
	
	int x = 11, y=22, z=33, a=44, b=55;
	
	int *arr[5] = {&x, &y, &z, &a, &b};
	
	int **ptr[5] = {&arr[0], &arr[1], &arr[2], &arr[3], &arr[4]};
	
	
	int i=0;
	while( i != 5){
		
//		printf("%d \t", ***(ptr+i) );
		printf("%d \t", **ptr[i]);
		
		i++;
	}
	
	
	
	return 0;
}
