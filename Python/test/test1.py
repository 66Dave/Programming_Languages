#Write a Python program that:
#Asks the user to enter two integers.
#Asks the user to choose an operation:
#Uses functions to perform the operation.
#Prints the result.

def add(x,y ):
    res = x + y
    return res

def minus(x,y ):
    res = x - y
    return res

def Multiply(x,y ):
    res = x * y
    return res

def Divide(x,y ):
    res = x / y
    return res


x,y= map(int, input("enter  two integers: ").split())
choice = int(input("enter operation: [1]Add[2]Subtract[3]Multiply[4]Divide"))

if(choice == 1):
    res = add(x,y)
elif choice == 2:
    res = minus (x,y)
elif choice == 3:
    res = Multiply(x,y)
elif choice == 4:
    res = Divide(x,y)
    
print ( res )