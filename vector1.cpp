#include <iostream>
#include <vector>
using namespace std;

int VectorSum(vector <int> v){
	
	int i =0, sum = 0;
	while( i != v.size() ){
		
		sum += v[i];
		i++;
	}
	
	return sum;
}

int main(){
	
	vector <int> v = {10, 20, 30, 40, 50};
	
	cout<< VectorSum(v) ;
	
	return 0;
}

