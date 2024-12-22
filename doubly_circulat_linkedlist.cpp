#include <iostream>
using namespace std;

class dclist{
	
	public:
		int data;
		dclist* plink;
		dclist* nlink;
		
		dclist(int val): data(val), plink(NULL), nlink(NULL){}
};

void insertTail(dclist* &head, int val){
	
	dclist* newnode = new dclist(val);
	if( head == NULL ){
		
		newnode->nlink = newnode;
		newnode->plink = newnode;
		head = newnode;
		return;
	}
	
	dclist* temp = head;
	while( temp->nlink != head ){
		
		temp = temp->nlink;
	}
	
	head->plink = newnode;
	temp->nlink = newnode;
	newnode->plink = temp;
	newnode->nlink = head;
}

void print(dclist* head){
	
	dclist* temp = head;
	while( temp->nlink != head ){
		
		cout<< temp->plink <<"\t" <<temp->data<<"\t"<< temp->nlink<<endl;
		temp = temp->nlink;
	}
	cout<< temp->plink <<"\t" <<temp->data<<"\t"<< temp->nlink<<endl;
}

int main(){
	
	dclist* head = nullptr;
	
	insertTail(head, 10);
	insertTail(head, 20);
	insertTail(head, 30);
	insertTail(head, 40);
	insertTail(head, 50);
	insertTail(head, 60);
	
	print( head );
	
	return 0;
}
