/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git

    TC = O(n^2)
    SC = O(1) as no extra space is consumed.
*/
class Solution {
public:
    
    void sort( vector<int> &nums ){
        
        int n = nums.size();
        
        for( int i=0 ; i<n-1 ; i++ ){
            for( int j=i+1 ; j<n ; j++ ){
                if( nums[i] > nums[j] ){
                    int temp = nums[i];
                    nums[i]  = nums[j];
                    nums[j]  = temp;
                }
            }
        }
        return;
    }
    
    void sortColors(vector<int>& nums) {
        sort( nums );
        return;
    }
};

/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid++],nums[low++]);
            }
           else if(nums[mid]==1){
                mid++;
             
            }
           else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
*/

/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git

    TC = O(n^2) But, O(n) for best case
    SC = O(1) as no extra space is consumed.
*/

class Solution {
public:
    void bubble_sort( vector<int> &nums ){
        
        int n = nums.size();
        for( int i=1 ; i<n ; i++ ){
            for( int j=0 ; j<n-i ; j++ ){
                if( nums[j] > nums[j+1] )
                {
                    int temp  = nums[j];
                    nums[j]   = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        return;
    }
    
    void sortColors(vector<int>& nums) {
        bubble_sort( nums );
        return;
    }
};