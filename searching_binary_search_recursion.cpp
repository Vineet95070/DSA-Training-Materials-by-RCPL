#include <iostream>

int binarySearch(int arr[], int key, int s, int e){
	
	if( s > e )
		return -1;
	
	int mid = (s+e) / 2;
	
	if( arr[mid] == key )
		return mid;
	
	if( arr[mid] > key )
		binarySearch(arr, key, s, mid-1);
		
	binarySearch(arr, key, mid+1, e);
}

int main(){
	
	int arr[7] = {12, 34, 67, 69, 78, 89, 90};
	
	std::cout << binarySearch(arr, 89, 0, 6);
	
	
	return 0;
}
