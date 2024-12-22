#include <iostream>
#include <queue>
using namespace std;

int main(){
	
	queue<int> q;
	queue <char> q2;
	
	q.push( 10 );
	q.push( 20 );
	q.push( 30 );
	q.push( 40 );
	q.push( 50 );
	q.push( 60 );
	
	cout<< sizeof( q2 )<<endl;
	
	cout<<"back(): "<< q.back() <<endl;
	cout<<"Size(): "<< q.size() <<endl;
	
	while( ! q.empty() ){
		
		cout<< q.front() <<" ";
		q.pop();
	}
	
	
	return 0;
}
