#include<unordered_map>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		unordered_map<int, int> mymap;
		vector<int> ans;

		for (int i = 0; i<nums.size(); i++) {
			int y = target - nums[i];

			if (mymap.find(y) != mymap.end()) {
				ans.push_back(mymap[y]);
				ans.push_back(i);
				return ans;

			}
			else {
				mymap[nums[i]] = i;
			}

		}
		return ans;
	}
};

/*
ele1 + ele2 = target
map[key,value]
step1: key to be the index of the 1st element, value to the target - ele1
when i go to the next element in the array
check if found in the hashtable
if yes
print the key and the index of that element aka ele2
if no
goto step1

O(N) + O(1) = O(N) //going through all the numbers in the array

*/
//vector<int> twoSumTarget(vector<int>& nums, int target) {
//	unordered_map<int, int> myHashT; 
//	vector<int> ans; 
//
//	for (int i = 0; i < nums.size(); i++) {
//		int y = target - nums[i]; 
//
//		if (myHashT.find(y) != myHashT.end()) {
//			ans.push_back(myHashT[y]); 
//			ans.push_back(i); 
//			return ans;
//		}
//
//		myHashT[nums[i]] = i; 
//	}
//	return ans;
//}
























