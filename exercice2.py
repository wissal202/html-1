from math import sqrt
def prime(n):
    result=True
    for i in range(2, int(sqrt(n)+1)):
        if  i%n==0:result= false
    return result
print(prime(n=5))