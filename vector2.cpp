#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector <int> v = {10, 20, 14, 78, 89};
	
	// Vector is typically define using Stack
	v.push_back(21);
	v.push_back(25);
	v.push_back(99);
	v.push_back(12);
	v.pop_back();
	v.pop_back();
	v.pop_back();
	
	for( int i=0; i<v.size(); i++ ){
		
		printf("%d ", v[i] );
	}
	
	// This is also known as iterator 
	for(auto i: v)
		cout<< i <<" ";
	
	
	return 0;
}

