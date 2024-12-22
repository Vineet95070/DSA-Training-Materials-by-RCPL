#include <iostream>
using namespace std;

class list{
	
	public:
		int data;
		list* link;
		
		list(): link(NULL){}
		
		list(int val): link(NULL), data(val){}
};

void print(list* head){
	
	list* temp = head;
	
	while( temp != NULL ){
		
		cout<< temp->data <<"\t" << temp->link <<endl;
		temp = temp->link;
	}
}

void insertAtTail(list* head, int val){
	
	list* newnode = new list(val);
	
	list* temp = head;
	while( temp->link != NULL  ){
		
		temp = temp->link;
	}	
	
	temp->link = newnode;
}

void insertAtHead(list* &head, int val){
	
	list* newhead = new list(val);
	
	newhead->link = head;
	
	head = newhead;
}

int main(){
	
	list* head = new list(12);
	
	insertAtTail(head, 13);
	insertAtTail(head, 14);
	insertAtTail(head, 15);
	insertAtTail(head, 16);
	
	insertAtHead(head, 11);
	insertAtHead(head, 10);
	
	print(head);
	
	
	return 0;
}
