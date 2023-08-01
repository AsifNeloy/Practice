#include<bits/stdc++.h>
#define SPACE 10
using namespace std;

class TreeNode {
  public:
    int value;
  TreeNode * left;
  TreeNode * right;

  TreeNode() {
    value = 0;
    left = NULL;
    right = NULL;
  }
  TreeNode(int v) {
    value = v;
    left = NULL;
    right = NULL;
  }
};



class BST {
  public:
    TreeNode * root;
  BST() {
    root = NULL;
  }
  bool isTreeEmpty() {
    if (root == NULL) {
      return true;
    } else {
      return false;
    }
  }

  //insertion
  void insertNode(TreeNode * new_node) {
    if (root == NULL) {
      root = new_node;
      cout << "Value Inserted as root node!" << endl;
    }
    else {
      TreeNode * temp = root;
      while (temp != NULL) {

        if (new_node -> value == temp -> value) {
          cout << "Value Already exist," <<
            "Insert another value!" << endl;
          return;
        }

      else if ((new_node -> value < temp -> value) && (temp -> left == NULL)) {
          temp -> left = new_node;
          cout << "Value Inserted to the left!" << endl;
          break;
        }

         else if (new_node -> value < temp -> value) {
          temp = temp -> left;
        } else if ((new_node -> value > temp -> value) && (temp -> right == NULL)) {
          temp -> right = new_node;
          cout << "Value Inserted to the right!" << endl;
          break;
        } else {
          temp = temp -> right;
        }
      }
    }
  }

  //for searching
  TreeNode * iterativeSearch(int v) {
    if (root == NULL) {
      return root;
    } else {
      TreeNode * temp = root;
      while (temp != NULL) {
        if (v == temp -> value) {
          return temp;
        } else if (v < temp -> value) {
          temp = temp -> left;
        } else {
          temp = temp -> right;
        }
      }
      return NULL;
    }
  }
   TreeNode * recursiveSearch(TreeNode * r, int val) {
    if (r == NULL || r -> value == val)
      return r;

    else if (val < r -> value)
      return recursiveSearch(r -> left, val);

    else
      return recursiveSearch(r -> right, val);
  }
  //print
    //2D printing
void print2D(TreeNode * r, int space) {
    if (r == NULL)
      return;
    space += SPACE;
    print2D(r -> right, space);
    cout << endl;
    for (int i = SPACE; i < space; i++)
      cout << " ";
    cout << r -> value << "\n";
    print2D(r -> left, space);
  }


TreeNode * minValueNode(TreeNode * node)
{
    TreeNode * current = node;


    while (current && current->left != NULL)
        current = current->left;

    return current;
}


TreeNode * deleteNode(TreeNode * root, int key)
{

    if (root == NULL)
        return root;

    if (key < root->value)
        root->left = deleteNode(root->left, key);


    else if (key > root->value)
        root->right = deleteNode(root->right, key);

    else {

        if (root->left == NULL) {
            TreeNode * temp = root->right;
            free(root);cout<<"Value deleted"<<endl;
            return temp;
        }
        else if (root->right == NULL) {
            TreeNode * temp = root->left;
            free(root);cout<<"Value deleted"<<endl;
            return temp;
        }

        TreeNode * temp = minValueNode(root->right);

        root->value = temp->value;

        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}


};



int main() {
  BST obj;
  int option, val;



  do {
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Node" << endl;
    cout << "2. Search Node" << endl;
    cout << "3. Print/Traversal BST values" << endl;
    cout << "4. Clear Screen" << endl;
    cout<< "5. Delete Node" << endl;
    cout << "0. Exit Program" << endl;



    cin >> option;
    //Node n1;
    TreeNode * new_node = new TreeNode();


    switch (option) {
    case 0:
      break;
    case 1:
      cout << "INSERT" << endl;
      cout << "Enter VALUE of TREE NODE to INSERT in BST: ";
      cin >> val;
      new_node -> value = val;
      obj.insertNode(new_node);
      cout << endl;
      break;
    case 2:
      cout << "SEARCH" << endl;
      cout << "Enter VALUE of TREE NODE to SEARCH in BST: ";
      cin >> val;
      new_node = obj.iterativeSearch(val);
      //new_node = obj.recursiveSearch(obj.root, val);
      if (new_node != NULL) {
        cout << "Value found" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;

    case 3:
      cout << "PRINT 2D: " << endl;
      obj.print2D(obj.root, 5);
      cout << endl;

      break;
    case 5:
          cout<<"Enter value to delete : ";
          int pk;
          cin>>pk;
          obj.deleteNode(obj.root,pk);
          break;
    case 4:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }



  } while (option != 0);



  return 0;
}
