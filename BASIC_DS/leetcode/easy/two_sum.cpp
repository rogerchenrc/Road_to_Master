#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



/*--Given an array of integers nums and an integer target, return indices
----if the two numbers such that they add up to target*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> myMap;
        for(int i = 0; i < nums.size(); i++){
            if(myMap.find(target-nums[i])!=myMap.end()){
                vector <int> res = {myMap[target-nums[i]],i};
                return res;
            }
            myMap[nums[i]] = i;
        }
        return {0};
    }
};

int main(){
    Solution s;
    vector <int> nums;
    nums = {2, 7, 11, 14};
    int target = 16;
    vector<int> result = s.twoSum(nums, target);
    for(int i:result){
        cout<< i << endl;
    }

}