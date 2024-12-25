function removeDuplicates(nums){
    let seen = new Set();
    let writePointer = 0;

    for (let i = 0; i < nums.length; i++) {
        if(!seen.has(nums[i])){
            seen.add(nums[i])
            nums[writePointer] = nums[i]
            writePointer ++ ;
        }
    }

    return writePointer
}