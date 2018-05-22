#include <iostream>
#include <cstdlib>
#include <sort.hh>
#include <ds.hh>

int main() {
    using namespace std;
    Queue queue(10);
    queue.push(1);
    queue.pop();
    for (int i = 0; i < 20; ++i) {
        queue.push(i);
    }
    cout << "size = " << queue.size() << ", capacity = " << queue.capacity() << endl;
    for (int i = 0; i < 7; ++i) {
        cout << queue.pop() << " ";
    }
    cout << endl;
    cout << "size = " << queue.size() << ", capacity = " << queue.capacity() << endl;
    for (int i = 56; i < 93; ++i) {
        queue.push(i);
    }
    cout << "size = " << queue.size() << ", capacity = " << queue.capacity() << endl;
    for (int i = 0; i < 37; ++i) {
        cout << queue.pop() << " ";
    }
    cout << endl;
    cout << "size = " << queue.size() << ", capacity = " << queue.capacity() << endl;
    for (int i = 0; i < 13; ++i) {
        cout << queue.pop() << " ";
    }
    cout << endl;
    cout << "isEmpty = " << queue.empty() << endl;
    cout << "size = " << queue.size() << ", capacity = " << queue.capacity() << endl;
    return 0;
}
