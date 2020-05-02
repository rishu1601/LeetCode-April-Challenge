//Kadane's algo
class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int max_so_far = arr[0];
        int curr_max = arr[0];
        for(int i = 1; i < arr.size(); i++){
            curr_max = max(arr[i], arr[i] + curr_max);
            max_so_far = max(max_so_far, curr_max);
        }
        return max_so_far;
    }
};
