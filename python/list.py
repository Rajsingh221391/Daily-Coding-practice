numbers = [10, 20, 30, 40, "Name1"]
print(numbers[4])
print(numbers[0])
print(numbers[2])
print(numbers[3])

numbers[1] = 100
print(numbers)
print("helo")

squares = []

for x in range(5):
    squares.append(x * x)
print(squares)

squares2 = [x**3 for x in range(5)]
for i in squares2:
    print(i, end=" ")
even = [x for x in squares2 if x % 2 == 0]
print(even)

result = ["Even" if x % 2 == 0 else "odd" for x in range(1, 10)]
print(result)
print(*(x for x in result))
