DataFilter — Filter Numbers Below Threshold
Task

Implement a class DataFilter that:

Accepts a vector of integers as a data stream.

Provides a method filterBelowThreshold(int threshold) to return a new vector with only numbers ≥ threshold.

Demonstrates usage by creating a DataFilter object with a sample data stream, filtering values below 20, and printing the filtered result.

Constraints

Data vector length: 1 ≤ n ≤ 500

Each integer: fits within 32-bit signed integer

Threshold: any integer within 32-bit signed integer

Example

Input:

data = {3, 12, 25, 33, 45, 8, 19};
threshold = 20;


Processing:

Keep numbers ≥ 20 → {25, 33 45}

Output:

Filtered data: 25 33 45 