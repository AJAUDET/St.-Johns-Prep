"""

calculator.py by AJ Audet

The purpose of this program is to create a calculator using python,

"""

import math, random, sys

# HELP AAAAAAAAA


# general variables
x = input("Enter first int: ")
y = input("Enter second int: ")

switch = input("1. Add, 2. Subtract, 3. Multiply, 4. Divide, 5. Exponential\n")

# switches in python dont exist RAH, its all elif
# free me from this language
if switch == 1:
    sum = x + y
    print("The sum of x and y is: ", + sum)
elif switch == 2:
    sum = x - y
    print("The sum of x and y is: ", + sum)
elif switch == 3:
    product = x * y
    print("The product of x and y is: " + product)
elif switch == 4:
    product = x / y
    print("The product of x and y is: " + product)
elif switch == 5:
    num = math.pow(x, y)
    print("X raised to the power of Y is ", + num)
