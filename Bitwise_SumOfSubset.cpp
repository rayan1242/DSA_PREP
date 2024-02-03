#include <iostream>

int main() {
    int a[] = {1,2,3};
    int S = 7;
    int n = 3;

    for (int mask = 0; mask < (1 << n); mask++) {
        long long sum_of_this_subset = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum_of_this_subset += a[i];
            }
        }
        if (sum_of_this_subset == S) {
            std::cout << "YES\n";
            return 0;
        }
    }

    std::cout << "NO\n";
    return 0;
}
