#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v;

        // Store elements of nums1
        for (auto num : nums1)
            v.push_back(num);

        // Store elements of nums2
        for (auto num : nums2)
            v.push_back(num);

        // Sort the combined array
        sort(v.begin(), v.end());

        int n = v.size();

        // Return median
        if (n % 2 == 1)
            return v[n / 2];
        else
            return (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }
};

int main() {
    Solution sol;

    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];

    double median = sol.findMedianSortedArrays(nums1, nums2);

    cout << "Median is: " << median;

    return 0;
}