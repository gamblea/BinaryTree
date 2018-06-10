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
		void Insert(int value);		
		void PrintPre();
		void PrintIn();
		void PrintPost();	
		~BinaryTree();
	private:
		int tree_height(Node *node);
		Node *get_level(Node *node, int height, Node *last);
		Node *bstnode_insert_help(int value, Node *node);
		void node_print_pre(Node *node);
		void node_print_in(Node *node);
		void node_print_post(Node *node);
};


#endif
