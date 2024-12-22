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

void insertAtPos(dlist* head, int val, int pos){
	
	dlist* newnode = new dlist(val);
	
	dlist* temp = head;
	int i=0;
	while( i != pos-1 ){
		
		temp = temp->nlink;
		i++;
	}
	
	newnode->plink = temp;
	newnode->nlink = temp->nlink;
	temp->nlink->plink = newnode;
	temp->nlink = newnode;
}

int main(){
	
	dlist* head = nullptr;
	
	insertTail(head, 10);
	insertTail(head, 20);
	insertTail(head, 30);
	insertTail(head, 40);
	insertTail(head, 50);
	insertTail(head, 60);
	
	print( head );
	
	cout<<endl;
	insertAtPos(head, 35, 3);
	print( head );
	
	return 0;
}
