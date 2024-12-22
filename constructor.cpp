#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		char section;
		
		btech(){
			
			cout<< "default constructor: "<< endl;
		}
		
//		btech(char s){
//			
//			cout<<"parameterised constructor: section: "<< s<< endl;
//		}
		btech(char s){
			
		}
		
		~btech(){
			
			cout<< "Distructor: \n" <<endl;
		}
};

int main(){
	
	btech obj1;		// default
	btech obj2;		// default
	btech *obj3 = new btech;	// default
	
	btech obj4('A');		// parameterised 
	
	btech obj5 = obj1;
	
	delete obj3;
	
	return 0;
}
