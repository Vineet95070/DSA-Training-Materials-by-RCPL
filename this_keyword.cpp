#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		float cgpa;
		
		// initilizer list
		btech(int r, float c): roll(r), cgpa(c){}
		
		inline void print(){
			
			cout<<"ROll: "<< roll << endl;
			cout<<"CGPA: "<< cgpa <<endl;
			cout<<"address of obj: "<< this <<endl<<endl;
		}
};

int main(){
	
	btech s1(7659, 8.9), s2(1231, 8.6);
	
	cout << &s1 <<endl;
	s1.print();
	
	cout<< &s2 <<endl;
	s2.print();
	
	btech* s3 = new btech(12431, 7.9);
	
	cout<< s3 <<endl;
	s3->print();
	
	return 0;
}
