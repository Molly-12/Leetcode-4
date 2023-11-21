#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
  map<int,int> mp;
  vector<int> ans;
  for(int i=0;i<arr1.size();i++){
    mp[arr1[i]]++;
  }
  for(int i=0;i<arr2.size();i++){
    auto it=mp.find(arr2[i]);
    if(it!=mp.end() && it->second>0){
      ans.push_back(arr2[i]);
      it->second--;
    }
  }
  return ans;
}

