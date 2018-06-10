#include "addingneighbours.h"

int main()
{
	Node *root1 = new Node;
        root1->val = 5;
        Node *leftNode = new Node;
        leftNode->val = 2;
        Node *rightNode = new Node;
        rightNode->val = 8;
        root1->left = leftNode;
        root1->right = rightNode;

        connectNodes(root1);

        cout << "top node:" << root1->val << endl;
        cout << "left node:" << root1->left->val << endl;
        cout << "right node:" << root1->left->next->val << endl;

	delete root1;
	delete leftNode;
	delete rightNode;
        return 0;
}
