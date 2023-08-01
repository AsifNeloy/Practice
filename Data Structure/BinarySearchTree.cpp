#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
	Node (int data)
	{
		this->data = data;
		left = right = NULL;
	}
}*root;

//pointer = current;
struct insertion(int input, struct Node *point){
          if (point=NULL){new Node(input);}
          if(input > root->data){ point->right=insertion(input,point->left);}
          else if( input < root->data ){ point->right = insertion(input, point->right);}
}

struct searching(int input,Node *point){
          if(point==NULL){cout<<input<<" not found in the tree"<<endl;}
          if(point->data==input){cout<<input<<" found in the tree at "<<point<<endl;}
          if(point->key < input){searching(input, point->left);}
          else if(point->key > key){ searching(input, point->right); }
}
int main(){
          Node *root = new Node;
          insertion(1,root);
          insertion(2,root);
          insertion(4,root);
          insertion(5,root);
          insertion(3,root);
          searching(5,root);
}
