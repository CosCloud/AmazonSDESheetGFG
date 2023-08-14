<h2><a href="https://practice.geeksforgeeks.org/batch/Amazon-Test-Series/track/amazon-sorting/problem/product-array-puzzle4634">K closest point to origin</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a list of points on the 2-D plane and an integer <strong>K</strong>. The task is to find <strong>K</strong> closest points to the origin and print them.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong></span><span style="font-size: 18px;"><strong>:</strong></span>The distance between two points on a plane is the Euclidean distance.You are require to prints the points in increasing order of their distance from the origin. If two points are at same distance from origin then print points in sorted order(First sort the coordinates according to the X-coordinate and in case X-coordinate is same, then sort  according to Y-coordinate).</p>
<p><span style="font-size: 18px;"><strong>Example 1</strong></span><span style="font-size: 18px;"><strong>:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 3, K = 2
Points[] = {(3,3),(5,-1),(-2,4)}
<strong>Output:
</strong>3 3 -2 4<strong>
Explanation:<br></strong>
Distance between (-2, 4) and origin is sqrt(20).&nbsp; 
Distance between (3, 3) and origin is sqrt(18).&nbsp;
Distance between (5, -1) and origin is sqrt(26).&nbsp;
Since two(<strong>K</strong>) shortest distance from origin are from points <strong>(-2, 4)</strong> and <strong>(3, 3)</strong>. </span></pre>
<p><span style="font-size: 18px;"><strong>Example 2</strong></span><span style="font-size: 18px;"><strong>:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 3, K = 2
Points[] = {(1,3),(-1,3),(5,8)}
<strong>Output:
</strong> -1 3 1 3<strong>
Explanation:</strong>
Distance between (-1, 3) and origin is sqrt(10).&nbsp;
Distance between (1, 3) and origin is sqrt(10).&nbsp;
Distance between (5, 8) and origin is sqrt(89).&nbsp;
Since two(<strong>K</strong>) shortest distance from origin are from points <strong>(-1, 3)</strong> and <strong>(1, 3)</strong> </span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete <strong>kClosest()</strong> function and return the 2D array points[][] of size N x 2 denoting the (X,Y) cooridinates of each point and an integer K. Your task is to return a 2D array(vector/arraylist depending upon the language you choose) of size K x 2 denoting the (X,Y) coordinates of the K-closest points to the origin. </span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n log n)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=N,m&lt;=10<sup>5</sup><br>1&lt;=K&lt;=N<br>-10<sup>3</sup> &lt;= (X,Y) &lt;= 10<sup>3</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithm</code>&nbsp;
