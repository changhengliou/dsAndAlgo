#include <memory>
#include <cassert>
#include <ds.hh>

/* stack implementation */
Stack::Stack() {
    this->_arr = new int[this->_capacity];
}

Stack::Stack(int val) {
    this->_capacity = val;
    this->_arr = new int[this->_capacity];
}

Stack::~Stack() {
    delete[] this->_arr;
}

int Stack::size() {
    return this->_size;
}

int Stack::capacity() {
    return this->_capacity;
}

bool Stack::empty() {
    return this->_size == 0;
}

int Stack::top() {
    assert(this->_top >= 0);
    return this->_arr[this->_top];
}

void Stack::push(int val) {
    if (this->_size >= this->_capacity) {
        const size_t newCap = this->_capacity * 2;
        int* temp = new int[newCap];
        std::memcpy(temp, this->_arr, newCap * sizeof(this->_capacity));
        this->_capacity = newCap;
        delete[] this->_arr;
        this->_arr = temp;   
    }
    this->_arr[++this->_top] = val;
    this->_size++;
}

int Stack::pop() {
    assert(this->_top >= 0);
    this->_size--;
    return this->_arr[this->_top--];
}

/* queue implementation */
Queue::Queue() {
    this->_arr = new int[this->_capacity];
}

Queue::Queue(int val) {
    this->_capacity = val;
    this->_arr = new int[this->_capacity];
}

Queue::~Queue() {
    delete[] this->_arr;
}

int Queue::size() {
    return this->_size;
}

int Queue::capacity() {
    return this->_capacity;
}

bool Queue::empty() {
    return this->_size == 0;
}

int Queue::front() {
    assert(this->_size > 0);
    return this->_arr[this->_front];
}

void Queue::push(int val) {
    if (this->_back + 1 == this->_capacity) {
        int* temp = new int[this->_capacity * 2];
        std::memcpy(temp, this->_arr, this->_capacity * sizeof(int));
        delete[] this->_arr;
        this->_arr = temp;
        this->_capacity *= 2;
    }
    this->_size++;
    this->_arr[this->_back++] = val;
}

int Queue::pop() {
    assert(this->_size > 0);
    this->_size--;
    int rtnVal = this->_arr[this->_front++];
    if (this->_front == this->_back)
        this->_front = this->_back = 0;
    return rtnVal;
}

/* doubly link list implementation */
void DoublyLinkedList::insertNode(int val) {

}

int DoublyLinkedList::deleteNode(int val) {
    return val;
}

void DoublyLinkedList::traverse() {

}

int DoublyLinkedList::size() {
    return this->_size;
}