#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool twosum(vector<int> arr, int target){
    unordered_set<int> zoo;
    for(int num : arr){
        int compliment = target - num;
        if(zoo.count(compliment)){
            cout << " found";
            return true;
        }
        zoo.insert(num);
    }
    cout << "not found";
    return false;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int target;
    cin>> target;
    twosum(arr,target);
    return 0;
}

