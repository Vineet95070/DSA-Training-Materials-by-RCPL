#include <iostream>
using namespace std;

int linerSearch(int arr[], int size, int key){
	
	for( int i=0; i<size; i++ ){
		
		if( arr[i] == key )
			return i;
	}
	
	return -1;
}

int main(){
	
	int arr[8] = {90, 78, 56, 45, 34, 12, 99, 67};
	
	cout<< linerSearch(arr, 8, 12);
	
	
	return 0;
}
