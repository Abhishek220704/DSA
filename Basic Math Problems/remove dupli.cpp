#include <iostream>
#include <vector>
using namespace std;

int redupli(vector<int>& arr, int n) {  // Pass by reference
    if(n == 0) return 0;
    int j = 0;
    for(int i = 1; i < n; i++) {
        if(arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;  // count of unique elements
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique = redupli(arr, n);  // get count of unique elements

    cout << "Unique elements: ";
    for(int i = 0; i < unique; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nCount = " << unique << endl;

    return 0;
}
