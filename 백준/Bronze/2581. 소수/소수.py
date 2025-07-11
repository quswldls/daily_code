M = int(input())
N = int(input())
count1 = 0
division = []

for n in range(M, N + 1):
    count1 = 0
    for i in range(1, n + 1):
        if n % i == 0:
            count1 += 1
    if count1 == 2:
        division.append(n)
if division == []:
    print(-1)
else:
    print(sum(division))
    print(min(division))