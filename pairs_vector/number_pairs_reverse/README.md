You are provided with a list of n unique integers (2 ≤ n ≤ 200) ranging from 10 to 9999.
The task is to return a list of pairs, each containing an integer and its reverse counterpart (if the reverse exists in the list).

The reverse counterpart of an integer is the same digits in reverse order.

If a reversed number exists in the list, include the pair {original, reverse}.

Skip numbers whose reverse does not exist in the list.

Include both {a, b} and {b, a} if both are in the list.
Input:
{12, 21, 34, 43, 56, 65}
Output:
{{12, 21}, {21, 12}, {34, 43}, {43, 34}, {56, 65}, {65, 56}}