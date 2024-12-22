#include <iostream>

int binarySearch(int arr[], int key, int size){
	
	int e = size-1;
	int s = 0;
	for(int i=s; i<e; i++){
		
		int mid = (s + e)/2;
		
		if( key == arr[mid] )
			return mid;
		
		else if( key < arr[mid] )
			e = mid-1;
		
		else if( key > arr[mid] )
			s = mid+1;
	}
	return -1;
}

int main(){
	
	int arr[7] = {12, 34, 67, 69, 78, 89, 90};
	
	std::cout << binarySearch(arr, 899, 7);
	
	
	return 0;
}
