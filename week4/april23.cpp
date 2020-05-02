
class Solution {
    int msbPos(int n)
    {
        int msb_p = -1;
        while (n)
        {
            n = n>>1;
            msb_p++;
        }
    return msb_p;
    }
  
public:
    int rangeBitwiseAnd(int m, int n) {
        int ans = 0;
       if(m == 0 || n == 0)return 0;
        while(m && n){
            int msb_m = msbPos(m);
            int msb_n = msbPos(n);
            if(msb_n != msb_m){
                return ans;
            }
            ans += (1 << msb_n);
            m = m - (1 << msb_n);
            n = n - (1 << msb_n);
        }
          return ans;
    }
};
