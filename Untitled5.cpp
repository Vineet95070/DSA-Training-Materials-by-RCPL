#include <iostream>
using namespace std;
#define size 5

class stack{
	
	int arr[size];
	int ptr = -1;
	
	public:
		void push(int);
		void pop();
		bool empty();
		int top();
};

void stack::push(int val){
	
	if( ptr == size-1 ){
		
		cout<<"Stack overflow: \n";
		return;
	}
	
	arr[ ++ptr ] = val;
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
		
		cout<<"Stack is empty: \n";
	}
	else{
		
		return arr[ptr];
	}	
}

bool stack::empty(){
	
	if( ptr == size-1 )
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
	
	while( !s.empty() ){
		
		cout<<s.top()<<" ";
		s.pop();
	}	
	
	return 0;
}
