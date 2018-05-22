#include <vector>
class BSTree {
private:
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int v): val(v), left(nullptr), right(nullptr) {};
    };
    TreeNode* head;
public:
    void traverse();
    void insertNode(int val);
    void deleteNode(int val);
};

class Tries {

};

class RbTree {

};

class SplayTree {

};

void bfs();
void dfs();
void postAndInorderToTree(std::vector<int> in, std::vector<int> post);
void preAndInorderToTree(std::vector<int> in, std::vector<int> pre);