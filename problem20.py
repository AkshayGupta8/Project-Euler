def factorial(acc : int, n : int):
    if n == 1:
        return acc
    else:
        return factorial(acc * n, n - 1)
 
def sumDigits(n : int):
    sum = 0
    while (n != 0):
        sum += n % 10
        n = n // 10
    return sum
 
def main():
    print(sumDigits(factorial(1, 100)))
 
if __name__ == '__main__':
  main()