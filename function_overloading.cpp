#include <iostream>
using namespace std;

void func(int x){
	
	cout<< "x: "<< x <<endl;
}

void func(char x){
	
	cout<<"x: "<< x <<endl;
}

int main(){
	
	func(10);
	
	func('a');
	
	
	return 0;
}
