# sum of even numbers less than 4 million

sum_of_evens = 2
fib1 = 1
fib2 = 2

# if we are inside this while loop, then the next number in fib is less than 4 million
while(fib1 + fib2 < 4000000):
    new_fib = fib1 + fib2
    fib1 = fib2
    fib2 = new_fib
    if(fib2 % 2 == 0):
       # if the new fib number is even, we add it to the sum_of_evens
        sum_of_evens += fib2

print(sum_of_evens)
