#include <iostream>
using namespace std;

void func(int &babu){
	
	babu = 20;
}

int main(){
	
	int dheeraj = 10;
	
	int &babu = dheeraj;
	
	cout<< babu <<endl;
	cout<< dheeraj;
	
	
	return 0;
}
