#include <iostream>
#include <queue>
using namespace std;

class tree{
	
	public:
		int data;
		tree* left;
		tree* right;
		
		tree(int val): data(val), left(NULL), right(NULL){}
};

void levelOrder(tree* root){
	
	queue <tree*> q;	
	q.push( root );
	q.push( NULL );
	
	while( !q.empty() ){
		
		tree* temp = q.front();
		q.pop();
		
		if( temp == NULL ){
			
			cout<<endl;
			if( !q.empty() )
				q.push(NULL);
		}
		
		else{
			
			cout<< temp->data<<" ";
			if( temp->left != NULL )
				q.push(temp->left);
			
			if( temp->right != NULL )
				q.push(temp->right);
		}
		
	}
}

int main(){
	
	tree* root = new tree(10);
	
	root->left = new tree(20);
	root->right = new tree(30);
	root->left->left = new tree(40);
	root->left->right = new tree(50);
	root->right->left = new tree(60);
	root->right->right = new tree(70);
	
	levelOrder(root);
	
	return 0;
}
