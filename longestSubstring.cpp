#include<iostream>
#include<algorithm>
#include<set>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        unordered_set<char> lookup;
        int maxStr = 0;
        int left = 0;
        for(int i = 0; i < s.size(); i++){
            while (lookup.find(s[i]) != lookup.end()){
                lookup.erase(s[left]);
                left ++;
            }
            maxStr = max(maxStr,i-left+1);
            lookup.insert(s[i]);
    }
        return maxStr;
        
    }
};	

//3. Longest Substring Without Repeating Characters

int main(){
	string s="abcdefganfsi";
	Solution sol;
	int len=sol.lengthOfLongestSubstring(s);
	cout<<len;
	return 0;
}
