
static const auto fast = []() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  return NULL;
}();
class Solution {
    public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return true;
        }
        int dis = 0;
        for(int i = 0; i < n; i++){
            if(i > dis)return false;
            dis = max(dis, i + nums[i]);
        }
        return true;
    }
};
