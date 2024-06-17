#include<bits/stdc++.h>
using namespace std;

vector<int> merge_two_sorted_array(vector<int>& arr1, vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            result.push_back(arr1[i++]);
        } else {
            result.push_back(arr2[j++]);
        }
    }
    while (j < m) {
        result.push_back(arr2[j++]);
    }
    while (i < n) {
        result.push_back(arr1[i++]);
    }
    return result;
}

void merge(vector<int>& arr, int l, int mid, int r) {
    vector<int> left(arr.begin() + l, arr.begin() + mid + 1);
    vector<int> right(arr.begin() + mid + 1, arr.begin() + r + 1);
    vector<int> result = merge_two_sorted_array(left, right);
    int n = 0;
    for (int i = l; i <= r; i++) {
        arr[i] = result[n++];
    }
}

void merge_sort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    vector<int> arr = {4, 2, 7, 11, 2, -3, 6, 8, 0};
    int l = 0, r = arr.size() - 1;  // Corrected the range
    merge_sort(arr, l, r);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

