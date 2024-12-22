#include <iostream>
using namespace std;

int main(){
	
	int arr[5] = {12, 54, 43, 50 ,64};	
	
	
	int i=0;
	while( i != 5 ){
		
		cout<< arr[i] << " ";
		i++;
	}
	
	cout<<endl;
	i=0;
	while( i != 5 ){
		
		cout<< *( arr + i ) << " ";
		i++;
	}
	
	return 0;
}
