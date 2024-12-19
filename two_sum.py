def twoSum(nums: List[int], target: int) -> List[int]:
    hash_map = {}
    for i, v in enumerate(nums):
        if target - v in hash_map:
            return i, hash_map[target - v]
        hash_map[v] = i
