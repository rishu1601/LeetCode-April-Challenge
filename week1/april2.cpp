/*
Write an algorithm to determine if a number n is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.

Example:

Input: 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
*/

/*
 Approach:
 Keep doing what's stated in the problem.
 Catch -> 7 on repetitive cycles goes to 1
 */


class Solution {
    int func(int n){
        int r = 0;
        while(n){
            int rem = n % 10;
            r += (rem * rem);
            n /= 10;
        }
        return r;
    }
public:
    bool isHappy(int n) {
        while(1){
            if(n <= 9){
                if(n == 1 || n == 7)return true;
                return false;
            }
            n = func(n);
        }
    }
};
