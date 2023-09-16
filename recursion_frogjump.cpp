#include<iostream>
#include<vector>
std::vector<int> cost;

int jumpMinCost(int i,int n){
    if(i==n) return 0;
    if(i==n-1){
        return (jumpMinCost(i+1,n)+abs(cost[i]-cost[i+1]));
    }
    return std::min((jumpMinCost(i+1,n)+abs(cost[i]-cost[i+1])),jumpMinCost(i+2,n)+abs(cost[i]-cost[i+2]));
}

int main(){
    int n;
    std::cin>>n;
    cost.push_back(0);

    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        cost.push_back(x);
    }
    std::cout<<jumpMinCost(1,n);


}