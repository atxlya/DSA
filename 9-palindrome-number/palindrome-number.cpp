class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0)
            return false;
        
        int check = x;
        int num = 0;

        while(x > 0)
        {
            int digit = x % 10;
            
            if(num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7))
                return 0;

            num = num * 10 + digit;
            x /= 10;
        }

        if(num == check)
            return true;
        else
            return false;
    }
};