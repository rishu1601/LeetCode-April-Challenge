
static int io = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1){
            return nums[0] == k;
        }
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i - 1] + nums[i];
        }
        int ans = 0;
        unordered_map<int, int> m;
        m[0]++;
        for(int pre: prefix){
            int target = pre-k;
            if(m.find(target) != m.end()){
                ans += m.find(target)->second;
            }
            m[pre]++;
        }
        return ans;
    }
};
