#include <iostream>
using namespace std;

class tree{
	
	public:
		int data;
		tree* left;
		tree* right;
		
		tree(int val): data(val), left(NULL), right(NULL){}
};

void postOrder(tree* node){
	
	if( node == NULL )
		return;
	
	postOrder(node->left);
	postOrder(node->right);
	cout<<node->data<<" ";
}

int main(){
	
	tree* root = new tree(10);
	
	root->left = new tree(20);
	root->right = new tree(30);
	root->left->left = new tree(40);
	root->left->right = new tree(50);
	root->right->left = new tree(60);
	root->right->right = new tree(70);
	
	postOrder(root);
	
	return 0;
}
