#include <iostream>
#include <vector>
#include <string>
#include <sort.hh>
#include <ds.hh>
#include <algo.hh>

int main() {
    using namespace std;
    // permutation("abcde");
    // subset("abc");
    // vector<int> ans{2,3,5,7};
    // combinationSum(ans, 7);
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
