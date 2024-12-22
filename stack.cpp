#include <iostream>
#include <stack>
using namespace std;

int main(){
	
	stack <int> s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	cout<< s.top() <<endl;
	
	if( s.empty() )
		cout<<"Empty: \n";
	else
		cout<<"Not empty: \n";
	
	
	return 0;
}
