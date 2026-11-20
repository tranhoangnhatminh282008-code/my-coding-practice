A = []
n = int(input("Enter num:"))
for i in range(n):
    number = int(input("number: "))
    A.append(number)
low  = A[0]
for i in range(0,len(A)):
    if (low > A[i]):
        low = A[i]
low_index = A.index(low)
print(low_index)
A[0], A[low_index] = A[low_index], A[0]

print(f"The lowest number in this array is {low}")

print(A)


    


