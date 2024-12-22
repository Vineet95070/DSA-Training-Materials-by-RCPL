#include <iostream>
#include <queue>
using namespace std;

class BST{
	
	public:
		int data;
		BST* left;
		BST* right;
		
		BST(int val): data(val), left(NULL), right(NULL){}
};

void levelOrder(BST* root){
	
	queue <BST*> q;	
	q.push( root );
	q.push( NULL );
	
	while( !q.empty() ){
		
		BST* temp = q.front();
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

BST* insert(BST* root, int val){
	
	if( root == NULL )
		return new BST(val);
		
	if( val < root->data )
		root->left = insert(root->left, val);
		
	else
		root->right = insert(root->right, val);
}

int main(){
	
	BST* root = NULL;
	root = insert( root, 5);
	
	insert( root, 1);
	insert( root, 2);
	insert( root, 3);
	insert( root, 4);		//	{1, 2, 3, 4, 5, 6, 7}
	insert( root, 6);
	insert( root, 7);	
	
	levelOrder( root ); 
	
	return 0;
}
