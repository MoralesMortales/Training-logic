"""
Write a program that displays in the console (using a print) the
numbers from 1 to 100 (both inclusive, with a line break between each
output), replacing the following:
- Multiples of 3 with the word "fizz".
- Multiples of 5 with the word "buzz".
- Multiples of 3 and 5 simultaneously with the word "fizzbuzz".
"""

for num in range(1,100 + 1):
    if num % 3 == 0 and num % 5 == 0:
        print(f"Fizzbuzz -- {num}")
    elif num % 3 == 0:
        print(f"Fizz -- {num}")
    elif num % 5 == 0:
        print(f"Buzz -- {num}")
    else:
      print(num)