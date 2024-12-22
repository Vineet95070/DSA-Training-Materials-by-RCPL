#include <iostream>
using namespace std;

class tore{
		
		int roll;
		float cgpa;
		char section;
		
	public:
		
		tore(){
			
			section = 'A';
			roll = 2987999;
			cgpa = 7.0;
		}
		
		tore(float c, int r, char s){
			
			cgpa = c;
			roll = r;
			section = 'T';
		}
		
//		tore( tore& obj){
//			cgpa = 8.9;
//			roll = 2839;
//			section = 'S';
//		}
		
		void print(){
			
			cout<<"CGPA: "<< cgpa <<endl;
			cout<<"ROLL: "<< roll <<endl;
			cout<<"Section: "<< section <<endl<<endl;
		}
};


int main(){
	
	tore s1;
	s1.print();
	
	tore s2(8.7, 231, 'B');
	s2.print();
	
	tore s3(8.8, 864, 'C');
	s3.print();
	
//	tore s4 = s3;
	tore s4(s3);
	s4.print();
	
	return 0;
}
