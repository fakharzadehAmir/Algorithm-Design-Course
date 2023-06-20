# Scheduling

Max, along with some of his friends, is waiting in a queue to offer a vow. Since Max and his friends always care about their families, they want to offer a vow to each member of their families. However, the problem is that the vow-giver can only give food to one person at a time. Max and his friends know that the vow-giver takes exactly 1 minute to give food to one person. Unfortunately, the vow-giver forgets the vow receiver after m minutes. So, Max and his friends decide to take a vow again for each person after at least m minutes.

Your task is to find the minimum duration that the queue will continue until Max and his friends can offer a vow to each person as needed.

### Input

The input consists of three lines:

- The first line contains an integer m (1 ≤ m ≤ 100), representing the duration after which the vow-giver forgets the vow receiver.
- The second line contains an integer n (1 ≤ n ≤ 10000), representing the number of Max and his friends.
- The third line contains n space-separated integers a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ sum(a<sub>i</sub>) ≤ 10000), representing the food requirement for each person i (1 ≤ i ≤ n). The sum of all a<sub>i</sub>'s will not exceed 10000.

### Output

Print a single line containing the minimum duration that the queue will continue until Max and his friends can offer a vow to each person as needed.

#### **Example:**

**Input:**  
2  
2  
3 3  

**Output:**  
8
