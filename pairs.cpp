#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	pair <int, char> p[5];
	
	p[0].first = 0;
	p[0].second = 'A';
	
	p[1].first = 1;
	p[1].second = 'B';
	
	p[2].first = 2;
	p[2].second = 'C';
	
	p[3].push_back( make_pair(3, 'D') );
	
	int i=0;
	while( i!=4 ){
		
		cout<< p[i].first <<"\t"<< p[i].second <<endl;
		i++;
	}
	
	
	return 0;
}
