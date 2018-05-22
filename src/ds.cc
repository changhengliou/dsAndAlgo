#include <memory>
#include <cassert>
#include <ds.hh>

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