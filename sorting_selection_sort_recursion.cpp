#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr, int s,int e){
	
	if( s > e )
		return;
		
	int temp = s;
	for(int i=s; i<=e; i++){
		
		if( arr[i] < arr[temp] )
			temp = i;
	}
	
	swap( arr[temp], arr[s] );
	
	selectionSort(arr, s+1, e);
}

int main(){
	
	vector<int> arr = {12, 89, 34, 11, 77, 56, 34};
	
	selectionSort(arr, 0, 6);
	
	for(auto i: arr)
		cout<< i <<" ";
		
	return 0;
}
