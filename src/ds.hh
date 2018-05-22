class Stack {
private:
    int _capacity = 10;
    int _size = 0;
    int _top = -1;
    int* _arr = new int[_capacity];
public:
    Stack();
    Stack(int val);
    ~Stack();
    int size();
    int capacity();
    bool empty();
    int top();
    void push(int val);
    int pop();
};

class Queue {

};

class DoublyLinkedList {

};

class HashTable {

};

class Heap {

};