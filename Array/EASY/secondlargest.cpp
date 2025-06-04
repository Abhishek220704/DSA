#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> &arr, int n) {
    int largest = arr[0];
    int second = -1;

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find the second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > second) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int second = secondLargest(arr, n);
    cout << "Second largest element is: " << second << endl;

    return 0;
}
