class Solution {
public boolean backspaceCompare(String S, String T) {
        Stack<Character> s1 = new Stack<>();
        Stack<Character> s2 = new Stack<>();
        char[] s11 = S.toCharArray();
        char[] s22 = T.toCharArray();
        for(int i = 0; i < S.length(); i++){
            if(s1.empty() && s11[i] == '#'){
                continue;
            }if(s11[i] == '#'){
                s1.pop();
                continue;
            }
            s1.push(s11[i]);
        }
        for(int i = 0; i < T.length(); i++){
            if(s2.empty() && s22[i] == '#'){
                continue;
            }if(s22[i] == '#'){
                s2.pop();
                continue;
            }
            s2.push(s22[i]);
        }
        while(!s1.empty() && !s2.empty()){
            char a = s1.pop();
            char b = s2.pop();
            if(a != b)return false;
        }
        if(!s1.empty() || !s2.empty()){
            return false;
        }
        return true;
    }
};