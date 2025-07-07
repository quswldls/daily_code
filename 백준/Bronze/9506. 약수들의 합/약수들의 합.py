while True:
    try:
        n = int(input())
        division = ''
        total = 0
        if n != -1:
            for i in range(1, n//2 + 1):
                if n % i == 0:
                    division += str(i)
                    total += i
                    if i != (n//2):
                        division += ' + '
            if total == n:
                print(f"{n} = {division}")
            else:
                print(f"{n} is NOT perfect.")
        else:
            break
    except:
        break