#include <bits/stdc++.h>

using namespace std;

// function to remove duplicates from a array

// by using set in STL
vector<int> removeDuplicates(vector<int> input){
    set<int> s;
    vector<int> result;
    for(int i = 0; i < input.size(); i++){
        if(s.find(input[i] == s.end())){
            s.insert(input[i]);
            result.push_back(input[i]);
        }
    }
    return result;
}

// by using sorting
vector<int> removeDuplicates(vector<int> input){
    vector<int> result;
    sort(input.begin(), input.end());
    result.push_back(input[0]);
    for(int i = 1; i < input.size(); i++){
        if(input[i] != input[i-1]){
            result.push_back(input[i]);
        }
    }
    return result;
}


// Function to return first non repeating character
// in case there are no repeating characters, print the first character
// of the string
// using unordered_map

char nonRepeatingCharacter(string str){
    unordered_map<char, int> freq;
    for(int i = 0; i < str.length(); i++){
        char currentChar = str[i];
        freq[currentChar]++;
    }
    for(int i = 0; i < str.length(); i++){
        if(freq[str[i]] == 1){
            return str[i];
        }
    }
    retunr str[0];
}
