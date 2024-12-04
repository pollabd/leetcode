def removeElement(nums: list[int], val: int) -> list[int]:
    for num in nums[:]:
        if num == val:
            nums.remove(num)
    return nums
