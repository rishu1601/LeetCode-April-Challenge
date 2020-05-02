/*
 Given a non-empty array of integers, every element appears twice except for one. Find that single one.

 Note:

 Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

 Example 1:

 Input: [2,2,1]
 Output: 1
 Example 2:

 Input: [4,1,2,1,2]
 Output: 4
 */


/*
 Approach:
 a ^ a = 0
 a ^ 0 = a
 
 */


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return -1;
        int s = 0;
        for(int i = 0; i < n; i++){
            s ^= nums[i];
        }
        return s;
    }
};
