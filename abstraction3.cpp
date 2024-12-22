#include <iostream>
using namespace std;

class btech{
	private: 
		int y;
		
	protected:
		int z;
	
	public:
		int x;
		btech(){
			x = 10;
			y = 20;
			z = 30;
		}
		void print();
};

void btech::print(){
	
	cout << "x: "<< x <<endl;
	cout << "y: "<< y <<endl;
	cout << "z: "<< z <<endl;
}

int main(){
	
	btech s1;
	s1.print();
	
	return 0;
}
