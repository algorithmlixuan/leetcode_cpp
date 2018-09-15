/*
 * 这个题我用到了二分查找的方法，要注意的是数组首尾溢出的问题
 */
#include <iostream>
#include<cstdio>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> res;
        int flag = 0;
        int begin = 0;
        int end = nums.size()-1;
        int half;
        if(end == -1)  {res.push_back(-1);res.push_back(-1);return res;}
        else if(end==0){if(nums[0]==target) {res.push_back(0);res.push_back(0);return res;}
                       else {res.push_back(-1);res.push_back(-1);return res;}}

        while(begin<=end)
        {
            half = (begin + end) / 2;
            if(nums[half] == target){flag = 1;break;}
            else if(nums[half] > target) end = half-1;
            else begin = half+1;
        }
        if(!flag) {res.push_back(-1);res.push_back(-1);return res;}
        int lo = half;
        int hi = half;
        while(1)
        {
            if(half==0) {res.push_back(0);break;}
            else if(nums[half]!=nums[half-1]) {res.push_back(half);break;}
            else half --;
        }
        while(1)
        {
            if(hi== nums.size()-1 ) {res.push_back(hi);break;}
            else if(nums[hi] != nums[hi+1]) {res.push_back(hi);break;}
            else hi++;
        }
        return res;
    }
};
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(3);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vector<int>::iterator it = find(vec.begin(), vec.end(),4);
    if (it != vec.end())
        cout<<*it<<endl;
    else
        cout<<"can not find"<<endl;

    Solution solve;
    return 0;
}

