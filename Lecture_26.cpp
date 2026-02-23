#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    
    vector<int> leftproduct(n, 1);
    vector<int> rightproduct(n, 1);
    vector<int> ans(n);

    // left product calculate
    for(int i = 1; i < n; i++) {
        leftproduct[i] = leftproduct[i - 1] * nums[i - 1];
    }

    // right product calculate
    for(int i = n - 2; i >= 0; i--) {
        rightproduct[i] = rightproduct[i + 1] * nums[i + 1];
    }

    // final answer
    for(int i = 0; i < n; i++) {
        ans[i] = leftproduct[i] * rightproduct[i];
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = productExceptSelf(nums);

    cout << "Output: ";
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}