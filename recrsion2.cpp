#include <iostream>
using namespace std;

void func(int num){
	
	if( num == 0 )
		return;
	
	num--;
	func(num);
	
	cout<<num <<" ";
}

int main(){
	
	func(5);
	
	return 0;
}
