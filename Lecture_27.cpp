#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    rotateArray(nums, k);

    cout << "Rotated Array: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}