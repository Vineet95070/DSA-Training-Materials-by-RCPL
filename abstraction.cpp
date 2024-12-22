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
		
		void print(){
			
			cout << "x: "<< x <<endl;
			cout << "y: "<< y <<endl;
			cout << "z: "<< z <<endl;
		}
};

class child : public btech{
	
	public:
		print();
};

int main(){
	
	btech s1;
	
	cout << "x: "<< s1.x <<endl;
//	cout << "y: "<< s1.y <<endl;
//	cout << "z: "<< s1.z <<endl;
	
	s1.print();
	
	return 0;
}
