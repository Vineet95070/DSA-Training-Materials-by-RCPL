#include <iostream>
using namespace std;

int main(){
	
	int x = 10;
	int *ptr = &x;
	int **pptr = &ptr;
	
	cout<< x << endl;		// value in x
	cout<< &x << endl;		// address of x
	cout<< ptr <<endl;		// value in ptr
	cout<< *(&ptr) <<endl;	// value at address ptr
	cout<< *ptr <<endl;		// value at address x
	
	cout<< pptr <<endl;		// address of ptr
	cout<< &ptr <<endl;		// address of ptr
	cout<< *pptr << endl;	// address of x
	cout<< **pptr <<endl;	// value of x
	cout<< **(&pptr) <<endl;// address of x
	cout<< ***(&pptr) <<endl; // value of x
	
	
	
	return 0;
}
