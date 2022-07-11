/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const results = [];
    const hash = {};
    
    nums.forEach((num, index) => {
        const diff = target - nums[index];
        if (hash.hasOwnProperty(nums[index])) {
            results[0] = parseInt(hash[nums[index]]);
            results[1] = parseInt(index);
        } else {
            hash[diff] = index;
        }
    });
    
    return results;
};
