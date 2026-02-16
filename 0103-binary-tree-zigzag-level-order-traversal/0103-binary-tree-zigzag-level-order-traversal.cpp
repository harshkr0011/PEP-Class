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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if (root == NULL)
            return {};

        queue<TreeNode*> q;
        q.push(root);

        vector<vector<int>> result;
        bool reversal = false;

        while (!q.empty()) {

            int levelSize = q.size();
            vector<int> level;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* frontNode = q.front();
                q.pop();

                level.push_back(frontNode->val);

                if (frontNode->left)
                    q.push(frontNode->left);

                if (frontNode->right)
                    q.push(frontNode->right);
            }

            if (reversal)
                reverse(level.begin(), level.end());

            result.push_back(level);
            reversal = !reversal;
        }

        return result;
    }
};
