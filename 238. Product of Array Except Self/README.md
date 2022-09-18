# 238. Product of Array Except Self
<hr>
Given an integer array <code>nums</code>, return an array <code>answer</code> such that <code>answer[i]</code> is equal to the product of all the elements of nums except <code>nums[i]</code>.
<br>
The product of any prefix or suffix of <code>nums</code> is guaranteed to fit in a 32-bit integer.
<br>
You must write an algorithm that runs in <code>O(n)</code> time and without using the division operation.
<br>
<br>
 

#### Example 1:
```
Input: nums = [1,2,3,4]
Output: [24,12,8,6]
```
#### Example 2:
```
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
``` 

#### Constraints:
<ul>
<li><code>2 <= nums.length <= 105</code></li>
<li><code>-30 <= nums[i] <= 30</code></li>
<li>The product of any prefix or suffix of <code>nums</code> is guaranteed to fit in a 32-bit integer.</li>
</ul>
 