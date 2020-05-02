
static int x=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        int sum = 0;
        int ans = 0;
        m[0] = -1;
        for(int i = 0; i < n; i++){
            sum += nums[i] == 0 ? -1 : 1;
            if(m.find(sum)!=m.end()){
                ans = max(ans, i - m[sum]);
            }
            else{
                m[sum] = i;
            }
        }
        return ans;
    }
};
