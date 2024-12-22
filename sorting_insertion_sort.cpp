#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr){
	
	for(auto i: arr)
		cout<<i<<" ";
		
	cout<<endl;
}

void insertionSort(vector<int>& arr){
	
	for(int i=1; i<arr.size(); i++){
		
		int j=i-1;
		int current = arr[i];
		while( arr[j] > current && j>=0 ){
			
			arr[j+1] = arr[j];
			
			print(arr);
			j--;
		}
		arr[j+1] = current;
	}	
	
}

int main(){
	
	vector<int> arr = {2, 4, 6, 8, 3};
	
	insertionSort(arr);
	
	for(auto i: arr)
		cout<< i <<" ";
		
	return 0;
}
