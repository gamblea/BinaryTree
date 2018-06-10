// BinaryTree.h

#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

#include "Node.h"

struct BinaryTree {
	public:
    	   	Node *root;
    	  	int size;
    	  	BinaryTree();
		void AddNexts();
	private:
		int tree_height(Node *node);
		Node *get_level(Node *node, int height, Node *last);
};


#endif
