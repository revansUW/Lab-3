# Lab-3
1. n = 4, sum = 10
  n = 0, sum = 0
2. overflow at n = 256, sum = -32640
3. overflow at n = 7909248, sum = -2140899392
4. n = 3, product = 6
  n = 60, product = inf
  n = 20, product = 2.4329e+18
  can detect overflow by finding the first integer that causes product to = inf, which is 34
5. n = 171 causes overflow to inf
6. The expected value would always be 1, since adding 1/n to itself n times is the same as 1/n * n, which will always be 1. However with    float variables the sum value adds up to be 1.00015 when n = 10000, and 1.0001 when using double type variables. This is because of rounding errors made by the data types when dealing with division.
7. The error is that "i = 4.4" is output even though the for loop specifies "i < 4.4" . This is because float is less precise than double, and rounding errors cause the number to appear smaller than 4.4 during the comparison.
8. Switching to double type variables fixes this and "i = 4.4" is no longer in the output, since double is twice as precise as float the comparison "i < 4.4" is done correctly.
