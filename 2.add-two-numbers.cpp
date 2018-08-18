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
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (29.02%)
 * Total Accepted:    558.2K
 * Total Submissions: 1.9M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 *
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 *
 * Example:
 *
 *
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 *
 *
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		ListNode* res = &ListNode(0);
		ListNode* cur = &ListNode(0);
		cur->next = res;
		int in = 0;
		while (l1 != NULL or l2 != NULL)
		{
			int l1_var = l1 == NULL? 0 : l1->val;
			int l2_var = l2 == NULL? 0 : l2->val;
			int sum = (l1_var + l2_var + in) % 10;
			in = (l1_var + l2_var + in) / 10;
			
			if(cur->next != NULL):
			{	
				cur = cur->next;
				cur->val = sum;
			}
			else
			{
				cur->next = &ListNode(sum);
				cur = cur->next;
			}
			
		}

	}


};
