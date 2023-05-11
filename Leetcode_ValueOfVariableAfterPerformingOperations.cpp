//Final Value of Variable After Performing Operations
//https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="++X" || operations[i]=="X++")
                x++;

            if(operations[i]=="--X" || operations[i]=="X--")
                x--;
        }
        return x;
    }
};