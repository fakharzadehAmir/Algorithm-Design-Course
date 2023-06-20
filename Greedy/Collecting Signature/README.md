# Collecting Signature

You have a building with several apartments. Each apartment has a specific value assigned to it. You want to visit the apartments in such a way that you minimize the number of visits to the building. However, there is a constraint: after visiting an apartment, you can forget the apartment values for a certain number of consecutive apartments.

Write a program that takes the number of apartments, followed by the values of each apartment, as input. Find the minimum number of visits required to cover all the apartments, taking into account the forgetting constraint. Output the minimum number of visits.

### Input

The first line contains an integer `n`, the number of apartments.
The next `n` lines contain two integers `a` and `b`, representing the value of the `i`-th apartment and the number of consecutive apartments that can be forgotten after visiting apartment `i`, respectively.

Constraints:
- 1 ≤ `n` ≤ 100
- 0 ≤ `a`<sub>i</sub> ≤ `b`<sub>i</sub> ≤ 10<sup>9</sup>
- 0 ≤ `i` ≤ `n-1`

### Output

Output a single line containing the minimum number of visits required to cover all the apartments.


## **Example**  
**Input:**  
3  
1 3  
2 5  
3 6  

**Output:**  
1  



