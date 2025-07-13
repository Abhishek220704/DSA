#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> find(vector<int> arr, int n, int target) {
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int a = arr[i];
        int rem = target - a;
        if (mpp.find(rem) != mpp.end()) {
            return {mpp[rem], i}; // return indices of the pair
        }
        mpp[a] = i;
    }
    return {-1, -1}; // No such pair found
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<int> result = find(arr, n, target);

    if (result[0] == -1) {
        cout << "No";
    } else {
        cout << "Yes, indices: " << result[0] << " and " << result[1];
    }

    return 0;
}


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> mpp;
       for(int i=0;i < nums.size();i++){
            int a = nums[i];
            int rem = target - a;
            if(mpp.find(rem) != mpp.end()){
                return{mpp[rem],i};
            }
            mpp[a] = i;
       }
    return {-1,-1};
    }
};
