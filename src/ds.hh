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
private:
    int _size = 0;
    int _capacity = 10;
    int _front = 0;
    int _back = 0;
    int* _arr;
public:
    Queue();
    Queue(int val);
    ~Queue();
    int size();
    int capacity();
    bool empty();
    int front();
    void push(int val);
    int pop();
};

class DoublyLinkedList {

};

class HashTable {

};

class Heap {

};