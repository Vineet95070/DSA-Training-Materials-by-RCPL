#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int> v){
	
	for(int i=0; i<v.size(); i++){
		
		for(int j=i; j<v.size(); j++){
		
			for(int k=i; k<=j; k++){
				
				cout<< v[k] <<" ";
			}
			cout<<endl;
		}
	}	
	
}

int main(){
	
	vector <int> v = {1, 2, 3 ,4 ,5};
	
	subArray(v);
	
	
	return 0;
}

