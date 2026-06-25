# Soc_midterm_25b0919

Competitive programming project exploring core concepts of CP like complexity analysis, Searching, sorting algorithms with time efficiency without TLE, Two pointer technique, Sliding window, greedy algorithms, Kadane's Algorithm, recursion and dynamic programming using top-down and bottom-up approaches.

## 📅 4-Week Progress Tracker

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
Optimising conditions for 1st and 2nd,splitting into two different arrays at odd places and even places for 3rd question, finding when the program terminates based on the condition like given in 4th question thorns and coins, for the ugu.cpp question-instead of tracing the whole string again we take one other variable and flip it and check the immediate character that doesnot match and repeat this process towards the end of the string, for mocha_and_red_and_blue.cpp the blanks can be filled from left to right and right to left both to fill all and again reverify in the end,Kadane's algorithm(finding maximum contagious subarray sum), for maximum_sum.cpp solution-first we find the maximum subarray sum using Kadane's algorithm and then add the sum in between this array elements...so the answer entirely depends on kadane's approach, the one which is about to be dead is is charged every minute and the one with low charge always, in L-opponents loss is as equal as the person's gain-so we sort andthen consider the largest element after popping everytime, M has solution that asks for each question in the contest if any one element in the sorted increassing array satisfies the condition..so we check if the right after element does(or else obviously fails)...so we check the maximum number comparing with the next number after it breaks. For the N solution we proceed by considering number of times each element appears,then we consider iterator of address of same type as frequeency(freq) map of numbers and if its freq (count) >2,we increase the frequency of it,s next number by 1\[if increased value is not in the array-then new number is created].if loop is never breaked in the process then the condition satisfied.
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
k-tree ->  here, It maintains a 2D array dp[i][j], where i represents the current path sum, and j tracks whether an edge of weight >=d is already there or not, prints the final answer modulo 10^9 + 7.For problem b, we decide on the flower eaten at last-either red or k whites-so that is recursive.
remaining questions description aare given below:
<details>
<summary><b>Click to expand Week 4 Problems (11 solved)</b></summary>

* [Problem A: k-Tree](Week4/k_tree.cpp)
* [Problem B: Flowers](Week4/flowers.cpp)
* [Problem C: Boredom](Week4/boredom.cpp)
  dp[i] shows the maximum points collected from 1 till i.So for every i, it is either included or not.In the first case the score doesn't change from dp[i-1].But in second case, i-1 should not be taken, so dp[i-2]+( i x frequency of i)
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
