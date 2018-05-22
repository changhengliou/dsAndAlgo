#include <iostream>
#include <vector>
#include <string>
#include <sort.hh>
#include <ds.hh>
#include <algo.hh>

int main() {
    using namespace std;
    string strA = "star apple juice";
    string strB = "apple pie";
    Dp dp;
    cout << dp.longestCommonSubsequence(strA, strB) << endl;
    return 0;
}
