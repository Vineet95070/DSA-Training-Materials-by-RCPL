#include <iostream>
using namespace std;

template <typename T, typename U>
auto sum(T a, U b){
	
	return a+b;
}

int main(){
	
	cout<< sum(12, 12) <<endl;
	
	cout<< sum(12.5f, 12) <<endl;
	
	cout<< sum(12, 12.5f) <<endl;
	
	cout<< sum(12.5f, 12.5f) <<endl;
	
	
	return 0;
}
