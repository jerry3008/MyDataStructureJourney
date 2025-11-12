Lamp Illumination on a Coordinate Line

There are some lamps placed on a coordinate line.
Each of these lamps illuminates some space around it within a given radius.

You are given the coordinates of the lamps on the line and the effective radius of each lamp's light.

In other words, you are given a two-dimensional array lamps, where:

lamps[i][0] is an integer representing the lamp's coordinate.

lamps[i][1] is a positive integer representing the effective radius of the i-th lamp.

That means the i-th lamp illuminates every point in the range:

[lamps[i][0] - lamps[i][1], lamps[i][0] + lamps[i][1]]


(inclusive).

Your task is to find the coordinate of the point that is illuminated by the highest number of lamps.
In case of a tie, return the smallest coordinate among them.

Example 1
lamps = [[-2, 3], [2, 3], [2, 1]]


Output:

1


Explanation:

Lamp₀ at −2 with radius 3 illuminates [-5, 1].

Lamp₁ at 2 with radius 3 illuminates [-1, 5].

Lamp₂ at 2 with radius 1 illuminates [1, 3].

The only point illuminated by all lamps is 1, so the answer is 1.

Example 2
lamps = [[-2, 1], [2, 1]]


Output:

-3


Explanation:

The lamps illuminate ranges [-3, -1] and [1, 3].
Each point in these ranges is illuminated by exactly 1 lamp.
The smallest coordinate among these is -3, so that is the answer.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.array.integer lamps

A two-dimensional array containing information about each lamp.
Each lamp is described by a two-element array containing:

The coordinate of the lamp

The effective radius of the lamp

Guaranteed constraints:

1 ≤ lamps.length ≤ 10⁵
lamps[i].length = 2
−10⁹ ≤ lamps[i][0] ≤ 10⁹
1 ≤ lamps[i][1] ≤ 10⁵

[output] integer

The coordinate of the point with the smallest coordinate that is illuminated by the most number of lamps.