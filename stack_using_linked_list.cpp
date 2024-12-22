#include <iostream>
using namespace std;

class lstack{
	
	public:
		int data;
		lstack* next;
		
		lstack(int val){
			
			data = val;
			next = NULL;
		}
};

void push(lstack* &head, int val){
	
	lstack* newnode = new lstack(val);
	
	newnode->next = head;
	
	head = newnode;
}

void pop(lstack* &head){
	
	if( head == NULL ){
		
		cout<<"Stack underflow: \n";
		return;
	}
	
	lstack* temp = head;
	
	head = head->next;
	
	delete temp;
}

int top(lstack* head){
	
	if( head == NULL ){
		
		cout<<"Stack is empty: \n";
		exit(0);
	}
	else
		return head->data;
}

bool empty(lstack* head){
	
	if( head == NULL )
		return true;
	else
		return false;
}

int main(){
	
	lstack* head = NULL;
	
	pop(head);
	cout<< top(head) <<endl;
	
//	push( head, 10 );
//	push( head, 20 );
//	push( head, 30 );
//	push( head, 40 );
//	push( head, 50 );
//	
//	while( !empty(head) ){
//		
//		cout<< top(head)<<" ";
//		pop(head);
//	}
	
	return 0;
}

