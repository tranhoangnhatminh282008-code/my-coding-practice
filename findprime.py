print("input a number: ", end= "")
number= int(input())
count = 0
def isprime(n):
    for j in range(2,n):
        if n % j == 0:
            return False
        else:
            return True
for i in range (1,number):
    if isprime(i) == True:
        print(i)
        count = count + 1 
    else:
        continue
print(f"There are {count} number ")




