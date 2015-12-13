from heapq import merge


def mergesort(alist):

    if len(alist) <= 1:
        return alist
    else:
        mid = len(alist) // 2
        left = alist[:mid]
        right = alist[mid:]

        left = mergesort(left)
        right = mergesort(right)
        return list(merge(left, right))

z = [5, 2, 4, 1, 3]
print mergesort(z)


def merge1(left, right, key):
    result = []
    left_idx, right_idx = 0, 0
    while left_idx < len(left) and right_idx < len(right):
        if left[left_idx] <= right[right_idx]:
            result.append(left[left_idx])
            left_idx += 1
        else:
            result.append(right[right_idx])
            right_idx += 1

    if left:
        result.extend(left[left_idx:])
    if right:
        result.extend(right[right_idx:])
    return result


def mergesort2(alist, key):

    if len(alist) <= 1:
        return alist
    else:
        mid = len(alist) // 2
        left = alist[:mid]
        right = alist[mid:]

        left = mergesort(left)
        right = mergesort(right)
        return list(merge1(left, right, key))


z = [5, 2, 4, 1, 3]
print mergesort2(z)
