
/*  
    LeetCode Problem 
    1672. Richest Customer Wealth
    https://leetcode.com/problems/richest-customer-wealth/description/
*/
   
#include <iostream>
#include <vector>
using namespace std;
class Solution 
{
   
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        
        for ( int i =0 ; i < accounts.size() ; i++ ){
            int wealth=0;
            for ( int j =0 ; j < accounts[i].size() ; j++){
                wealth+=accounts[i][j];
            }
            if (richest<wealth){
                richest=wealth;
            }
        }
        return richest;
    }
};