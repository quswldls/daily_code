N, X = map(int, input().split())
a = list(map(int, input().split()))
num_list = []
for i in range(N):
    if a[i] < X:
        print(a[i], end=" ")
    else:
        continue