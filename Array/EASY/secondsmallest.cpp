#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondSmallest(vector<int> &arr, int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        }
    }
    return ssmallest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int second = secondSmallest(arr, n);
    cout << "Second largest element is: " << second << endl;

    return 0;
}
