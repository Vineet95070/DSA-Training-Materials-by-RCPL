#include <iostream>

bool search( int arr[], int s, int l, int key){
	
	if( s > l )
		return false;
	
	if( arr[0] == key )
		return true;
	
	return search(arr, s+1, l, key);
}

int main(){
	
	int arr[6] = {90, 34, 56, 2, 89, 33};
	
	if( search(arr, 0, 6, 89) )
		std::cout<<"Element found: \n";
	else
		std::cout<<"Element not exist: \n";
		
	
	return 0;
}
