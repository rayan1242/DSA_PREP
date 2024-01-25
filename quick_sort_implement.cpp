#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

int getRandom(int max,int min){
    srand(time(0));
    int range = max - min + 1;
    int num = rand() % range + min;
    return num;
}

int prtition(std::vector<int> &arr, int l, int r,int pi){
    /*
        TC:O(n)
        SC:O(1)
    */
    int pivot = arr[pi];
    std::swap(arr[pi],arr[r]);
    int m = l;
    for(int i=l;i<=r-1;i++){
        if(arr[i]<pivot){
            std::swap(arr[i],arr[m]);
            m++;
        }
    }
    std::swap(arr[m],arr[r]);
    return m;
}

void f(std::vector<int> &arr,int l,int r){
    if(l<r){
        int pi=getRandom(r,l);
        int x = prtition(arr,l,r,pi);
        f(arr,l,x-1);
        f(arr,x+1,r);
    }
}

int quic_sort(std::vector<int> &arr){
    f(arr,0,arr.size()-1);
}

int main(){
    std::vector<int> arr = {9,8,7,3,-1,2,5,10,11,4};
    int l = 0;
    int r = arr.size()-1;
    quic_sort(arr);
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;

}