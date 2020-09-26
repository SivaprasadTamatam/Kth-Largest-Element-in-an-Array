#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
        
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto i : nums){
        pq.push(i);
        if(pq.size()>k)
            pq.pop();
    }
    
    return pq.top();
}

int main(int argc, const char * argv[]) {
    vector<int> v = {3,2,1,5,6,4};
    cout<<findKthLargest(v,2);
    return 0;
}
