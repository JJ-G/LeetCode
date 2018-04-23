/*
-Description:

	Given an array of integers, return indices of the two numbers 
	such that they add up to a specific target.
	You may assume that each input would have exactly one solution, 
	and you may not use the same element twice

-Example:
	Given nums = [2, 7, 11, 15], target = 9,
	Because nums[0] + nums[1] = 2 + 7 = 9,
	return [0, 1].


-My Solution:
	1、建立<value,index>映射表，value存放数组的值，index存放对应的下标
	2、依次遍历，将指定的target值减去当前值，得到num_tmp
	3、查询num_tmp，若在hash表中则返回num_tmp的下标以及当前值下标，退出

-Analysis:
	C++中常用的映射表有map, unordered_map, 两者的比较如下：
	map容器是根据它的key排好序的，而unordered_map是无序的。通过key值访问，
	unordered_map比map快，由于本题只需根据key访问单个元素，因此unorded_map
	更合适。

-@author:Jiajing_Guo
-Created on Mar. 1st .2017

*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    }
};