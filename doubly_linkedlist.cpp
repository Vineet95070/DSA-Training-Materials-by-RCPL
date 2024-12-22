#include <iostream>
using namespace std;

class dlist{
	
	public:
		int data;
		dlist* plink;
		dlist* nlink;
		
		dlist(int val): data(val), plink(NULL), nlink(NULL){}
};

void print(dlist* head){
	
	dlist* temp = head;
	while( temp != NULL ){
		
		cout<< temp->plink <<"\t"<< temp->data <<"\t"<< temp->nlink <<endl;
		temp = temp->nlink;
	}
}

void insertTail(dlist* &head, int val){
	
	dlist* newnode = new dlist(val);
	
	if(head == nullptr){
		
		head = newnode;
		return;
	}
	
	dlist* temp = head;
	while( temp->nlink != NULL ){
		
		temp = temp->nlink;
	}
	
	temp->nlink = newnode;
	newnode->plink = temp;
	
}

int main(){
	
	dlist* head = nullptr;
	
	insertTail(head, 25);
	insertTail(head, 35);
	insertTail(head, 45);
	insertTail(head, 55);
	insertTail(head, 65);
	insertTail(head, 75);
	
	print( head );
	
	return 0;
}
