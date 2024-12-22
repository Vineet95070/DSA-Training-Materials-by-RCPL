#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector < pair<int, char> > p;
	
	for(int i=1; i<=26; i++){
		
		static int temp = 'A';
		
		p.push_back( make_pair(i, temp) );
		temp++;
	}
	
//	for(auto i: p)
//		cout<< i.first <<"\t"<< i.second <<endl;

	for( int i=0; i<26; i++){
		
		cout<< p[i].first <<" \t" << p[i].second<<endl;
		
	}
	
	
	return 0;
}
