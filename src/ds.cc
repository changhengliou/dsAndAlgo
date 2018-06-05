#include <memory>
#include <cassert>
#include <iostream>
#include <ds.hh>

extern void swap(std::vector<int>& arr, int a, int b);
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
DoublyLinkedList::~DoublyLinkedList() {
    ListNode* prev = nullptr;
    ListNode* ptr = this->head;
    while (ptr != nullptr) {
        prev = ptr;
        ptr = ptr->next;
        delete prev;
    }
}
void DoublyLinkedList::insertNode(int val) {
    ListNode* newNode = new ListNode(val);
    this->_size += 1;
    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int DoublyLinkedList::deleteNode(int val) {
    ListNode* prev = nullptr;
    ListNode* ptr = this->head;
    while (ptr != nullptr) {
        // delete operation
        if (ptr->val == val) {
            this->_size -= 1;
            if (ptr == this->head) {
                this->head = this->head->next;
                delete ptr;
                ptr = this->head;
            } else {
                if (ptr == this->tail)
                    this->tail = prev;
                prev->next = ptr->next;
                delete ptr;
                ptr = prev->next;
            }
        } else {
            prev = ptr;
            ptr = ptr->next;
        }
    }
    return this->_size;
}

void DoublyLinkedList::traverse() {
    ListNode* ptr = this->head;
    while (ptr != nullptr) {
        std::cout << ptr->val << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

int DoublyLinkedList::size() {
    return this->_size;
}

/* Linked list Heap implementation */
LinkedListHeap::LinkedListHeap() {
    this->predicate = [](int x, int y) -> bool { return x > y; };
}
LinkedListHeap::LinkedListHeap(bool (*predicate)(int x, int y)) {
    this->predicate = predicate;
}
LinkedListHeap::LinkedListHeap(std::vector<int> vec) {
    // heapify here, not implemented yet
}
LinkedListHeap::~LinkedListHeap() {
    // not implemented yet
}
void LinkedListHeap::insertNode(int val) {
    TreeNode* newNode = new TreeNode(val);
    TreeNode* ptr = this->head;
    if (ptr == nullptr) {
        head = newNode;
        return;
    }
    if (this->predicate(val, ptr->val)) {

    } else {

    }
}
void LinkedListHeap::deleteNode(int val) {

}
void LinkedListHeap::setPredicate(bool (*predicate)(int x, int y)) {

}
TreeNode* LinkedListHeap::front() {
    return this->head;
}

/* Heap implementation */
Heap::Heap() {
    this->predicate = [](int x, int y) -> bool { return x > y; };
}
Heap::Heap(bool (*predicate)(int x, int y)) {
    this->predicate = predicate;
}
Heap::Heap(std::vector<int> vec) {
    
}
Heap::Heap(std::vector<int> vec, bool (*predicate)(int x, int y)) {

}
Heap::~Heap() {
    // not implemented yet
}
void Heap::heapify(std::vector<int>& vec, int level) {
    int left = 2 * level, 
        right = left + 1,
        largest = 0;
    if (left <= vec.size() && this->predicate(vec[left], vec[level])) {
        largest = left;
    } else {
        largest = level;
    }
    if (right <= vec.size() && this->predicate(vec[right], vec[level])) {
        largest = right;
    }
    if (largest != level) {
        swap(vec, largest, level);
        heapify(vec, largest);
    }
}
void Heap::insertNode(int val) {
    if (this->predicate(val, 0)) {

    } else {

    }
}
void Heap::deleteNode(int val) {

}
void Heap::setPredicate(bool (*predicate)(int x, int y)) {

}
int Heap::front() {
    return 0;
}
