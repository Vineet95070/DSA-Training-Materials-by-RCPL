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
		
		child(){
			
			cout << "x: "<< x <<endl;
//			cout << "y: "<< y <<endl;
			cout << "z: "<< z <<endl;
		}
};

int main(){
	
	child s1;
	
	
	return 0;
}
