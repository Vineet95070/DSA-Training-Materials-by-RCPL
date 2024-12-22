#include <iostream>
using namespace std;

class dlist{
	
	public:
		int data;
		dlist* prev;
		dlist* next;
		
		dlist(int val){
			
			data = val;
			prev = NULL;
			next = NULL;
		}
};

void insertTail(dlist* head, int val){
	
	dlist* newnode = new dlist(val);
	
	dlist* temp = head;
	while( temp->next != NULL ){
		
		temp = temp->next;		
	}
	
	temp->next = newnode;
	newnode->prev = temp;
}

void print(dlist* head){
	
	dlist* temp = head;
	while( temp != NULL ){
		
		cout<<temp->prev <<"\t"<< temp->data<<"\t"<< temp->next <<endl;
		temp = temp->next; 
	}
}

int main(){
	
	dlist* head = new dlist(10);
	
	insertTail(head, 20);
	insertTail(head, 30);
	insertTail(head, 40);
	insertTail(head, 50);
	insertTail(head, 60);
	
	print(head);
	
	return 0;
}
