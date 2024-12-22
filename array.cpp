#include <iostream>
using namespace std;

int main(){
	
//	int arr1[5];
//	int arr3[] = {10, 20, 30, 40, 50, 90};
	int arr2[5] = {12, 13, 14, 15, 16};

 	
 	cout<< arr2 <<endl;		// address of 0th index 
 	cout<< &arr2[0] <<endl;	// address of 0th index
 	cout<< *arr2 <<endl;		// 12 value at 0th index
 	cout<< *(&arr2[0]) <<endl;	//12 value at 0th index
 	cout<< *(arr2 + 2) <<endl;	// 14 value at 2nd index
 	cout<< &arr2[2] <<endl;		// address of 2nd index
 	cout<< (arr2 + 2) <<endl;	// address of 2nd index
 	cout<< *(arr2 + 1) <<endl;	// 13 value of 1st index
 	
	return 0;
}
