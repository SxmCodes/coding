// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//      double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
//          int m = nums1.size(), n = nums2.size();
//          if(m>n)
//              return findMedianSortedArrays(nums2, nums1);
//          int low = 0, high = m, mid = (m + n + 1) / 2;
//          while(low <= high){
//              int i = (low + high) / 2; // 2
//              int j = mid - i; // 3
//              /*  i = low + high / 2 - nums1 = mid value. 0 + 4 / 2 = 2;
//                 i = 2 mid -i ; 4 + 5 + 1 / 2 = 5; int j = 3; 
//             */
//            if(i<m && nums2[j-1]>nums1[i]){
//                low = i + 1;
//                /*
                
//                */
//            }
//          }
//      }
// }

// int main(){

//     return 0;
// }