
tc: o(n)    sc: o(1)
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int low = 0;
    int high = nums.size() - 1;

    while(low < high){
        if(nums[low] < 0) low++;
        else if(nums[high] > 0) high--;
        else{
            swap(nums[low], nums[high]);
        }
    }

    return nums;
}

WRONG IDK WHY

#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int low = 0;
    int high = nums.size() - 1;

    while(low <= high){
        if(nums[low] < 0) low++;
        else if(nums[high] > 0) high--;
        else{
            swap(nums[low++], nums[high--]);
        }
    }

    return nums;
}

WRONG ANSWER FOR TEST CASE: 
5
20
-16 9 -25 8 44 20 20 -12 11 -44 -32 7 41 13 7 27 -49 -19 -43 6 
16
-23 48 -13 31 -12 6 -42 23 14 33 -33 -21 0 25 -39 -31 
3
30 26 -15 
6
-40 43 25 28 -27 -18 
8
13 -33 -25 45 -16 -43 -17 37 
