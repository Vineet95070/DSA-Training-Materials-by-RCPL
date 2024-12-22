#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector < pair<int, int> > p;
	
	for(int i=0; i<256; i++){
		
		p.push_back( make_pair(i, i) );
	}
	
	for(int i=0; i<256; i++){
		
		cout<< p[i].first <<"\t" << (char )p[i].second <<endl;
	}
	
	
	return 0;
}
