#include <iostream>
#include <vector>
#include <string>
#include <util.hh>
#include <sort.hh>
#include <ds.hh>
#include <algo.hh>

int main() {
    using namespace std;
    // permutation("abcde");
    // subset("abc");
    // vector<int> ans{2,3,5,7};
    // combinationSum(ans, 7);
    vector<int> arr{18,23,5,34,-29,45,7,63,32};
    quicksort(arr, 0, arr.size() - 1);
    for (auto i: arr)
        cout << i << " ";
    cout << endl;
     
    DoublyLinkedList linkedList;
    cout << linkedList.size() << endl;
    linkedList.insertNode(1);
    linkedList.insertNode(2);
    linkedList.insertNode(2);
    linkedList.insertNode(2);
    linkedList.insertNode(2);
    linkedList.insertNode(6);
    linkedList.traverse();
    cout << linkedList.size() << endl;

    cout << "delete node 2" << endl;
    linkedList.deleteNode(2);
    linkedList.traverse();
    cout << linkedList.size() << endl;
    
    cout << "delete node 3" << endl;
    linkedList.deleteNode(3);
    linkedList.traverse();
    cout << linkedList.size() << endl;

    cout << "delete node 6" << endl;
    linkedList.deleteNode(6);
    linkedList.traverse();
    cout << linkedList.size() << endl;

    cout << "insert node 3" << endl;
    linkedList.insertNode(3);
    linkedList.traverse();
    cout << linkedList.size() << endl;

    cout << "delete node 1" << endl;
    linkedList.deleteNode(1);
    linkedList.traverse();
    cout << linkedList.size() << endl;

    cout << "insert node 3" << endl;
    linkedList.insertNode(3);
    linkedList.traverse();
    cout << linkedList.size() << endl;

    cout << "delete node 3" << endl;
    linkedList.deleteNode(3);
    linkedList.traverse();
    cout << linkedList.size() << endl;

    cout << "insert node 3" << endl;
    linkedList.insertNode(3);
    linkedList.traverse();
    cout << linkedList.size() << endl;
    return 0;
}
