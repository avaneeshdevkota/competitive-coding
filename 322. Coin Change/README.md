
## 322. Coin Change     

`Medium`

You are given an integer array <code>coins</code> representing coins of different denominations and an integer <code>amount</code> representing a total amount of money.Return <em>the fewest number of coins that you need to make up that amount</em>. If that amount of money cannot be made up by any combination of the coins, return <code>-1</code>.You may assume that you have an infinite number of each kind of coin.

---

### Examples

<pre><strong>Input:</strong> coins = [1,2,5], amount = 11
<strong>Output:</strong> 3
<strong>Explanation:</strong> 11 = 5 + 5 + 1
</pre><pre><strong>Input:</strong> coins = [2], amount = 3
<strong>Output:</strong> -1
</pre><pre><strong>Input:</strong> coins = [1], amount = 0
<strong>Output:</strong> 0
</pre>

**Constraints**

<ul>
<li><code>1 &lt;= coins.length &lt;= 12</code></li>
<li><code>1 &lt;= coins[i] &lt;= 2<sup>31</sup> - 1</code></li>
<li><code>0 &lt;= amount &lt;= 10<sup>4</sup></code></li>
</ul>
