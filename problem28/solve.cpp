/*
 * 这是一个有关字符串处理的题
 */
#include <iostream>
#include<cstring>
#include <cstdio>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        int res;
        res = haystack.find(needle);
        return res;
    }
};
int main()
{
    return 0;
}

