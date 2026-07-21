# Soc_midterm_25b0919

Competitive programming project exploring core concepts of CP like complexity analysis, Searching, sorting algorithms with time efficiency without TLE, Two pointer technique, Sliding window, greedy algorithms, Kadane's Algorithm, recursion, graph algorithms (DFS/BFS, trees), and dynamic programming using top-down and bottom-up approaches.


## 📅 Project Progress 

###  Week 1: Complexity Analysis, Searching & Sorting
Time complexity (resource-cph),estimating op counts,Errichto's binary search tutorial, learnt techniques for lower_bound and upperbound.Basics of stl (containers-mainly vectors and maps, iterators, algorithms) from TUF stl playlist,Two pointer techniques for efficiency without tracing multiple times and polynomial time complexities, sliding windows of fixed or variable size example questions, Algorithms for sorting- from polynomial to logarithmic complexities efficiently, Merge sort main logic-divide and conquer techniques.
<details>
<summary><b>Click to expand Week 1 Problems (10 solved)</b></summary>
  
* [Problem A: Petya and Strings](Week1/petya_and_strings.cpp)
* [Problem B: Lucky Sum of Digits](Week1/lucky_sum_of_digits.cpp)
* [Problem C: Beautiful Year](Week1/beautiful_year.cpp)
* [Problem D: George and Accommodation](Week1/george_and_accommodation.cpp)
* [Problem E: Translation](Week1/translation.cpp)
* [Problem F: Stones on the Table](Week1/stones_on_the_table.cpp)
* [Problem G: Queue at the School](Week1/queue_at_the_school.cpp)
* [Problem H: Books](Week1/books.cpp)
* [Problem I: Flipping Game](Week1/flipping_game.cpp)
* [Problem J: Regular Bracket Sequence](Week1/regular_bracket_sequence.cpp)

</details>

### Week 2: Two Pointer & Sliding Window Techniques
Greedy sliding window technique, Finding optimal solutions after sorting(sum of distances become min btw points), finding optimal solutions after sorting, using prefix sum for optimisation in greedy, observing pattern and logiv, correctness proofs, using merge sort algo concepts in greetings.cpp(for counting the no of pairs are inverted ).
<details>
<summary><b>Click to expand Week 2 Problems (14 solved)</b></summary>

* [Problem A: Points and Minimum Distance](Week2/points_and_minimum_distance.cpp)
* [Problem B: Basketball Together](Week2/basketball_together.cpp)
* [Problem C: Ian and Array Sorting](Week2/ian_and_array_sorting.cpp)
* [Problem D: Train and Queries](Week2/train_and_queries.cpp)
* [Problem E: Collecting Game](Week2/collecting_game.cpp)
* [Problem F: Yarik and Musical Notes](Week2/yarik_and_musical_notes.cpp)
* [Problem G: Nearly Shortest Repeating Substring](Week2/nearly_shortest_repeating_substring.cpp)
* [Problem H: Arrow Path](Week2/arrow_path.cpp)
* [Problem I: Equalize](Week2/equalize.cpp)
* [Problem K: Magnitude (Easy Version)](Week2/magnitude_easy.cpp)
* [Problem L: Subsequence Addition (Easy Version)](Week2/subsequence_addition_easy.cpp)
* [Problem M: Greetings](Week2/greetings.cpp)
* [Problem N: Monsters Attack!](Week2/monsters_attack.cpp)
* [Problem O: Binary Path](Week2/binary_path.cpp)

</details>

### Week 3: Greedy Algorithms & Kadane's Algorithm
Good applications of greedy and optimization and constructive questions.
## Here is a brief discussion for solved solutions:
Optimising conditions for 1st and 2nd,splitting into two different arrays at odd places 
Even places for 3rd question, finding when the program terminates based on the condition like given in 4th question thorns and coins, for 5th- the ugu.cpp question,instead of tracing the whole string again we take one other variable and flip it and check the immediate character that doesnot match and repeat this process towards the end of the string
For mocha_and_red_and_blue.cpp the blanks can be filled from left to right and right to left both to fill all and again reverify in the end,Kadane's algorithm(finding maximum contagious subarray sum), for maximum_sum.cpp solution-first we find the maximum subarray sum using Kadane's algorithm and then add the sum in between this array elements...so the answer entirely depends on kadane's approach, the one which is about to be dead is is charged every minute and the one with low charge always, in L-opponents loss is as equal as the person's gain-so we sort andthen consider the largest element after popping everytime, M has solution that asks for each question in the contest if any one element in the sorted increassing array satisfies the condition..so we check if the right after element does(or else obviously fails)...so we check the maximum number comparing with the next number after it breaks. For the N solution we proceed by considering number of times each element appears,then we consider iterator of address of same type as frequeency(freq) map of numbers and if its freq (count) >2,we increase the frequency of it,s next number by 1\[if increased value is not in the array-then new number is created].if loop is never breaked in the process then the condition satisfied.
<details>
<summary><b>Click to expand Week 3 Problems(13 solved)</b></summary>

* [Problem A: Stone Game](Week3/stone_game.cpp)
* [Problem B: Odd Subarrays](Week3/odd_subarrays.cpp)
* [Problem C: Max Plus Size](Week3/max_plus_size.cpp)
* [Problem D: Thorns and Coins](Week3/thorns_and_coins.cpp)
* [Problem E: Ugu](Week3/ugu.cpp)
* [Problem F: Mocha and Red and Blue](Week3/mocha_and_red_and_blue.cpp)
* [Problem H: Santa Claus and Candies](Week3/santa_claus_and_candies.cpp)
* [Problem I: Maximum Sum](Week3/maximum_sum.cpp)
* [Problem J: Joysticks](Week3/joysticks.cpp)
* [Problem K: Boring Day](Week3/boring_day.cpp)
* [Problem L: Even-Odd Game](Week3/even_odd_game.cpp)
* [Problem M: Creating the Contest](Week3/creating_the_contest.cpp)
* [Problem N: Two Large Bags](Week3/two_large_bags.cpp)
</details>

### Week 4: Recursion & Dynamic Programming
Week4 covered main recursion techniques. Dynamic programming is recursion and memory combination.Storing every value that comes next for the iteration.

Short description for solutions are given below each link:
<details>
<summary><b>Click to expand Week 4 Problems (11 solved)</b></summary>

* [Problem A: k-Tree](Week4/k_tree.cpp)
  k-tree ->  here, It maintains a 2D array dp[i][j], where i represents the current path sum, and j tracks whether an edge of weight >=d is already there or not, prints the final answer modulo 10^9 + 7.For problem b, we decide on the flower eaten at last-either red or k whites-so that is recursive.
* [Problem B: Flowers](Week4/flowers.cpp)
  dp[i] is the no:of valid ways to eat a total sequence of length i.Now we decide whether the group ends with red or white and then recursively followed in the solution.
* [Problem C: Boredom](Week4/boredom.cpp)
  In this solution, dp[i] shows the maximum points collected from 1 till i.So for every i, it is either included or not.In the first case the score doesn't change from dp[i-1].But in second case, i-1 should not be taken, so dp[i-2]+( i x frequency of i)
* [Problem D: Basketball Exercise](Week4/basketball_exercise.cpp)
  When you move from left to right to index i, you trace the maximum height possible if the last student you picked is from either row 1 or row 2.It depends on if your last pick is from row 1 or row 2 at index i
* [Problem H: Sleeping Schedule](Week4/sleeping_schedule.cpp)
  The representation dp[j] stores the maximum number of good sleeps achieved by Vova when waking up at jth hour.It is like the circular array...so we take modulo h for changing update. 
* [Problem J: Buns](Week4/buns.cpp)
  Optimisation - Instead of tracking the history of every single day, the code uses a temporary array(next_dp) to calculate tomorrow's hours based on today's current state. Once the choices for the day are processed, the old array is completely overwritten, keeping the memory short how many days pass.
* [Problem K: Sasha and the Beautiful Array](Week4/sasha_and_the_beautiful_array.cpp)
  By sorting the array in increasing order, the consecutive differences add to the total distance between the absolute smallest and absolute largest numbers.
* [Problem L: Even Odds](Week4/even_odds.cpp)
  It's not specifically a dp problem. i solved by calculating no : of odd numbers exist upto n
* [Problem M: Flipping Game](Week4/flipping_game.cpp)
  this problem is optimized using Kadane's Algorithm(DP) to find the subarray that gives the maximum net gain of 1s in O(n) time
* [Problem N: Fence](Week4/fence.cpp)
  Using prefix sums instead of adding again and again.The main idea lies around this
* [Problem O: Kefa and First Step](Week4/kefa_and_first_step.cpp)
  It traces the array from left to right comparing with previous days earnings to increase the streak if it is non decreasing.

</details>

### Week 5: Trees & Graph Algorithms

<details>
<summary><b>Click to expand Week 5 Problems (7 solved)</b></summary>

* [Problem A: Begginer's Zelda](Week5/begginers_zelda.cpp)
  In a one operation, you can compress any simple path. To minimize operations to reduce the tree to 1 node, you need to compress paths between leaves. The minimum operations required is always ceiling of leaves/ 2 .
* [Problem B: Omkar and Heavenly Tree](Week5/omkar_and_heavenly_tree.cpp)
  Since < n restrictions exist, at least one vertex(node) is never restricted for not being as a middle node, so you can connect all other nodes directly to it.
* [Problem C: Yet Another Card Deck](Week5/yet_another_card_deck.cpp)
  Track only the first occurrence of each of the 50 colors, and whenever a color is picked, move its position to the front and update the relative positions of the remaining.
* [Problem D: Christmas Spruce](Week5/christmas_spruce.cpp)
  To check if a tree is a spruce, identify all nodes that have children and count how many of their children are actual leaves; if every non-leaf node have at least 3 leaf children, the tree is a spruce.
* [Problem K: Kefa and Park](Week5/kefa_and_park.cpp)
  Starting from the root, traverse down to the leaves using DFS while keeping a present count of consecutive nodes containing cats; if this consecutive count exceed m, stop exploring that branch and only count leaf nodes that can be reached without breaking this rule.
* [Problem L: Fox And Snake](Week5/fox_and_snake.cpp)
  To draw the snake pattern of size n x m, fill every odd row with # and for even-numbered rows- alternate between placing a single # at the far-right end and placing a single # at the far left end.
* [Problem P: Socks](Week5/socks.cpp)
  Group connected socks into sets where each set must later share the same color; for each connected component, find the most frequent existing color and recolor all other socks in that group to match it, making the required changes equal to the group size minus the maximum color frequency.
</details>

### Contest 1

<details>
<summary><b>Click to expand Contest 1 Problems (3 solved)</b></summary>

* [Problem A: All Lengths Subtraction](Contest1/all_lengths_subtraction.cpp)
  Where as there can be any other way solving this question, I solved with pattern checking- middle term (if total is odd) must be the highest or middle terms(if total number is even) are the two maximum numbers of permutation...later, in decreasing order we must keep one on one side followed by next on other side taking as pairs...any possible configuration of this type will validate yes and this is the only way...so finally we check whether input satisfies the condition. 
* [Problem B: Vasilije in Cacak](Contest1/vasilije_in_cacak.cpp)
  Any sum between minimum and maximum possible values is a possibility. So that is the checkpoint.
* [Problem C: Huge Pile](Contest1/huge_pile.cpp)
  Subtracting powers of k from n in minimum steps is equivalent to converting n into base k and calculating the sum of its digits.
</details>

### Week 6: Dynamic Programming & Advanced Graph Techniques

<details>
<summary><b>Click to expand Week 6 Problems (3 solved)</b></summary>

* [Problem A: New Year Transportation](Week6/new_year_transportation.cpp)
  Directed Graph Traversal
  Start at position 1 and repeatedly jump forward using current_cell += a[current_cell]. Keep traversing through the portal path until you either hit the target cell t (outputting YES) or pass it (outputting NO).

* [Problem C: White-Black Balanced Subtrees](Week6/white_black_balanced_subtrees.cpp)
 Dynamic Programming on Trees (Bottom-Up Traversal)
  Assign +1 to white nodes ('W') and -1 to black nodes ('B'), then iterate from leaves up to the root (n down to 2) accumulating subtree sums into parent nodes. Any node whose final DP sum equals 0 represents a perfectly balanced subtree.

* [Problem N: Training Session](Week6/training_session.cpp)
  Combinatorics & Complementary Counting
  Calculate total possible groups of 3 problems using the formula n * (n - 1) * (n - 2) / 6 and subtract invalid triplets that share both topic and difficulty. An invalid triplet is found by checking each problem as the intersection point and multiplying (topic_count - 1) * (difficulty_count - 1).

</details>

### Contest 2

<details>
<summary><b>Click to expand Contest 2 Problems (6 solved)</b></summary>

* [Problem A: Books1](Contest2/books1.cpp)
  This problem is based on sliding window technique.The main idea is to find the maximum length contiguous subarray whose sum is <= t. Maintain a sliding window expanding right when sum <= t and shrinking from left when sum > t.
* [Problem B: Interesting drink](Contest2/interesting_drink.cpp)
  The key is solving the problem within time limit.Optimizing using binary search after the sorting shop prizes. Use binary search(upper_bound) to find the number of shops with price <= m_i in bigO(logn) time.
* [Problem C: Dragons1](Contest2/dragons1.cpp)
  Sort dragons in ascending order of their strength $x_i$. Fight the weakest available dragon first to gain strength $y_i$ and build up capacity for stronger ones.This will lead to optimal required solution.
* [Problem D: K-th Not Divisible by n](Contest2/k_th_not_divisible_by_n.cpp)
  This can be solved by simple pattern observation by finding the numbers that are not divisible by n have count as multiples of n-1...So taking a remainder with n-1 helps us solve.
* [Problem E: Kefa and Park](Contest2/kefa_and_park.cpp)
  Same as Week 5 Problem K - DFS path checking with consecutive node state.
* [Problem G: k-Tree](Contest2/k_tree.cpp)
  Same as Week 4 Problem A using 2d dp array.
</details>
