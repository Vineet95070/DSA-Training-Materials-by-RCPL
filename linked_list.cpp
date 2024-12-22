#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list <int> l;
	
	l.push_back( 10 );
	l.push_back( 20 );
	l.push_back( 30 );
	l.push_back( 40 );
	l.push_back( 50 );
	l.push_back( 60 );
	l.pop_back();
	
	l.remove( 30 );
	
	for(auto i: l)
		cout<< i <<" ";
	
	return 0;
}
