/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// step 1-> find the node to be deleted by comparision
//  step 2-> restructure its children while preserving BST order
// there can be 3 cases for deleting a node
    // 1. No children -> leaf node -> this can be deleted directly
    // 2. 1 Children -> replace the current node with its only children
    // 3. 2 children -> to maintain the BST order, we need eighter chose inorder successor (smallese value RST) or inorder predecessor (largest value in LST) and replace with current node

class Solution {
public:
    // Helper function 
    TreeNode* findMin(TreeNode* node) {
        while (node != nullptr && node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return nullptr;

        // Step 1: Find the node to be deleted
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } 
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } 
        else {
            // Found the node! Handle the cases:

            // Case 1 & 2: No child or only one child
            if (root->left == nullptr) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } 
            else if (root->right == nullptr) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Case 3: Two children
            // Use the helper at the top to find the successor
            TreeNode* temp = findMin(root->right);
            
            // Replace current node's value with successor's value
            root->val = temp->val;
            
            // Delete the inorder successor from the right subtree
            root->right = deleteNode(root->right, temp->val);
        }
        return root;
    }
};