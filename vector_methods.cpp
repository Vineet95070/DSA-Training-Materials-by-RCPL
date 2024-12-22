#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	vector <int> v = {10, 20, 14, 78, 89};
	vector <int> v2;
	
	vector <vector<int> > v3 = { {12,45}, {90, 32, 23}, {99, 43, 89} }
	
	v.push_back(21);
	v.push_back(99);
	v.push_back(12);
	
//	v.clear();
//	swap(v, v2);
	
	if( v.empty() )
		cout<<"Vector is empty: \n";
	else
		cout<<"Vector is not empty: \n";
		
		
		
	cout<< "at(): "<< v.at(3) <<endl;	
	cout<< "front(): "<< v.front() <<endl;
	cout<< "back(): "<< v.back() <<endl;
	cout<< "begin(): "<< *(v.begin()) <<endl;
	cout<< "end(): "<< *(v.end() -1 ) <<endl;	
		
		
//	sort( v.begin(), v.end() );
		
	v.insert( v.begin()+3, 3333);
		
	
	for( int i=0; i<v.size(); i++ ){
		
		printf("%d ", v[i] );
	}
	
	return 0;
}

