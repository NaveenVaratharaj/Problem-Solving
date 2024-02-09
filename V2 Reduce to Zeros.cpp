// Given an integer num, return the number of steps to reduce it to zero.
// In one step, if the current number is even, you have to divide it by 2, 
// otherwise, you have to subtract 1 from it.

class Solution {
public:
    int sum = 0;

    void helper(int num)
    {
        if(num == 0) return;

        if(num % 2 == 0) 
        {
            sum++;
            helper(num/2);
        }

        else {
            sum++;
            helper(num - 1);
        }
    }

    int numberOfSteps(int num) {
        helper(num);
        return sum;
    }
};