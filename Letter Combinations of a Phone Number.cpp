class Solution {
public:
  void helper(map<char,string> & map,vector<string> & res, int i, string digits,string curr){
    if(curr.size()==digits.size()){
      res.push_back(curr);
      return;
    }
    for(auto &c:map[digits[i]]){
      helper(map,res,i+1,digits,curr+c);
    }
  }

  vector<string> letterCombinations(string digits) {
    vector<string> res;
    map<char,string> map={
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
  };
    if(digits.size()){
      helper(map,res,0,digits,"");
    }
    return res;
    
  }
};
