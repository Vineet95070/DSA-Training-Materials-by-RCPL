#include <iostream>
#include <vector>
using namespace std;

int Greatest(vector<int> v){
	
	int Max = v[0];
	
	int i=0;
	while( i != v.size() ){
		
		if( v[i] > Max )
			Max = v[i];
		
		i++;
	}
	
	return Max;
}

int main(){
	
	vector <int> v = {98, 12, 34, 99, 23, 89};
	v.push_back(122);
	
	cout<< "Greatest element is: "<< Greatest(v) <<endl;
	
	
	return 0;
}

