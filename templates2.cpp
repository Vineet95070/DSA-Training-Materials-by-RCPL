#include <iostream>
#include "template.h"
using namespace std;
using namespace dheeraj;

int main(){
	
//	btech <string>s1("Meet kr");
	my_pair <string, int>s1 = {"Meet kr", 35};
	
	my_pair <string, float>s2("Vini sharma", 5.2f);
	
	s1.print();
	s2.print();
	
	return 0;
}
