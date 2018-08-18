#include <iostream>
#include <cstring>
#include <algorithm>
#include <list>
#include <string>
#include <deque>
#include <bitset>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#include <map>
#include <vector>
using namespace std;

#define ULL unsigned long long int
#define LL long long int
#define FOR(i,n) for(int i=0;i<n;i++)
#define FOR1(i,n) for(int i=1;i<=n;i++)
#define sspend ios_base::sync_with_stdio(0);cin.tie(0)
const double pi = 3.141592654;
const double esp = 1e-16;
const LL mod = 1e9 + 7;

/*
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (38.72%)
 * Total Accepted:    1M
 * Total Submissions: 2.7M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 *
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 *
 * Example:
 *
 *
 * Given nums = [2, 7, 11, 15], target = 9,
 *
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 *
 *
 *
 *
 */
class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		map<int, int> need_num_map;
		FOR(i, nums.size())
		{
			int need_num = target - nums[i];
			need_num_map[need_num] = i;
		}

		FOR(i, nums.size())
		{
			if (need_num_map.find(nums[i]) != need_num_map.end())
			{
				if(need_num_map[nums[i]] != i)
					return {i, need_num_map[nums[i]]};
			}
		}
	
	};
};
