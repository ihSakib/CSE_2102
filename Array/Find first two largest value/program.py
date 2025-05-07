def find_first_two_largest(arr):
    first = arr[0]
    second = arr[1]
    loc1 = 0
    loc2 = 1

    if first < second:
        first, second = second, first
        loc1, loc2 = loc2, loc1

    for i, num in enumerate(arr[2:], start=2):
        if first < num:
            first, second = num, first
            loc1, loc2 = i, loc1
        elif second < num:
            second = num
            loc2 = i

    return [f"{first} (index {loc1})", f"{second} (index {loc2})"]


arr = [2, 43, -3, 6, 9, 44, 5]
values = find_first_two_largest(arr)

print(values)
