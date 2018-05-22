#include <vector>

void swap(std::vector<int>& arr, int a, int b);

void quicksort(std::vector<int>& arr, int left, int right);
int partition(std::vector<int>& arr, int left, int right);

void mergesort(std::vector<int>& arr, int left, int right);
void merge(std::vector<int>& arr, int left, int right, int mid);

void heapsort(std::vector<int>& arr, int n);
void heapify(std::vector<int>& arr, int root);