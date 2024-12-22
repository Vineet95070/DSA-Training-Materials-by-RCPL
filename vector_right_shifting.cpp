#include <iostream>
#include <vector>
using namespace std;

void rightShift(vector<int>& v){
	
	int temp = v[ v.size()-1 ];
	
	for(int i = v.size()-1; i>0; i-- ){
		
		swap( v[i], v[i-1] );
	}
	
	v[0] = temp;
}

int main(){
	
	vector <int> v = {1, 2, 3, 4, 5};
	
	rightShift(v);
	
	for(auto i: v)
		cout<< i <<" ";
	
	
	return 0;
}

