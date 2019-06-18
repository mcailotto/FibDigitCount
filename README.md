Implemented solution to problem posted on projecteuler.net regarding finding the index of the first Fibonacci number with 1000 digits.
Link to problem: https://projecteuler.net/problem=25


To solve this problem I represented the numbers in the Fibonacci sequence as a string and created a function to add them together. Doing this allowed me to solve the problem without worrying about the constraints associated with the int datatype.

Additionally I used an iterative implementation to find the nth number in the Fibonnaci sequence by using two variables to hold on to the last two numbers in the sequence, allowing for a space efficient solution, especially with extremely large numbers.
