#include <iostream>

int num = 231;

int main(){
	
	int num = 89;
	
	{
		int num = 90;
		
		std::cout << ::num << std::endl;
	}
	
	return 0;
}
