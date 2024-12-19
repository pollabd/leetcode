def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
    set_nums = set(nums)
    missing_numbers = []
    for v in range(1, len(nums) + 1):
        if v not in set_nums:
            missing_numbers.append(v)
    return missing_numbers


nums = [1, 2, 2, 3, 6, 7, 9]
result = findDisappearedNumbers(None, nums)
print("Missing numbers:", result)
