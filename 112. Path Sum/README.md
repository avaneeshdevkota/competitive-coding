
## 112. Path Sum     

`Easy`

Given the <code>root</code> of a binary tree and an integer <code>targetSum</code>, return <code>true</code> if the tree has a <strong>root-to-leaf</strong> path such that adding up all the values along the path equals <code>targetSum</code>.A <strong>leaf</strong> is a node with no children.

---

### Examples


![](pathsum1.jpg)

![](pathsum2.jpg)
<pre><strong>Input:</strong> root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
<strong>Output:</strong> true
<strong>Explanation:</strong> The root-to-leaf path with the target sum is shown.
</pre><pre><strong>Input:</strong> root = [1,2,3], targetSum = 5
<strong>Output:</strong> false
<strong>Explanation:</strong> There two root-to-leaf paths in the tree:
(1 --&gt; 2): The sum is 3.
(1 --&gt; 3): The sum is 4.
There is no root-to-leaf path with sum = 5.
</pre><pre><strong>Input:</strong> root = [], targetSum = 0
<strong>Output:</strong> false
<strong>Explanation:</strong> Since the tree is empty, there are no root-to-leaf paths.
</pre>

**Constraints**

<ul>
<li>The number of nodes in the tree is in the range <code>[0, 5000]</code>.</li>
<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
<li><code>-1000 &lt;= targetSum &lt;= 1000</code></li>
</ul>
