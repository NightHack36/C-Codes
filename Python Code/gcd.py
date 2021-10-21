def gcd(a,b):
    while b:a,b=b,a%b
    return a

print(gcd(30,2))
