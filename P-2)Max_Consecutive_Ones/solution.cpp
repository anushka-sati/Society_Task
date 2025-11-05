
/*  
    LeetCode Problem 
    485. Max Consecutive Ones
    https://leetcode.com/problems/max-consecutive-ones/description/
*/
   
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=nums.size();
    int maxCount=0;
    int count=0;
    for (int i=0; i<size;i++){
            if (nums[i]==1){
                count++;
            }
            else if (nums[i]==0){
                count=0;
            }
            if (maxCount<count){
                maxCount=count;
            }
        }
        return maxCount;
    }
};