#include <iostream>
using namespace std;

#define size 5

class stack{
	
	public:
		int ptr = -1;
		int arr[size];
		
		void push(int);
		void pop();
		int top();
		bool empty();
};

void stack::push(int val){
	
	if( ptr == size-1 ){
		
		cout<<"Stack overflow: \n";
		return;
	}
	ptr++;
	arr[ptr] = val;
}

void stack::pop(){
	
	if( ptr == -1 ){
		
		cout<<"Stack underflow: \n";
		return;
	}
	
	ptr--;
}

int stack::top(){
	
	if( ptr == -1 ){
		
		cout<< "stack is empty: \n";
		exit(0);
	}
	else
		return arr[ptr];
		
}

bool stack::empty(){
	
	if( ptr == -1 )
		return true;
	else
		return false;
}

int main(){
	
	stack s;
	
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

	cout<< s.top() <<endl;
	
//	while( !s.empty() ){
//		
//		cout<<s.top()<<" ";
//		s.pop();
//	}	
	
	return 0;
}
