#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		char section;
		float cgpa;
		
		void operator++(){
			
		}
		
		void operator++(int){
			
		}
};

int main(){
	
	btech obj;
	
	obj++;
	++obj;
	
	return 0;
}
