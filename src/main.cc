#include <iostream>
#include <cstdlib>
#include <sort.hh>
#include <ds.hh>

int main() {
    using namespace std;
    Stack stack(10);
    for (int i = 0; i < 20; ++i) {
        stack.push(i);
    }
    cout << "capacity = " << stack.capacity() << ", size = " << stack.size() << endl;
    for (int i = 0; i < 7; ++i) {
        cout << stack.pop() << endl;
    }
    stack.pop();
    cout << "capacity = " << stack.capacity() << ", size = " << stack.size() << endl;
    for (int i = 45; i < 79; ++i) {
        stack.push(i);
    }
    cout << "capacity = " << stack.capacity() << ", size = " << stack.size() << endl;
    cout << stack.top() << endl;
    cout << "capacity = " << stack.capacity() << ", size = " << stack.size() << endl;
    return 0;
}
