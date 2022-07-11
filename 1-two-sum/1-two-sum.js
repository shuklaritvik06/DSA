/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const result = new Set();
    for(let i=0;i<nums.length;i++){
        let a = nums[i];
        for(let j=0;j<nums.length;j++){
            if(nums[j]+a===target && j!==i){
                result.add(i)
                result.add(j)
                break;
            }
        }
    }
    return Array.from(result)
};