<h2><a href="https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1?page=2&category[]=Stack&sortBy=submissions">Delete middle element of a stack</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a stack with<strong> push(), pop(), empty() </strong>operations, delete the&nbsp;<strong>middle </strong>of the stack&nbsp;without using any additional data structure.<br>
<strong>Middle: </strong>ceil((size_of_stack+1)/2) (1-based index)</span><br>
&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
Stack = {1, 2, 3, 4, 5}
<strong>Output</strong>:
ModifiedStack = {1, 2, 4, 5}
<strong>Explanation</strong>:
As the number of elements is&nbsp;5 , 
hence the middle element will be the 3rd
element which is deleted</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
Stack = {1 2 3 4}
<strong>Output</strong>:
ModifiedStack = {1 3 4}
<strong>Explanation</strong>:
As the number of elements is&nbsp;4 , 
hence the middle element will be the 2nd
element which is deleted</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything.&nbsp;Complete the function <strong>deleteMid() </strong>which takes the stack and its size as&nbsp;input parameters&nbsp;and&nbsp;modifies the&nbsp;stack in-place.</span><br>
<span style="font-size:18px"><strong>Note</strong>: The output shows the stack from top to bottom. </span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ size of stack&nbsp;≤ 100</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Stack</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;