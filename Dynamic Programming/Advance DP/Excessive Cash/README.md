# Excessive Cash

John is very wealthy but quite stingy. He has a square tile floor with each side of the tiles having an integer length, starting from 1 and increasing by 1 for each successive tile. John wants the sum of the areas of these tiles to be exactly equal.

To achieve this goal, John can transform a tile with side length `a` into a tile with side length `b`, where `b` is a non-negative integer that can be less than or greater than `a`, but since he is wealthy, he delegates this task to a worker and pays the cost (b - a)<sup>2</sup> dollars as a fee for each transformation.

Due to the multiple changes in the side length of a tile, it weakens the tile's resistance, and the side length of each tile can only be changed once.

As John is very stingy, he wants to determine the minimum amount of money he needs to pay to the worker in order to make the sum of the areas of the tiles exactly equal to `m`. If it is impossible to reach the desired sum of areas `m`, he should output the number -1.

### Input

The first line of input contains two integers `n` and `m`, where `n` represents the number of tiles and `m` represents the desired sum of areas.

The next `n` lines each contain the length of one of the tiles.

### Output

In a single line, output the minimum amount of money John needs to pay to the worker in order to make the sum of the areas of the tiles exactly equal to `m`. If it is impossible to reach the desired sum of areas `m`, output the number -1.

### Constraints

- 1 ≤ n ≤ 10
- 1 ≤ m ≤ 10 000
- 1 ≤ a<sub>i</sub> ≤ 100
- All input integers are positive integers.

#### **Example**  
**Input:**  
3 6  
3  
3  
1  

**Output:**  
5  


***Explanation:***
John transforms one of the tiles with a length of 3 to a tile with a length of 1 by paying 4 dollars. Then, he transforms another tile with a length of 3 to a tile with a length of 2 by paying 1 dollar.

