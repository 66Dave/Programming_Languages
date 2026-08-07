# Imports the math module.
# Asks the user to enter an integer.
#
# Prints:
#   - The square root
#   - The square (x ** 2)
#   - The cube (x ** 3)
#   - The factorial


import math


def sqroot(x):
    return(math.sqrt(x))

def square(x):
    return(math.pow(x,2))

def cube(x):
    return(math.pow(x,3))

def Fact(x):
    return(math.factorial(x))

x = int(input("enter variable"))

choice = int(input("select option [1]Square root [2]square [3]cube [4]factorial"))

if (choice == 1): 
    res = sqroot(x)
    
elif(choice ==2):
    res = square(x)
    
elif(choice == 3):
    res = cube(x)
    
elif(choice == 4):
    res = Fact(x)
    
print (res)