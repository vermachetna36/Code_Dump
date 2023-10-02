// Enter array size : 3
// Enter array element : 816 76 42
// Enter target element : 11
// The target is not present.

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int low, int high, int target) {

    if (low > high) return -1; //Base case.

    // Perform the steps:
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main()
{
     int n;
     cout<<"Enter array size : ";
     cin>>n;
    vector<int> a(n);
    cout<<"Enter array element : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
   
    int target;
     cout<<"Enter target element : ";
    cin>>target;
    int ind = search(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}
