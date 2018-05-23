#include <algo.hh>
#include <iostream>
#include <algorithm>

int Dp::knapsackProblem(std::vector<int>& weights, std::vector<int>& value, int maxWeight) {
    const size_t size = weights.size();
    std::vector<std::vector<int>> dp(size, std::vector<int>(maxWeight + 1, INT_MIN));
    return knapsackHelper(weights, value, 0, maxWeight, dp);
}

int Dp::knapsackHelper(std::vector<int>& weights, std::vector<int>& value, int index, int weight, std::vector<std::vector<int>>& dp) {
    if (index == weights.size())
        return 0;
    int result = 0;
    if (dp[index][weight] != INT_MIN) {
        return dp[index][weight];
    } else if (weights[index] < weight) {
        int choose = value[index] + knapsackHelper(weights, value, index + 1, weight - weights[index], dp);
        int notChoose = knapsackHelper(weights, value, index + 1, weight, dp);
        result = choose > notChoose ? choose : notChoose;
    } else {
        result = knapsackHelper(weights, value, index + 1, weight, dp);
    }
    dp[index][weight] = result;
    return result;
}

// given string a, b, final word in string is e1, e2
// 4 possible situations below
// 1. lcs(a, sub_b) // a
// 2. lcs(sub_a, b) // b
// 3. lcs(sub_a, sub_b) //
// 4. lcs(sub_a, sub_b) + 1 //ab
// e1 == e2 => lcs(sub_a, sub_b)
// el != e2 => max(lcs(sub_a, b), lcs(a, sub_b))
int Dp::lcsHelper(std::string& strA, std::string& strB, int indexA, int indexB, std::vector<std::vector<int>>& dp) {
    if (indexA < 0 || indexB < 0)
        return 0;
    if (dp[indexA][indexB] != -1)
        return dp[indexA][indexB];
    int result = 0;
    if (strA[indexA] == strA[indexB])
        result = lcsHelper(strA, strB, indexA - 1, indexB - 1, dp) + 1;
    else
        result = std::max(lcsHelper(strA, strB, indexA - 1, indexB, dp), lcsHelper(strA, strB, indexA, indexB - 1, dp));
    dp[indexA][indexB] = result;
    return result;
}

int Dp::longestCommonSubsequence(std::string& strA, std::string& strB) {
    std::vector<std::vector<int>> dp(strA.size(), std::vector<int>(strB.size(), -1));
    return lcsHelper(strA, strB, strA.size() - 1, strB.size() - 1, dp);
}

/* backtracking */
void permutationHelper(std::string& str, std::vector<std::string>& ans, std::string& temp) {
    if (str.empty()) {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < str.size(); ++i) {
        char c = str[i];
        temp += c;
        str.erase(str.begin() + i);
        permutationHelper(str, ans, temp);
        temp.pop_back();
        str.insert(str.begin() + i, c);
    }
}
// abcde
// abcde
// abced
void permutation(std::string str) {
    std::vector<std::string> ans;
    std::string temp;
    permutationHelper(str, ans, temp);
    for (std::string str: ans)
        std::cout << str << std::endl;
}

void subsetHelper(std::string& str, std::vector<std::string>& ans, std::string& temp, int index) {
    ans.push_back(temp);
    for (int i = index; i < str.size(); ++i) {
        temp += str[i];
        subsetHelper(str, ans, temp, i + 1);
        temp.pop_back();
    }
}
void subset(std::string str) {
    std::vector<std::string> ans;
    std::string temp;
    subsetHelper(str, ans, temp, 0);
    for (std::string str: ans)
        std::cout << str << std::endl;
}

// 2,3,6,7 => 7
void combinationSumHelper(std::vector<int>& nums, int target, std::vector<std::vector<int>>& ans, std::vector<int>& temp, int index) {
    if (target < 0)
        return;
    if (target == 0) {
        ans.push_back(temp);
        return;
    }
    for (int i = index; i < nums.size(); ++i) {
        temp.push_back(nums[i]);
        combinationSumHelper(nums, target - nums[i], ans, temp, i);
        temp.pop_back();
    }
}
void combinationSum(std::vector<int> nums, int target) {
    std::vector<std::vector<int>> ans;
    std::vector<int> temp;
    std::sort(nums.begin(), nums.end());
    combinationSumHelper(nums, target, ans, temp, 0);
    for (auto arr: ans) {
        for (auto e: arr)
            std::cout << e << " ";
        std::cout << std::endl;
    }
}