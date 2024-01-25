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

int main(){
    std::vector<int> arr = {9,8,7,3,-1,2,5,10,11,4};
    int l = 0;
    int r = arr.size()-1;
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    int pi=getRandom(r,l);
    std::cout<<"\n";
    std::cout<<pi<<" "<<"Pivot is"<<" "<<arr[pi]<<"\n";
    int x = prtition(arr,l,r,pi);
    std::cout<<x<<"\n";
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;

}