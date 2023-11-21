class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
      Set<Integer> set= new HashSet();
      ArrayList<Integer> ans= new ArrayList();
      for(int i=0;i<nums1.length;i++){
        set.add(nums[i]);
      }
      for(int i=0;i<nums2.length;i++){
        if(set.contains(nums2[i]){
          ans.add(nums2[i]);
          set.remove(nums[i]);
        }
      }
      int[] res= new int[ans.size()];
      for(int i=0;i<ans.size();i++){
        res[i]=ans.get(i);
      }
      return res;
    }
}
