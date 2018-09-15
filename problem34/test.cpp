#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    vector<int> num;
    for(int i=0;i<2;i++) num.push_back(2);
    int begin = 0;
    int end = num.size()-1;
    int half;
    int target = 2;
    int flag = 0;
    printf("%d\n",num[4]);
    printf("end = %d\n",end);
    while(begin <=end)
    {
        half = (begin + end)/2;
        printf("half = %d\n",half);
        if(num[half] == target)
        {cout << half <<endl;flag = 1;break;}
        else if( num[half] > target ) end = half-1;
        else begin = half+1;
    }
    if(!flag) printf("not found\n");
    return 0;
}

