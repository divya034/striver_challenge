TC: O(NLOGN) SC: O(1)
SORT FUNCTION: MIX OF QUICK SORT, HEAP SORT AND INSERTION SORT
class Solution {
public:
    void sortColors(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        
    }
};


COUNTING SORT:
TC: O(2N)  SC: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
      int countOfZero = 0;
      int countOfOne = 0;
      int countOfTwo = 0;

      for(int i = 0; i<=nums.size() - 1; i++){
          if(nums[i] == 0) countOfZero++;
          if(nums[i] == 1) countOfOne++;
          if(nums[i] == 2) countOfTwo++;
      }

      // Spread the counts
      // But this is not in place
       int i = 0;
       while(countOfZero--){
           nums[i] = 0;
           i++;
       }

       while(countOfOne--){
           nums[i] = 1;
           i++;
       }

       while(countOfTwo--){
           nums[i] = 2;
           i++;
       }
             
    }
};


TC: O(N)  SC: O(1)
DUTCH NATIONAL FLAG
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l = 0;
       int h = nums.size() - 1;
       int m = 0;

       while(m <= h){
           switch(nums[m]){
               case 0: swap(nums[l++], nums[m++]);
               break;

               case 1: m++;
               break;

               case 2: swap(nums[m], nums[h--]);
               break;

           }
       }
        
    }
};
