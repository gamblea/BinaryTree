// BinaryTree.cc

#include "BinaryTree.h"
#include <algorithm>

BinaryTree::BinaryTree() : 
	root{nullptr},size{0} {}


int BinaryTree::tree_height(Node *node)
{
	if (node == nullptr) return 0;
	return 1 + std::max(tree_height(node->left), tree_height(node->right));
}

void BinaryTree::AddNexts()
{
	int height = tree_height(root);
	Node *last = root;
	for (int i = 0; i < height; i++)
	{
		last = get_level(root, i, last);
	}
}

Node *BinaryTree::get_level(Node *node, int height, Node *last)
{
	if (height == 0)
	{
		last->next = node;
		last = node;
		return last;
	}
	else
	{
		last = get_level(node->left, height - 1, last);
		last = get_level(node->right, height - 1, last);
		return last;
	}
}


