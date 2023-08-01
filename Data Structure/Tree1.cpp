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
};

void inOrder(struct Node *root)
{
	stack<Node *> s;
	Node *curr = root;

	while (curr != NULL || s.empty() == false)
	{
		while (curr != NULL)
		{
			s.push(curr);
			curr = curr->left;
		}
		curr = s.top();
		s.pop();

		cout << curr->data << " ";
		curr = curr->right;

	}

}

void preOrder(Node* root)
{
          if (root == NULL)
          return;

          stack<Node*> s2;
          s2.push(root);
          while (!s2.empty()) {
                              Node* cur = s2.top();
                              s2.pop();
                              cout << cur->data << " ";
                              if (cur->right)
                              s2.push(cur->right);
                              if (cur->left)
                              s2.push(cur->left);
          }
}


void postOrder(Node* root)
{
          stack<Node*> s3;
          s3.push(root);
          stack<int> print;
          while (!s3.empty())
          {
                    Node *curr = s3.top();
                    s3.pop();

                    print.push(curr->data);

                    if (curr->left)
                    s3.push(curr->left);

                    if (curr->right)
                    s3.push(curr->right);
          }

          while (!print.empty())
          {
                    cout << print.top() << " ";
                    print.pop();
          }
}



int main()
{
	struct Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout<<"Pre order traversal : ";
	preOrder(root);
          cout<<"\nIn order traversal : ";
	inOrder(root);
	cout<<"\nPost order traversal : ";
	postOrder(root);
	return 0;
}
