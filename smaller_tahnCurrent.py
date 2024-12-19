def smallerNumbersThanCurrent(nums):
    temp = sorted(nums)
    d = {}

    for i, v in enumerate(temp):
        if v not in d:
            d[v] = i

    ret = []

    for i in nums:
        ret.append(d[i])

    return ret
