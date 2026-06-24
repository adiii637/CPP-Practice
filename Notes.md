For CP, remember these 3 patterns:

1. Prime check for one number
for(int i=2;i*i<=n;i++)
2. Divisor counting
for(int i=1;i*i<=n;i++)

If i divides n, then n/i is also a divisor.

3. Sieve of Eratosthenes
for(int i=2;i<=n;i++)
    for(int j=i*i;j<=n;j+=i)

Marks all non-prime numbers up to n.

One thing I like

You fixed the biggest CP beginner mistake:

ceil(a/b)

on integers.

Using:

(a+b-1)/b

is the correct competitive-programming way.

Left side total = sum(1 ... L-1)

Right side total = sum(R+1 ... N)

Answer = max(left,right)