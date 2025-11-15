Your task is to develop a library book circulation tracker.

You are given a sequence of operations that represent activities in a library. Each operation is one of three types: acquisition, checkout, or reclassify. Operations are provided in the following format:

["acquisition", "<book category>", "<quantity>", "<price>"]


– the library acquires <quantity> books of <book category>, each valued at <price> for insurance purposes.

["checkout", "<book category>", "<quantity>"]


– patrons borrow <quantity> books of <book category>. If books of the specified category have different insurance values, the least valuable ones should be checked out first. It is guaranteed that the library will always have enough books to fulfill all checkout requests.

["reclassify", "<book category>", "<quantity>", "<original price>", "<new price>"]


– the library reclassifies <quantity> books of <book category> to a more valuable edition. It is guaranteed that there are <quantity> books of the specified category with the <original price> value.

Your function should calculate the total insurance value of all books checked out after processing the entire sequence of operations. Return an array representing the insurance value of books for each checkout operation.

Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than O(operations.length³) will fit within the execution time limit.

Example

operations = [
  ["acquisition", "fiction", "2", "100"],
  ["acquisition", "reference", "3", "60"],
  ["checkout", "fiction", "1"],
  ["checkout", "reference", "1"],
  ["reclassify", "reference", "1", "60", "100"],
  ["checkout", "reference", "1"],
  ["checkout", "reference", "1"]
]


the output should be
solution(operations) = [100, 60, 60, 100]

Explanation:
["acquisition", "fiction", "2", "100"] – the library acquires 2 fiction books, each valued at 100.
["acquisition", "reference", "3", "60"] – the library acquires 3 reference books, each valued at 60.
["checkout", "fiction", "1"] – a patron checks out 1 fiction book valued at 100, so the insurance value is 1 × 100 = 100.
["checkout", "reference", "1"] – a patron checks out 1 reference book valued at 60, so the insurance value is 1 × 60 = 60.
["reclassify", "reference", "1", "60", "100"] – one reference book is reclassified and its value becomes 100.
["checkout", "reference", "1"] – a patron checks out 1 reference book. There are 2 reference books in the library with values of 60 and 100, and the one with the value of 60 should be checked out first, so the insurance value is 1 × 60 = 60.
["checkout", "reference", "1"] – a patron checks out 1 reference book. There is 1 reference book in the library with the value of 100, so the insurance value is 1 × 100 = 100.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.array.string operations
An array of strings, where each element represents one of 3 types of operations described above – acquisition, checkout, or reclassify.

Each <book category> only consists of alphanumeric characters – English letters and digits.
Each <price> and <quantity> are string representations of integers which are between 0 and 2000.

Guaranteed constraints:
1 ≤ operations.length ≤ 100
3 ≤ operations[i].length ≤ 5

[output] array.integer
An array of integers representing insurance values from each checkout operation.

Here’s a step-by-step approach and C++-style pseudocode for this problem:

Step-by-Step Approach
1. Data Structure
For each book category, keep a multiset (or a sorted list) of book prices.
This allows you to always access and remove the least valuable books first.
2. Process Each Operation
acquisition:
Add the given quantity of books (with the given price) to the category’s multiset.
checkout:
Remove the given quantity of the least valuable books from the category’s multiset.
Add up their prices and store the sum in the result.
reclassify:
Remove the given quantity of books with the original price from the category’s multiset.
Add the same quantity of books with the new price.
3. Output
Return the list of insurance values for each checkout operation.