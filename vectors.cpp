#include <iostream>
using namespace std;

int main(){
	
	int n; 
	cin>>n;
	
	int arr[n];
	
	int i=0;
	while( i != n ){
		
		cin>> arr[i];
		i++;
	}
	
	i=0;
	while( i != n ){
		
		cout<<arr[i] <<" ";
		i++;
	}
	
	
	return 0;
}
