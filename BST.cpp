#include <iostream>

struct Node 
{
    Node *left;
    Node *right;
    int val;

    Node(): left(nullptr), right(nullptr)
    {}

    Node(int value): left(nullptr), right(nullptr), val(value)
    {}

    void insert(int value)
    {
        if(value < this->val)
        {
            if(!left)
                left = new Node(value);
            else
                left->insert(value);
        }
        else if(value > this->val)
        {
            if(!right)
                right = new Node(value);
            else
                right->insert(value);
        }
    }

    Node * BinarySearch(int value)
    {
        if (value == this->val)
            return this;
        if(value < this->val)
            return left ? left->BinarySearch(value) : nullptr;
        if(value > this->val)
            return right ? right->BinarySearch(value) : nullptr;;
        return nullptr;
    }

    Node* deleteNode(Node* root, int key) {
        if (!root) return nullptr;
    
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            // Case 1: No children
            if (!root->left && !root->right) {
                delete root;
                return nullptr;
            }
            // Case 2: One child
            else if (!root->left) {
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else if (!root->right) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            // Case 3: Two children
            else {
                Node* successor = root->right;
                while (successor->left)
                    successor = successor->left;
                root->val = successor->val;
                root->right = deleteNode(root->right, successor->val);
            }
        }
    
        return root;
    }
    

    void inOrder()
    {
        if (left) left->inOrder();
        std::cout << val << " ";
        if (right) right->inOrder();
    }
};

int main(int argc, char ** argv)
{
    Node *root = new Node(10);
    root->insert(9);
    root->insert(12);
    root->insert(6);
    root->insert(8);
    root->insert(4);
    root->insert(5);
    root->insert(2);
    root->insert(11);
    root->insert(15);
    root->insert(13);
    root->insert(18);
    root->inOrder();
    root->deleteNode(root, 10);
    std::cout << std::endl;
    root->inOrder();
}