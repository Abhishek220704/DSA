#include <iostream>
#include <unordered_set>
using namespace std;

int countUniqueElements(int arr[], int n) {
    unordered_set<int> unique;

    for(int i = 0; i < n; i++) {
        unique.insert(arr[i]);
    }

    return unique.size();
}

int main() {
    int arr[] = {1, 1, 1, 2, 3, 3, 4, 4, 5, 6, 6, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int uniqueCount = countUniqueElements(arr, n);
    cout << "Number of unique elements: " << uniqueCount << endl;

    return 0;
}
