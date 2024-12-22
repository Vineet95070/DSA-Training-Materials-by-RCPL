#include <iostream>

int fibo(int num){
	
	if( num==0 || num==1 )
		return num;
	
	return fibo(num-1) + fibo(num-2);
}

int main(){
	
	int i=0;
	while( i != 10)
		std::cout<<fibo(i++) <<" ";
	
	return 0;
}
