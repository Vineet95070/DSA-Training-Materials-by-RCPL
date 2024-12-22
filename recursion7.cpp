//Implement a recursive function to print reverse of a string.
#include <iostream>
using namespace std;

void reverse(string& str, int s, int e){
	
	if( s > e )	
		return;
		
	swap( str[s], str[e] );
	
	reverse(str, s+1, e-1);
}

int main(){
	
	string str = "Hello world: ";
	
	reverse(str, 0, str.length()-1 );
	
	cout << str <<endl;
	
}
