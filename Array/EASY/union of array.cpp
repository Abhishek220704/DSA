#include<iostream>
#include<vector>
#include<set>
using namespace std;

// Use a different name, e.g., findUnion
vector<int> findUnion(vector<int> arr1, vector<int> arr2, int n1, int n2){
    set<int> s;

    for(int i = 0; i < n1; i++)
        s.insert(arr1[i]);

    for(int i = 0; i < n2; i++)
        s.insert(arr2[i]);

    vector<int> result(s.begin(), s.end());
    return result;
}

int main(){
    int n1;
    cin >> n1;
    vector<int> arr1(n1);
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    int n2;
    cin >> n2;
    vector<int> arr2(n2);
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    vector<int> result = findUnion(arr1, arr2, n1, n2);

    cout << "Union: ";
    for(int val : result){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
