def add(a,b):
        o=a+b
        print(o)
def sub(a,b):
        o=a-b
        print(o)
def mul(a,b):
        o=a*b
        print(o)
def div(a,b):
        o=a//b
        print(o)


print(""" '+' = addition
'-' = subtraction
'*' = multiplication
'/' = division """)
a=int(input("Enter first number "))
b=int(input("Enter second number "))
c= input("Enter your operation ")


if c=='+':
    add(a,b)
elif c=='-':
    sub(a,b)
elif c=='*':
    mul(a,b)
elif c=="/":
    div(a,b)
else:
    print("Idk")
