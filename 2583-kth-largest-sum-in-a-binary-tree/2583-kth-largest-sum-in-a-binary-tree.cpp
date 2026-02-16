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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        // If tree is empty
        if (root == NULL)
            return -1;

        // Queue for BFS
        queue<TreeNode*> q;
        q.push(root);

        // Vector to store sum of each level
        vector<long long> levelSum;

        // Perform Level Order Traversal
        while (!q.empty()) {
            
            int levelSize = q.size();
            long long sum = 0;

            // Process all nodes of current level
            for (int i = 0; i < levelSize; i++) {
                TreeNode* frontNode = q.front();
                q.pop();

                // Add node value to sum
                sum += frontNode->val;

                // Push left child if exists
                if (frontNode->left)
                    q.push(frontNode->left);

                // Push right child if exists
                if (frontNode->right)
                    q.push(frontNode->right);
            }

            // Store current level sum
            levelSum.push_back(sum);
        }

        // If k is greater than number of levels
        if (k > levelSum.size())
            return -1;

        // Sort in descending order
        sort(levelSum.begin(), levelSum.end(), greater<long long>());

        // Return kth largest (k-1 index)
        return levelSum[k - 1];
    }
};
