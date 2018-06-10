// main.cc

#include "BinaryTree.h"
#include "Node.h"
#include <iostream>

int main()
{
	using namespace std;
	Node *root1 = new Node{5};
	Node *leftNode = new Node{4};
	Node *rightNode = new Node{7};
	root1->left = leftNode;
	root1->right = rightNode;
	BinaryTree *tree = new BinaryTree;
	tree->root = root1;
	tree->AddNexts();
		
	cout << "Top node: "  << tree->root->val << endl;
	cout << "Left node: " << tree->root->left->val << endl;
	cout << "Next of Left Node: " << tree->root->left->next->val << endl;
	cout << "Right node: " << tree->root->right->val << endl; 

	return 0;
}
