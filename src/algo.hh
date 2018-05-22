#include <string>
#include <vector>

void dijkstra();
/* backtracking */
void permutation(std::string str);
void subset(std::string str);

/* dp */

class Dp {
private:
    /**
     * Given 2 array indicates weights and value of the stone. 
     * Pick the most valuable stone combination and put into knapsacks 
     * with the max weight limitation.
     * weights = [1, 2, 4, 2, 5]
     * value   = [5, 3, 5, 3, 2]
     * maxWeig = 10
     * @param {vector} weights - the weights of the stone
     * @param {vector} value - the value of the stone
     * @param {int} maxWeight - the max weight the knapsack can carry
     * @param {int} index - current index
     */
    int knapsackHelper(std::vector<int>& weights, std::vector<int>& value, int index, int weight, std::vector<std::vector<int>>& dp);
    /**
     * Given 2 strings, find the longest common subsquence of them
     * Ex: strA = asdfghjk, strB = sfgjsk, ans = sfgjk
     */ 
    int lcsHelper(std::string& strA, std::string& strB, int indexA, int indexB, std::vector<std::vector<int>>& dp);
public:
    int knapsackProblem(std::vector<int>& weights, std::vector<int>& value, int maxWeight);
    int longestCommonSubsequence(std::string& strA, std::string& strB);
};
