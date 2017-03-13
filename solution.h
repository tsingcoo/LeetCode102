//
// Created by 王青龙 on 2017/3/13.
//

#ifndef LEETCODE102_SOLUTION_H
#define LEETCODE102_SOLUTION_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode * right;
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
};

class Solution{
public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root);
};

#endif //LEETCODE102_SOLUTION_H
