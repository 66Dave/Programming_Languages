#does add minus multiply and divide


def add(x,y):
    return  x+y
    

def minus(x,y):
    res = x-y
    return res

def mult(x,y):
    res = x * y
    return res

def div(x,y):
    res =x / y
    return res


#main
x = int (input("enter num:  "))
y = int (input("enter num2: "))

print(" 1 - add");print(" 2 - subtract");print(" 3 - multiply");print(" 4 - divide")
choice = int(input("select what to do: "))

if(choice == 1):
    res = add(x,y)
elif choice == 2:
    res = minus (x,y)
elif choice == 3:
    res =mult(x,y)
elif choice == 4:
    res =div(x,y)
else:
    print("choice invalid exiting .. . . .")
    exit()
print(res)