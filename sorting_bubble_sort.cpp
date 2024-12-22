#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr){
	
	int i=0;
	while( i < arr.size()-1 ){
		
		for(int j=0; j<arr.size()-1; j++){
			
			if(arr[j] > arr[j+1] )
				swap(arr[j], arr[j+1]);
		}
		i++;
	}
	
}

int main(){
	
	vector<int> arr = {12, 89, 34, 11, 77, 56, 34};
	
	bubbleSort(arr);
	
	for(auto i: arr)
		cout<< i <<" ";
		
	return 0;
}
