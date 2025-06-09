#include <iostream>
#include <vector>
using namespace std;

vector<int> nrotate(vector<int> arr, int n, int d) {
    d = d % n;  // Handle if d > n
    vector<int> temp(d);  // Standard-compliant dynamic array

    // Copy first d elements to temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Place temp elements at the end
    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }

    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    vector<int> rotated = nrotate(arr, n, d);

    for (int i = 0; i < n; i++) {
        cout << rotated[i] << " ";
    }

    return 0;
}
/*
leetcode :
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();              // Get the size of the array

        k = k % n;                        // If k is larger than n, bring it within bounds using modulo

        vector<int> temp(n);             // Create a temporary array of the same size to store rotated elements

        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i]; // Calculate the new index for each element and place it in temp
        }

        for (int i = 0; i < n; i++) {
            nums[i] = temp[i];           // Copy the rotated values from temp back into the original array
        }
    }
};
