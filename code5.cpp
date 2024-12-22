#include <iostream>
using namespace std;

int i=0;
int linerSearch(int arr[], int size, int key){
	
	if( size == 0)
		return -1;
		
	if( arr[0] == key )
		return i;
		
	i++;
	linerSearch(arr+1, size-1, key);
}

int main(){
	
	int arr[8] = {90, 78, 56, 45, 34, 12, 99, 67};
	
	cout<< linerSearch(arr, 8, 12);
	
	
	return 0;
}
