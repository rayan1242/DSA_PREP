#include<bits/stdc++.h>
using namespace std;

class MaxHeap {
public:
    vector<int> v;

    void upHeapify(int idx) {
        int pi = (idx - 1) / 2;
        while (idx > 0) {
            if (v[idx] > v[pi]) {
                swap(v[idx], v[pi]);
                idx = pi;
                pi = (idx - 1) / 2; // Update parent index
            } else {
                break;
            }
        }
    }

    void insert(int data) {
        this->v.push_back(data);
        upHeapify(v.size() - 1);
    }

    void downHeapify(int idx) {
        while (idx < v.size()) {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            int cand = idx; // Candidate index for swapping

            if (lc < v.size() && v[lc] > v[cand]) {
                cand = lc;
            }
            if (rc < v.size() && v[rc] > v[cand]) {
                cand = rc;
            }
            if (cand == idx) {
                break;
            } else {
                swap(v[cand], v[idx]);
                idx = cand;
            }
        }
    }

    void remove() {
        if (!v.empty()) {
            v[0] = v.back();
            v.pop_back();
            downHeapify(0); // Perform downHeapify from root
        }
    }

    void display() {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
    }
};

int main() {
    MaxHeap mh;
    mh.insert(25);
    mh.insert(20);
    mh.insert(15);
    mh.insert(1);
    mh.insert(10);
    mh.display();
    cout<<endl;
    mh.insert(0);
    mh.remove();
    mh.display();
    cout<<endl;
	mh.remove();
    mh.display();
    return 0;
}


