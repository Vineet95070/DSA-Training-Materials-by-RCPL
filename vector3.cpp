#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int largest(vector <int> v){
	
	int Max = INT_MIN;
	for(int i=0; i<v.size(); i++){
		
		if( v[i] > Max )
			Max = v[i];
	}
	return Max;
}

int main(){
	
	vector <int> v = {10, 20, 30, 40, 50};
	
//	cout<< largest(v) ;
	int x = 2147483647;
	
	cout<<endl << x <<endl<<endl;

	cout<< INT_MAX <<endl;
	cout<< INT_MIN <<endl;
	cout<< UINT_MAX <<endl;
	
	return 0;
}

