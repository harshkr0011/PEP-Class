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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        // This will store the final answer (level by level)
        vector<vector<int>> result;

        // If tree is empty, return empty result
        if (root == NULL)
            return result;

        // Create a queue to perform BFS (Breadth First Search)
        queue<TreeNode*> q;

        // Push root node into queue
        q.push(root);

        // Continue until queue becomes empty
        while (!q.empty()) {

            // Number of nodes present at current level
            int levelSize = q.size();

            // Vector to store current level values
            vector<int> level;

            // Process all nodes of the current level
            for (int i = 0; i < levelSize; i++) {

                // Get front node from queue
                TreeNode* node = q.front();
                q.pop();

                // Store its value
                level.push_back(node->val);

                // If left child exists, push it into queue
                if (node->left != NULL)
                    q.push(node->left);

                // If right child exists, push it into queue
                if (node->right != NULL)
                    q.push(node->right);
            }

            // After finishing one level, store it in result
            result.push_back(level);
        }

        // Return final level order traversal
        return result;
    }
};

