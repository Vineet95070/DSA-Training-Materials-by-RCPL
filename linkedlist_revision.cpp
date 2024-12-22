#include <iostream>
using namespace std;

class list{
	
	public:
		int data;
		list* next;		// self referential
		
		list(int val){
			
			data = val;
			next = NULL;
		}
};

void print(list* head){
	
	list* temp = head;
	while( temp != NULL ){
		
		cout<< temp->data <<"\t"<< temp->next <<endl;
		temp = temp->next;
	}
}

int main(){
	
	list* n1 = new list( 10 );
	
	list* n2 = new list(20);
	n1->next = n2;
	
	list* n3 = new list(30);
	n2->next = n3;
	
	list* n4 = new list(40);
	n3->next = n4;
	
	cout<< n2 <<endl;		// address of n2
	cout<< n1->next <<endl;	// address of n2
	cout<< n2->data <<endl;		//20
	cout<< n1->next->data <<endl;	// 20
	cout<< n2->next->next->data <<endl;	// 40
	cout<< n3->next->data <<endl;		// 40
	cout<< n4->data <<endl;			// 40
	
//	print(n1);
	
	return 0;
}
