#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int i = 1, j = 1, k = 26;
        long long sum = i + j + k;

        // Adjusting i, j, and k to achieve the desired sum
        if (n > 27) {
            while (sum != n && j < 26) {
                j++;
                sum = i + j + k;
                //cout<<sum<<endl;
            }
            while (sum != n) {
                i++;
                sum = i + j + k;
                //cout<<sum<<endl;
            }
        } else if (n <= 27) {
            while (sum != n && k > 1) {
                k--;
                sum = i + j + k;
            }
        }

        string s = "";
        s += 'a' + i - 1;
        s += 'a' + j - 1;
        s += 'a' + k - 1;
        cout << s << endl;
    }

    return 0;
}
