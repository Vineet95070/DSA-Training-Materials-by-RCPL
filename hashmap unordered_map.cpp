#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	
	unordered_map <int, string> m;
	
	m[1] = "Abhinav";
	m[2] = "Abhishek";
	m[5] = "Dheeraj";
	m.insert( make_pair(3, "Abhishek kr") );
	m.insert( make_pair(37, "Nidhi") );
	m.insert( make_pair(38, "Nikhil") );
	m.insert( make_pair(7, "Aditi") );
	
	auto f = m.find(3);
	cout<< f->first<<"\t"<< f->second <<endl;
	cout<< m.at(5)<<endl;
	
	if( m.count(7) )
		cout<<"Roll 7 is present: \n\n";
	else
		cout<<"Absent: \n\n";
	
	
	unordered_map <int, string>::iterator it = m.begin();
	while( it != m.end() ){
		
		cout<< it->first<<"\t"<< it->second <<endl;
		it++;
	}
	
	
//	cout<<endl;
//	for( auto i: m )
//		cout<< i.first<<" "<< i.second<<endl;
}
