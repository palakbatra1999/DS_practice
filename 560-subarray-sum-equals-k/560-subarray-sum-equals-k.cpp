class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> pSum;  // Map to store prefix sum frequencies
        pSum[0] = 1;  // Initial condition (helps when sum itself is k)

        int sum = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];  // Update the prefix sum

            if (pSum.find(sum - k) != pSum.end()) {  
                count += pSum[sum - k];  // Add frequency of (sum - k) found earlier
            }

            pSum[sum]++;  // Store the prefix sum in the map
        }

        return count;
    }
};
