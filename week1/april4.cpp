//Move all zeros, use two pointer approach
class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        if(n <= 1){
            return;
        }
        int startOther = 0;
        int curr = 0;
        while(curr < n){
            if(a[curr] > 0){
                a[startOther] = a[curr];
                a[curr] = 0;
                startOther += 1;
            }
            curr += 1;
        }
    }
};
