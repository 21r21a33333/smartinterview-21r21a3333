# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
for i in range(n):
    t=int(input())
    print(bin(t)[2:])