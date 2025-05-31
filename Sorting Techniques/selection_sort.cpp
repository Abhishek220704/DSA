#include<iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){           // Fix 1: loop till n-1, not n-2
        int mini = i;
        for(int j = i + 1; j < n; j++){       // Fix 2: j should start from i+1
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i]= temp;

    }
}
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
selection_sort(arr,n);
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
return 0;
}
