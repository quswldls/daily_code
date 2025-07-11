N = int(input())
number = list(map(int, input().split()))
count1 = 0
division1 = 0
for n in number:
    division1 = 0
    for i in range(1, n + 1):
        if n % i == 0:
            division1 += 1
    if division1 == 2:
        count1 += 1
print(count1)