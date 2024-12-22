#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string str = "1 24";
	
	int num1, num2;
	
	stringstream ss( str );
	
	ss >> num1 >> num2;
	
	cout<< num1 <<"\t"<< num2;
	
	
	return 0;
}
