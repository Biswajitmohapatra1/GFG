<h2><a href="https://www.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1?utm_source=youtube&utm_medium=courseteam_practice_desc&utm_campaign=problem_of_the_day">Kth Ancestor in a Tree</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree of size&nbsp; <strong>n</strong>,&nbsp;a <strong>node,</strong> and a positive integer <strong>k</strong>., Your task is to complete the function <strong>kthAncestor()</strong>, the function should return the <strong>kth</strong> ancestor of the given node in the binary tree. If there does not exist any such ancestor then return&nbsp;-1.<br><strong>Note</strong>: <br>1. It is guaranteed that the <strong>node</strong> exists in the tree.<br>2. All the nodes of the tree have distinct values.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;">
<img style="height: 230px; width: 287px;" src="https://contribute.geeksforgeeks.org/wp-content/uploads/reverse.jpg" alt="">
<strong>Input: </strong>k = 2, node = 4
<strong>Output:</strong> 1
<strong>Explanation:</strong>
Since, k is 2 and node is 4, so we first need to locate the node and look k times its ancestors. Here in this Case node 4 has 1 as his 2nd Ancestor aka the root of the tree.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>k=1, n</span><span style="font-size: 18px;">ode=3
      1
    /   \</span>
   <span style="font-size: 18px;">2     3</span>

<span style="font-size: 18px;"><strong>Output: </strong>1
<strong>Explanation: </strong>k=1 and node=3 ,kth ancestor of node 3 is 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=n&lt;=10<sup>5</sup><sup><br></sup></span><span style="font-size: 18px;">1&lt;= k &lt;= 100<br>1 &lt;= Node.data &lt;= n</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Google</code>&nbsp;<code>Facebook</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;