# Initialize global variables
count = 2
n = int(input("First N Fibonacci: "))

print(0, end=" ")
print(1, end=" ")

def fib(prev1,prev2):
    global count, n 

    if count >= n:
        return
    else:
        nxt = prev1 + prev2
        print(nxt, end=" ")
        prev1 = prev2
        prev2 = nxt
        count += 1
        fib(prev1,prev2)

fib(0,1)
