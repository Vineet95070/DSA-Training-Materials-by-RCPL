#include <iostream>
#define n 5
using namespace std;

class cqueue{
	
	public:
		int arr[n];
		int front = -1;
		int rear = -1;
		
		void push(int);
		void pop();
		bool isEmpty();
		bool isFull();
		int getFront();
		int getRear();
};

bool cqueue::isFull(){
	
	if( front == (rear+1) % n )
		return true;
		
	else
		return false;
}

bool cqueue::isEmpty(){
	
	if( front == -1 )
		return true;
		
	else
		return false;
}

void cqueue::push(int val){
	
	if( isFull() )
		return;
		
	if( isEmpty() )
		front = rear = 0;
	
	else
		rear = (rear+1) % n;
		
	arr[rear] = val;
}

void cqueue::pop(){
	
	if( isEmpty() )
		return;
	
	if( front == rear )
		front = rear = -1;
		
	else
		front = (front +1) %n;
}

int cqueue::getFront(){
	
	return arr[front];
}

int cqueue::getRear(){
	
	return arr[rear];
}

int main(){
	
	
	cqueue q;
	
	
	if( q.isEmpty() )
		cout<<"Queue is empty: \n";
	else
		cout<<"Queue is not empty: \n";
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.pop();
	q.push(60);
	
	cout<< q.getFront() <<endl;
	cout<< q.getRear() <<endl;
	
	if( q.isEmpty() )
		cout<<"Queue is empty: \n";
	else
		cout<<"Queue is not empty: \n";
	
	return 0;
}
