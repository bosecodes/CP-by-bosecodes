// Given an integer array nums and a target value,
// check whether sum of any two elements(find the pair) of nums add up to the target 
// There will be exactly one solution, and an element can be repeated 


// Java solution for hashmap

// Look at damn sociopath

import java.util.*;
import java.io.*;


class Solution {
    public int[] twoSum(int numbers[], int target) {
        int result = new int[2];
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();
        for(int i = 0; i < numbers.length() ;i++) {
            if(map.containsKey(target-numbers[i])) {
                result[1] = i;
                result[0] = map.get(target - numbers[i]);
                return result;
            }
            map.put(numbers[i], i);
        }
        return result;
    }
}









