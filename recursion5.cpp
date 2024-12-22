#include <iostream>

int i=0;

int search( int arr[], int s, int key){
	
	if( s == 0 )
		return -1;
	
	if( arr[0] == key )
		return i;
	
	i++;
	search(arr, s-1, key);
}

int main(){
	
	int arr[6] = {90, 34, 56, 2, 89, 33};
	
	std::cout<<"Element found: "<< search(arr, 6, 89);
		
	
	return 0;
}
