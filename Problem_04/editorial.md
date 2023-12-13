#  Problem B - Luffy is a Foodie

Attempting to solve the problem through brute force, by trying all possible empty positions and both directions fails to pass all tests.

To efficiently solve the problem, we employ a linear approach with a complexity of **O(n)**. The idea is to iterate through the string from the beginning to the end, keeping track of two values: `ans` and `curr`.

- Initialize both `ans` (keeps track of the maximum quantity of meat eaten) and `curr` (keeps track of the current number of meat pieces) to 0.

- While iterating:
    - If a piece of meat **"#"** is encountered, increment `curr` by 1.
    - If an empty spot **"."** is encountered, update `ans` to the maximum value between its current value and `curr`.
    - If a wall **"|"** is encountered, reset `curr` to 0.

This process gives us the answer if Luffy chooses the right direction as his starting point.

To cover both directions, we repeat the same process starting from the end of the string to the beginning using the `ans` value we got in the first process and intializing `curr` to 0 again. 

**Complexity=O(n)**