Battery Usage Simulation

Imagine that your mobile phone is currently out of battery, but you need to use it for t more minutes. Luckily, you have a number of spare batteries that are fully charged, where the i-th battery lets you use the phone for capacity[i] more minutes.

After capacity[i] minutes, this battery becomes depleted and has to be fully recharged for recharge[i] minutes before you can use it again.

You use the extra batteries in the given order until each one is fully depleted, and then switch to the next one. If the next battery is still recharging, skip it and try the next one.

This process continues cyclically until you are done using your phone after t minutes.

Return the number of full batteries used during the t minutes you need to use your phone.

If it is impossible to have the phone working during the entire duration of t minutes (i.e., if at some point all batteries are recharging and unavailable), return -1.

Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than
O(t * capacity.length) will fit within the execution time limit.

Example 1
t = 16
capacity = [2, 5, 6]
recharge = [12, 1, 4]


Output:

3


Explanation:

t = 0:
Start with battery₀ (capacity = 2) → lasts 2 minutes.

t = 2:
Battery₀ is depleted (will recharge by t = 14).
Switch to battery₁ (capacity = 5).

t = 7:
Battery₁ is depleted (will recharge by t = 8).
Switch to battery₂ (capacity = 6).

t = 13:
Battery₂ is depleted (will recharge by t = 17).
Try switching back to battery₀ → still recharging until t = 14.
So, switch to battery₁, which is now recharged (capacity = 5).

t = 16:
You finish using your phone after 16 minutes, having used 3 batteries in total.

Example 2
t = 16
capacity = [2, 5, 6]
recharge = [12, 8, 4]


Output:

-1


Explanation:
At t = 13, battery₂ depletes and all batteries are recharging — none are available.
Therefore, the phone shuts off before reaching 16 minutes.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] integer t

The total time (in minutes) you need to use your mobile phone.

1 ≤ t ≤ 5000

[input] array.integer capacity

An array where capacity[i] is the number of minutes battery i lasts before depleting.

1 ≤ capacity.length ≤ 100
1 ≤ capacity[i] ≤ 100

[input] array.integer recharge

An array where recharge[i] is the number of minutes battery i needs to recharge fully.

1 ≤ recharge.length ≤ 100
recharge.length = capacity.length
1 ≤ recharge[i] ≤ 100

[output] integer

The number of full batteries used during the t minutes of phone usage, or -1 if it’s impossible to keep the phone running.