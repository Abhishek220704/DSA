#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> &arr, int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = largest(arr, n);
    cout << "Largest element is: " << maxVal << endl;

    return 0;
}
