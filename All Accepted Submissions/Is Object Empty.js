//Author : https://leetcode.com/u/fmfuad/
//Title : Is Object Empty
//Submission id : 1842091223
//Problem url : https://leetcode.com/problems/is-object-empty/
//Submission url : https://leetcode.com/submissions/detail/1842091223/


/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    for(const [key ,val ] of Object.entries(obj)){
        return false;
    }
    return true;
};
