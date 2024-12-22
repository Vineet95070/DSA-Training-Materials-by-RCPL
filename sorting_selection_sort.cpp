#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> & arr){
	
	for(int i=0; i<arr.size(); i++){
		
		for(int j=i+1; j<arr.size(); j++){
			
			if( arr[i] > arr[j] ){
				
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	
	vector<int> arr = {12, 89, 34, 11, 77, 56, 34};
	
	selectionSort(arr);
	
	for(auto i: arr)
		cout<< i <<" ";
		
	return 0;
}
