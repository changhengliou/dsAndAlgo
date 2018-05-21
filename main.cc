#include <iostream>
#include <cstdlib>
#include <sort.hh>

int main() {
    using namespace std;
    vector<int> vec {34, 26, 48, 17, 24, 19, 33};
    mergesort(vec, 0, vec.size() - 1);
    for (auto i: vec)
        cout << i << " ";
    cout << endl;
    return 0;
}

/* quicksort */
int partition(std::vector<int>& arr, int left, int right) {
    const int mid = (right - left) / 2 + left;
    swap(arr, mid, right);
    int j = left;
    for (int i = left; i < right; ++i) {
        if (arr[i] < arr[right]) {
            swap(arr, i, j++);
        }
    }
    swap(arr, j, right);
    return j;
}

void quicksort(std::vector<int>& arr, int left, int right) {
    if (left >= right) return;
    int mid = partition(arr, left, right);
    quicksort(arr, left, mid - 1);
    quicksort(arr, mid + 1, right);
}

/* mergesort */
void mergesort(std::vector<int>& arr, int left, int right) {
    if (left >= right) return;
    const int mid = (right - left) / 2 + left;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, right, mid);
}

void merge(std::vector<int>& arr, int left, int right, int mid) {
    int i, j, k;
    const size_t size = right - left + 1;
    int temp[size]; // temp array
    memset(temp, 0, size);
    i = left;    
    j = mid + 1; 
    k = left;     
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= right) {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (i = left; i < k; i++) {
        arr[i] = temp[i];
    }
}

/* heapsort */
void heapsort(std::vector<int>& arr, int n) {

}
void heapify(std::vector<int>& arr, int root) {

}

/* utility */
void swap(std::vector<int>& arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}