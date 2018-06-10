// main.cc

#include "BinaryTree.h"
#include "Node.h"
#include <iostream>

int main()
{
	using namespace std;
/*	Node *root1 = new Node{5};
	Node *leftNode = new Node{4};
	Node *rightNode = new Node{7};
	root1->left = leftNode;
	root1->right = rightNode; */
	BinaryTree tree1{};
	tree1.Insert(5);
	tree1.Insert(3);
	tree1.Insert(10);
	tree1.Insert(12);
	tree1.Insert(20);

	BinaryTree *tree2 = new BinaryTree{};
	tree2->Insert(5);
	tree2->Insert(322);

//	tree.AddNexts();

	tree1.PrintPre();
	tree2->PrintPre();
/*
	cout << endl;			
	cout << "Top node: "  << tree->root->val << endl;
	cout << "Left node: " << tree->root->left->val << endl;
	cout << "Next of Left Node: " << tree->root->left->next->val << endl;
	cout << "Right node: " << tree->root->right->val << endl;
*/
//	delete tree.root;
	delete tree2;
	return 0;
}
