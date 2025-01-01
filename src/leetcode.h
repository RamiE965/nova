#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

struct Problem {
    std::string name;
    std::string difficulty;
    std::string category;
    std::string leetcode_link;
    std::string neetcode_link;
};

Problem getRandomProblem();
Problem getRandomProblemByDifficulty(const std::string& difficulty);
Problem getRandomProblemByCategory(const std::string& category);