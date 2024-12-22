#include <iostream>
using namespace std;

class list{
	
	public:
		int data;
		list* link;
};

void print(list* head){
	
	list* temp = head;
	
	while( temp != NULL ){
		
		cout<< temp->data <<"\t" << temp->link <<endl;
		temp = temp->link;
	}
}

int main(){
	
	list *n1 = new list;
	n1->data = 10;
	n1->link = NULL;
	
	list* n2 = new list;
	n2->data = 20;
	n2->link = NULL;
	n1->link = n2;
	
	list* n3 = new list;
	n3->data = 30;
	n3->link = NULL;
	n2->link = n3;
	
	
	cout<< n1->data <<endl;
	cout<< n1->link->data <<endl;
	cout<< n2->data <<endl;
	cout<< n1->link->link->data <<endl;
	cout<< n3->data <<endl;
	cout<< n1->link <<endl;
	cout<< n2 <<endl;
	cout<< n2->link;
	cout<< n3 <<endl;
	
	
	cout<<endl<<endl;
	print(n1);

	
	return 0;
}
