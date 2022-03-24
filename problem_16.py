x = 2 ** 1000

sum = 0
while (x != 0):
    temp = x % 10
    x = x // 10
    sum += temp

print(sum)