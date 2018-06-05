#include <tree.hh>

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
private:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int v): val(v), next(nullptr) {};
    };
    ListNode* head;
    ListNode* tail;
    int _size = 0;
public:
    DoublyLinkedList(): head(nullptr), tail(nullptr), _size(0) {};
    ~DoublyLinkedList();
    void insertNode(int val);
    int deleteNode(int val);
    void traverse();
    int size();
};

// hash function: http://www.cse.yorku.ca/~oz/hash.html
class HashTable {
private:
    int _capacity = 10;
    int _size = 0;
    int* arr;
    int* keys;
public:
    HashTable();
    int capacity();
    int size();
    void insert(int key, int val);
    void insert(std::pair<int, int> val);
    bool erase(int key);
    bool find(int key);
    int operator[](const HashTable& table);
};

class LinkedListHeap {
private:
    TreeNode* head;
    bool (*predicate)(int x, int y);
public:
    LinkedListHeap();
    LinkedListHeap(bool (*predicate)(int x, int y));
    LinkedListHeap(std::vector<int> vec);
    ~LinkedListHeap();
    void insertNode(int val);
    void deleteNode(int val);
    void setPredicate(bool (*predicate)(int x, int y));
    TreeNode* front();
};

class Heap {
private:
    std::vector<int> arr;
    bool (*predicate)(int x, int y);
    void heapify(std::vector<int>& vec, int level);
public:
    Heap();
    Heap(bool (*predicate)(int x, int y));
    Heap(std::vector<int> vec);
    Heap(std::vector<int> vec, bool (*predicate)(int x, int y));
    ~Heap();
    void insertNode(int val);
    void deleteNode(int val);
    void setPredicate(bool (*predicate)(int x, int y));
    int front();
};