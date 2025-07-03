money = int(input())
N = int(input())
total = 0

for i in range(N):
    A, B = map(int, input().split())
    total += A * B
    
if total == money:
    print("Yes")
else:
    print("No")