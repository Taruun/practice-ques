// If anything requires % or divisible or n/2 then it's logn TC

if theres
X % M = H1
Y % M = H2

There's a probability P = 1/M that H1 and H2 are same. So, let's say we took 103, and then its probability is 1/ M = 10^-2 which is 0.001 (since 10^2)

So, to make the probability smaller,

1. We increase 𝑀.
   For example, in competitive programming, we usually use 𝑀 = 10^9 + 7 so the probability will be 1/𝑀 = 10^-9, which is very small, approximately 0.000000001

2. And make the M prime number
   A.Because large prime are sparse(deff between numbers) on larger numbers
   B. They don't actually follow patterns WOW!!

# Algorithm Time Complexity Table

| Constraints | Time Complexity                 |
| ----------- | ------------------------------- |
| 1e18        | O(logN) (Binary Search)         |
| 1e8         | O(N) (Linear Search) (Maps etc) |
| 1e4         | O(N^2) 10^4 \* 10^4 = 10^8      |
| 1e6         | O(NlogN)                        |
| 500         | O(N^3)                          |
| 85-90       | O(N^4)                          |
| 20          | O(2^N) Recursive solution       |
| 11          | N! Can be Factorial solution    |
