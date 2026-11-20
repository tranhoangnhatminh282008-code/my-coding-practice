print("input a number: ", end= "")
n = int(input())
count = 0
for i in range(2,n+1):
    prime = True
    for j in range(2,i):
        if i % j == 0:
            prime = False 
        else: 
            print(j)
            count = count + 1 
            break
print(f"There are {count}")


