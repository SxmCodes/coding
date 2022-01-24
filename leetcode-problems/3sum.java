// class Solution {
//     public List<List<Integers>> threesum(int[] nums) {
//         set<List<Integers>> res = new HashSet<>();
//         if(nums.length==0) return newArray<>(res);
//         Arrays.sort(nums);
//         for(int i=0;i<nums.length-2;i++){
//             int j = i+1;
//             int k = nums.length-1;
//         }
//         while(j<k){
//             int sum = nums[j]+nums[k];
//             if(sum==nums[i]){
//                 res.add(Arrays.asList(nums[i],nums[j++],nums[k--]));
            
//             else if(sum>- nums[i]) k--;
//             else if(sum<-nums[i])j++;
//             }
//         }
//         return new ArrayList<>(res);
//     }
// }