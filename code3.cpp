#include <iostream>
using namespace std;

int main(){
	
	int x  = 10;
	int *ptr = &x;
	int &z = x;		// referencing
	int **pptr = &ptr;
	
	cout<< x <<endl;			//10
	cout<< ptr <<endl;			//address of x
	cout<< &ptr <<endl;			//address of ptr
	cout<< *ptr <<endl;			// value of x
	cout<< *(&x) <<endl;		// value of x
	cout<< z <<endl;			// value of x
	cout<< pptr <<endl;			// address of ptr
	cout<< &ptr <<endl;			// address of ptr
	cout<< *pptr <<endl;		// 
	cout<< **pptr <<endl;		// 
	
	
	return 0;
}
