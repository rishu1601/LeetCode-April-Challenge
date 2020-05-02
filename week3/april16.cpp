class Solution {
public:
    bool checkValidString(string s) {
        int least = 0;
        int most = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                least += 1;
            }else{
                least -= 1;
            }
            if(s[i] != ')'){
                most += 1;
            }else{
                most -= 1;
            }
            if(most < 0)break;
            least = max(least, 0);
        }
    return least == 0;
    }
};
