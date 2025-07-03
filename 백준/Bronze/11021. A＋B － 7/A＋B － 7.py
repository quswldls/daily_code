T = int(input())
sum = []

for i in range(T):
    A, B = map(int, input().split())
    sum.append(A + B)
    
for i in range(T):
    print(f"Case #{i+1}: {sum[i]}")