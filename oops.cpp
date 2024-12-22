#include <iostream>
using namespace std;

class btech{
	
	public:
		int age;
		int roll;
		float cgpa;	
		
}abhi, harsh;;

void print(){
	
	cout<<"roll: "<< abhi.roll <<endl;
	cout<<"Age: "<< abhi.age <<endl;
	cout<<"CGPA: "<< abhi.cgpa <<endl<<endl;
	
	cout<<"ROll: "<< harsh.roll <<endl;
	cout<<"Age: "<< harsh.age<<endl;
	cout<<"CGPA: "<< harsh.cgpa <<endl;
	
}

int main(){
	
	abhi.roll = 321;
	abhi.age = 25;
	abhi.cgpa = 8.6;
	
	harsh.roll = 988;
	harsh.age = 24;
	harsh.cgpa = 9.8;
	
	print();
	
	return 0;
}



