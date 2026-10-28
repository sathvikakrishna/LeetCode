#include <bits/stdc++.h>
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        vector<int> v = nums;

        long long total_subarrays = 0;
        long long current_length = 0;

        for (int num : v) {
            if (num >= minK && num <= maxK) {
                current_length++;
                total_subarrays += current_length;
            }
            else {
                current_length = 0;
            }
        }
        return total_subarrays;
    }
};