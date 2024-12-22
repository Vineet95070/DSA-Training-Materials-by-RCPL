#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int s, int e){
	
	if( s > e )
		return;
	
	for(int i=s; i<e; i++){
		
		if( arr[i] > arr[i+1] )
			swap(arr[i], arr[i+1]);
	}
	
	bubbleSort(arr, s, e-1);
}

int main(){
	
	vector<int> arr = {12, 89, 34, 11, 77, 56, 34};
	
	bubbleSort(arr, 0, 6);
	
	for(auto i: arr)
		cout<< i <<" ";
		
	return 0;
}
