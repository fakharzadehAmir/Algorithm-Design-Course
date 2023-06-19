# String Mixer

Three phrases named S<sub>1</sub>, S<sub>2</sub> and S<sub>3</sub> are given. We want to check whether by interleaving S<sub>1</sub> and S<sub>2</sub> together, we can form S<sub>3</sub>. The following should be considered:

1. The sum of the lengths of S<sub>1</sub> and S<sub>2</sub> should be equal to the length of S<sub>3</sub>.
2. The order of the characters in S<sub>1</sub> and S<sub>2</sub> should not change in S<sub>3</sub>, and they can only be combined together. For example, if S<sub>1</sub> is equal to "ab", the character "b" cannot appear before "a" in S<sub>3</sub>.

### Input

The input consists of three lines:
- The first line contains the string S<sub>1</sub>.
- The second line contains the string S<sub>2</sub>.
- The third line contains the string S<sub>3</sub>.

Constraints:
- 0 ≤ length of S<sub>1</sub>, length of S<sub>2</sub> ≤ 10<sup>4</sup>
- 0 ≤ length of S<sub>3</sub> ≤ 2*10<sup>4</sup>

### Output

Print "True" if S<sub>3</sub> can be formed by interleaving S<sub>1</sub> and S<sub>2</sub>, and "False" otherwise.

### Example

**Input:**  
aabcc  
dbbca  
aadbbcbcac  


**Output:**  
True


