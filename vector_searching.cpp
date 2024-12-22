#include <iostream>
#include <vector>
using namespace std;

int Search(vector<int>& v, int key){
	
	int i=0;
	while( i != v.size() ){
		
		if( v[i] == key)
			return i;
		
		i++;
	}
	
	return -1;
}

int main(){
	
	vector <int> v = {1, 2, 3 ,4 ,5};
	
	cout<< Search(v, 4);
	
	
	return 0;
}

