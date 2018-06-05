#ifndef UTIL_HH
#define UTIL_HH
#pragma once

#include <vector>

void swap(std::vector<int>& arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

#endif /* UTIL_HH */