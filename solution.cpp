//
// Created by 王青龙 on 2017/3/13.
//

#include <queue>
#include "solution.h"

std::vector<std::vector<int>> Solution::levelOrder(TreeNode *root) {
    std::vector<std::vector<int>> res;
    if (root == nullptr) {
        return res;
    }
    std::vector<int> curVec;
    std::queue<TreeNode *> treeQueue;
    treeQueue.push(root);
    treeQueue.push(nullptr);
    while (!treeQueue.empty()) {
        auto temp = treeQueue.front();
        treeQueue.pop();
        if (temp == nullptr) {
            res.push_back(curVec);
            curVec.resize(0);
            if (treeQueue.size() > 0) {
                treeQueue.push(nullptr);
            }
        } else {
            curVec.push_back(temp->val);
            if (temp->left != nullptr) {
                treeQueue.push(temp->left);
            }
            if (temp->right != nullptr) {
                treeQueue.push(temp->right);
            }
        }
    }
    return res;
}
