//Implement a recursive function to print reverse of a string.
#include <iostream>
using namespace std;

void reverse(string str, int e){
	
	if( e == -1 )	
		return ;
	
	cout<< str[e] ;
	reverse(str, e-1);
}

int main(){
	
	string str = "Hello world: ";
	
	reverse(str, str.length()-1 );
	
}
