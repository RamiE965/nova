#include "leetcode.h"
#include <random>
#include <__msvc_chrono.hpp>

const std::vector<Problem> leetcode_problems = {
    // Math & Geometry
    {
        "Rotate Image",
        "Medium",
        "Math & Geometry",
        "https://leetcode.com/problems/rotate-image/",
        "https://neetcode.io/solutions/rotate-image"
    },
    {
        "Spiral Matrix",
        "Medium",
        "Math & Geometry",
        "https://leetcode.com/problems/spiral-matrix/",
        "https://neetcode.io/solutions/spiral-matrix"
    },
    {
        "Set Matrix Zeroes",
        "Medium",
        "Math & Geometry",
        "https://leetcode.com/problems/set-matrix-zeroes/",
        "https://neetcode.io/solutions/set-matrix-zeroes"
    },
    {
        "Happy Number",
        "Easy",
        "Math & Geometry",
        "https://leetcode.com/problems/happy-number/",
        "https://neetcode.io/solutions/happy-number"
    },
    {
        "Plus One",
        "Easy",
        "Math & Geometry",
        "https://leetcode.com/problems/plus-one/",
        "https://neetcode.io/solutions/plus-one"
    },
    {
        "Pow(x, n)",
        "Medium",
        "Math & Geometry",
        "https://leetcode.com/problems/powx-n/",
        "https://neetcode.io/solutions/powx-n"
    },
    {
        "Multiply Strings",
        "Medium",
        "Math & Geometry",
        "https://leetcode.com/problems/multiply-strings/",
        "https://neetcode.io/solutions/multiply-strings"
    },
    {
        "Detect Squares",
        "Medium",
        "Math & Geometry",
        "https://leetcode.com/problems/detect-squares/",
        "https://neetcode.io/solutions/detect-squares"
    },

    // Bit Manipulation
    {
        "Single Number",
        "Easy",
        "Bit Manipulation",
        "https://leetcode.com/problems/single-number/",
        "https://neetcode.io/solutions/single-number"
    },
    {
        "Number of 1 Bits",
        "Easy",
        "Bit Manipulation",
        "https://leetcode.com/problems/number-of-1-bits/",
        "https://neetcode.io/solutions/number-of-1-bits"
    },
    {
        "Counting Bits",
        "Easy",
        "Bit Manipulation",
        "https://leetcode.com/problems/counting-bits/",
        "https://neetcode.io/solutions/counting-bits"
    },
    {
        "Reverse Bits",
        "Easy",
        "Bit Manipulation",
        "https://leetcode.com/problems/reverse-bits/",
        "https://neetcode.io/solutions/reverse-bits"
    },
    {
        "Missing Number",
        "Easy",
        "Bit Manipulation",
        "https://leetcode.com/problems/missing-number/",
        "https://neetcode.io/solutions/missing-number"
    },
    {
        "Sum of Two Integers",
        "Medium",
        "Bit Manipulation",
        "https://leetcode.com/problems/sum-of-two-integers/",
        "https://neetcode.io/solutions/sum-of-two-integers"
    },
    {
        "Reverse Integer",
        "Medium",
        "Bit Manipulation",
        "https://leetcode.com/problems/reverse-integer/",
        "https://neetcode.io/solutions/reverse-integer"
    },

    // Dynamic Programming
    {
        "Climbing Stairs",
        "Easy",
        "1-D Dynamic Programming",
        "https://leetcode.com/problems/climbing-stairs/",
        "https://neetcode.io/solutions/climbing-stairs"
    },
    {
        "Min Cost Climbing Stairs",
        "Easy",
        "1-D Dynamic Programming",
        "https://leetcode.com/problems/min-cost-climbing-stairs/",
        "https://neetcode.io/solutions/min-cost-climbing-stairs"
    },
    {
        "House Robber",
        "Medium",
        "1-D Dynamic Programming",
        "https://leetcode.com/problems/house-robber/",
        "https://neetcode.io/solutions/house-robber"
    },
    {
        "House Robber II",
        "Medium",
        "1-D Dynamic Programming",
        "https://leetcode.com/problems/house-robber-ii/",
        "https://neetcode.io/solutions/house-robber-ii"
    },

    // Trees
    {
        "Invert Binary Tree",
        "Easy",
        "Trees",
        "https://leetcode.com/problems/invert-binary-tree/",
        "https://neetcode.io/solutions/invert-binary-tree"
    },
    {
        "Maximum Depth of Binary Tree",
        "Easy",
        "Trees",
        "https://leetcode.com/problems/maximum-depth-of-binary-tree/",
        "https://neetcode.io/solutions/maximum-depth-of-binary-tree"
    },
    {
        "Diameter of Binary Tree",
        "Easy",
        "Trees",
        "https://leetcode.com/problems/diameter-of-binary-tree/",
        "https://neetcode.io/solutions/diameter-of-binary-tree"
    },
    {
        "Balanced Binary Tree",
        "Easy",
        "Trees",
        "https://leetcode.com/problems/balanced-binary-tree/",
        "https://neetcode.io/solutions/balanced-binary-tree"
    },

    // Heap / Priority Queue
    {
        "Kth Largest Element in a Stream",
        "Easy",
        "Heap / Priority Queue",
        "https://leetcode.com/problems/kth-largest-element-in-a-stream/",
        "https://neetcode.io/solutions/kth-largest-element-in-a-stream"
    },
    {
        "Last Stone Weight",
        "Easy",
        "Heap / Priority Queue",
        "https://leetcode.com/problems/last-stone-weight/",
        "https://neetcode.io/solutions/last-stone-weight"
    },
    {
        "K Closest Points to Origin",
        "Medium",
        "Heap / Priority Queue",
        "https://leetcode.com/problems/k-closest-points-to-origin/",
        "https://neetcode.io/solutions/k-closest-points-to-origin"
    },

    // Stack
    {
        "Valid Parentheses",
        "Easy",
        "Stack",
        "https://leetcode.com/problems/valid-parentheses/",
        "https://neetcode.io/solutions/valid-parentheses"
    },
    {
        "Min Stack",
        "Medium",
        "Stack",
        "https://leetcode.com/problems/min-stack/",
        "https://neetcode.io/solutions/min-stack"
    },

    // Arrays & Hashing
    {
        "Contains Duplicate",
        "Easy",
        "Arrays & Hashing",
        "https://leetcode.com/problems/contains-duplicate/",
        "https://neetcode.io/solutions/contains-duplicate"
    },
    {
        "Valid Anagram",
        "Easy",
        "Arrays & Hashing",
        "https://leetcode.com/problems/valid-anagram/",
        "https://neetcode.io/solutions/valid-anagram"
    },
    {
        "Two Sum",
        "Easy",
        "Arrays & Hashing",
        "https://leetcode.com/problems/two-sum/",
        "https://neetcode.io/solutions/two-sum"
    },
    {
        "Group Anagrams",
        "Medium",
        "Arrays & Hashing",
        "https://leetcode.com/problems/group-anagrams/",
        "https://neetcode.io/solutions/group-anagrams"
    },
    {
        "Top K Frequent Elements",
        "Medium",
        "Arrays & Hashing",
        "https://leetcode.com/problems/top-k-frequent-elements/",
        "https://neetcode.io/solutions/top-k-frequent-elements"
    },
    {
        "Product of Array Except Self",
        "Medium",
        "Arrays & Hashing",
        "https://leetcode.com/problems/product-of-array-except-self/",
        "https://neetcode.io/solutions/product-of-array-except-self"
    },
    {
        "Longest Consecutive Sequence",
        "Medium",
        "Arrays & Hashing",
        "https://leetcode.com/problems/longest-consecutive-sequence/",
        "https://neetcode.io/solutions/longest-consecutive-sequence"
    },

    // Two Pointers
    {
        "Valid Palindrome",
        "Easy",
        "Two Pointers",
        "https://leetcode.com/problems/valid-palindrome/",
        "https://neetcode.io/solutions/valid-palindrome"
    },
    {
        "Two Sum II",
        "Medium",
        "Two Pointers",
        "https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/",
        "https://neetcode.io/solutions/two-sum-ii"
    },
    {
        "3Sum",
        "Medium",
        "Two Pointers",
        "https://leetcode.com/problems/3sum/",
        "https://neetcode.io/solutions/3sum"
    },
    {
        "Container With Most Water",
        "Medium",
        "Two Pointers",
        "https://leetcode.com/problems/container-with-most-water/",
        "https://neetcode.io/solutions/container-with-most-water"
    },
    {
        "Trapping Rain Water",
        "Hard",
        "Two Pointers",
        "https://leetcode.com/problems/trapping-rain-water/",
        "https://neetcode.io/solutions/trapping-rain-water"
    },
    // Sliding Window
    {
        "Best Time to Buy and Sell Stock",
        "Easy",
        "Sliding Window",
        "https://leetcode.com/problems/best-time-to-buy-and-sell-stock/",
        "https://neetcode.io/solutions/best-time-to-buy-and-sell-stock"
    },
    {
        "Longest Substring Without Repeating Characters",
        "Medium",
        "Sliding Window",
        "https://leetcode.com/problems/longest-substring-without-repeating-characters/",
        "https://neetcode.io/solutions/longest-substring-without-repeating-characters"
    },
    {
        "Longest Repeating Character Replacement",
        "Medium",
        "Sliding Window",
        "https://leetcode.com/problems/longest-repeating-character-replacement/",
        "https://neetcode.io/solutions/longest-repeating-character-replacement"
    },
    {
        "Permutation in String",
        "Medium",
        "Sliding Window",
        "https://leetcode.com/problems/permutation-in-string/",
        "https://neetcode.io/solutions/permutation-in-string"
    },
    {
        "Sliding Window Maximum",
        "Hard",
        "Sliding Window",
        "https://leetcode.com/problems/sliding-window-maximum/",
        "https://neetcode.io/solutions/sliding-window-maximum"
    },
    {
        "Minimum Window Substring",
        "Hard",
        "Sliding Window",
        "https://leetcode.com/problems/minimum-window-substring/",
        "https://neetcode.io/solutions/minimum-window-substring"
    },

    // Stack (continuing from existing)
    {
        "Evaluate Reverse Polish Notation",
        "Medium",
        "Stack",
        "https://leetcode.com/problems/evaluate-reverse-polish-notation/",
        "https://neetcode.io/solutions/evaluate-reverse-polish-notation"
    },
    {
        "Generate Parentheses",
        "Medium",
        "Stack",
        "https://leetcode.com/problems/generate-parentheses/",
        "https://neetcode.io/solutions/generate-parentheses"
    },
    {
        "Daily Temperatures",
        "Medium",
        "Stack",
        "https://leetcode.com/problems/daily-temperatures/",
        "https://neetcode.io/solutions/daily-temperatures"
    },
    {
        "Car Fleet",
        "Medium",
        "Stack",
        "https://leetcode.com/problems/car-fleet/",
        "https://neetcode.io/solutions/car-fleet"
    },
    {
        "Largest Rectangle in Histogram",
        "Hard",
        "Stack",
        "https://leetcode.com/problems/largest-rectangle-in-histogram/",
        "https://neetcode.io/solutions/largest-rectangle-in-histogram"
    },

    // Binary Search
    {
        "Binary Search",
        "Easy",
        "Binary Search",
        "https://leetcode.com/problems/binary-search/",
        "https://neetcode.io/solutions/binary-search"
    },
    {
        "Search a 2D Matrix",
        "Medium",
        "Binary Search",
        "https://leetcode.com/problems/search-a-2d-matrix/",
        "https://neetcode.io/solutions/search-a-2d-matrix"
    },
    {
        "Koko Eating Bananas",
        "Medium",
        "Binary Search",
        "https://leetcode.com/problems/koko-eating-bananas/",
        "https://neetcode.io/solutions/koko-eating-bananas"
    },
    {
        "Search in Rotated Sorted Array",
        "Medium",
        "Binary Search",
        "https://leetcode.com/problems/search-in-rotated-sorted-array/",
        "https://neetcode.io/solutions/search-in-rotated-sorted-array"
    },
    {
        "Find Minimum in Rotated Sorted Array",
        "Medium",
        "Binary Search",
        "https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/",
        "https://neetcode.io/solutions/find-minimum-in-rotated-sorted-array"
    },
    {
        "Time Based Key-Value Store",
        "Medium",
        "Binary Search",
        "https://leetcode.com/problems/time-based-key-value-store/",
        "https://neetcode.io/solutions/time-based-key-value-store"
    },
    {
        "Median of Two Sorted Arrays",
        "Hard",
        "Binary Search",
        "https://leetcode.com/problems/median-of-two-sorted-arrays/",
        "https://neetcode.io/solutions/median-of-two-sorted-arrays"
    },

    // Linked List
    {
        "Reverse Linked List",
        "Easy",
        "Linked List",
        "https://leetcode.com/problems/reverse-linked-list/",
        "https://neetcode.io/solutions/reverse-linked-list"
    },
    {
        "Merge Two Sorted Lists",
        "Easy",
        "Linked List",
        "https://leetcode.com/problems/merge-two-sorted-lists/",
        "https://neetcode.io/solutions/merge-two-sorted-lists"
    },
    {
        "Reorder List",
        "Medium",
        "Linked List",
        "https://leetcode.com/problems/reorder-list/",
        "https://neetcode.io/solutions/reorder-list"
    },
    {
        "Remove Nth Node From End of List",
        "Medium",
        "Linked List",
        "https://leetcode.com/problems/remove-nth-node-from-end-of-list/",
        "https://neetcode.io/solutions/remove-nth-node-from-end-of-list"
    },
    {
        "Copy List with Random Pointer",
        "Medium",
        "Linked List",
        "https://leetcode.com/problems/copy-list-with-random-pointer/",
        "https://neetcode.io/solutions/copy-list-with-random-pointer"
    },
    {
        "Add Two Numbers",
        "Medium",
        "Linked List",
        "https://leetcode.com/problems/add-two-numbers/",
        "https://neetcode.io/solutions/add-two-numbers"
    },
    {
        "Linked List Cycle",
        "Easy",
        "Linked List",
        "https://leetcode.com/problems/linked-list-cycle/",
        "https://neetcode.io/solutions/linked-list-cycle"
    },
    {
        "Find the Duplicate Number",
        "Medium",
        "Linked List",
        "https://leetcode.com/problems/find-the-duplicate-number/",
        "https://neetcode.io/solutions/find-the-duplicate-number"
    },
    {
        "LRU Cache",
        "Medium",
        "Linked List",
        "https://leetcode.com/problems/lru-cache/",
        "https://neetcode.io/solutions/lru-cache"
    },
    {
        "Merge k Sorted Lists",
        "Hard",
        "Linked List",
        "https://leetcode.com/problems/merge-k-sorted-lists/",
        "https://neetcode.io/solutions/merge-k-sorted-lists"
    },
    {
        "Reverse Nodes in k-Group",
        "Hard",
        "Linked List",
        "https://leetcode.com/problems/reverse-nodes-in-k-group/",
        "https://neetcode.io/solutions/reverse-nodes-in-k-group"
    },

    // Trees (continuing from existing)
    {
        "Same Tree",
        "Easy",
        "Trees",
        "https://leetcode.com/problems/same-tree/",
        "https://neetcode.io/solutions/same-tree"
    },
    {
        "Subtree of Another Tree",
        "Easy",
        "Trees",
        "https://leetcode.com/problems/subtree-of-another-tree/",
        "https://neetcode.io/solutions/subtree-of-another-tree"
    },
    {
        "Lowest Common Ancestor of a Binary Search Tree",
        "Medium",
        "Trees",
        "https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/",
        "https://neetcode.io/solutions/lowest-common-ancestor-of-a-binary-search-tree"
    },
    {
        "Binary Tree Level Order Traversal",
        "Medium",
        "Trees",
        "https://leetcode.com/problems/binary-tree-level-order-traversal/",
        "https://neetcode.io/solutions/binary-tree-level-order-traversal"
    },
    {
        "Binary Tree Right Side View",
        "Medium",
        "Trees",
        "https://leetcode.com/problems/binary-tree-right-side-view/",
        "https://neetcode.io/solutions/binary-tree-right-side-view"
    },
    {
        "Count Good Nodes in Binary Tree",
        "Medium",
        "Trees",
        "https://leetcode.com/problems/count-good-nodes-in-binary-tree/",
        "https://neetcode.io/solutions/count-good-nodes-in-binary-tree"
    },
    {
        "Validate Binary Search Tree",
        "Medium",
        "Trees",
        "https://leetcode.com/problems/validate-binary-search-tree/",
        "https://neetcode.io/solutions/validate-binary-search-tree"
    },
    {
        "Kth Smallest Element in a BST",
        "Medium",
        "Trees",
        "https://leetcode.com/problems/kth-smallest-element-in-a-bst/",
        "https://neetcode.io/solutions/kth-smallest-element-in-a-bst"
    },
    {
        "Construct Binary Tree from Preorder and Inorder Traversal",
        "Medium",
        "Trees",
        "https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/",
        "https://neetcode.io/solutions/construct-binary-tree-from-preorder-and-inorder-traversal"
    },
    {
        "Binary Tree Maximum Path Sum",
        "Hard",
        "Trees",
        "https://leetcode.com/problems/binary-tree-maximum-path-sum/",
        "https://neetcode.io/solutions/binary-tree-maximum-path-sum"
    },
    {
        "Serialize and Deserialize Binary Tree",
        "Hard",
        "Trees",
        "https://leetcode.com/problems/serialize-and-deserialize-binary-tree/",
        "https://neetcode.io/solutions/serialize-and-deserialize-binary-tree"
    },

    // Tries
    {
        "Implement Trie (Prefix Tree)",
        "Medium",
        "Tries",
        "https://leetcode.com/problems/implement-trie-prefix-tree/",
        "https://neetcode.io/solutions/implement-trie-prefix-tree"
    },
    {
        "Design Add and Search Words Data Structure",
        "Medium",
        "Tries",
        "https://leetcode.com/problems/design-add-and-search-words-data-structure/",
        "https://neetcode.io/solutions/design-add-and-search-words-data-structure"
    },
    {
        "Word Search II",
        "Hard",
        "Tries",
        "https://leetcode.com/problems/word-search-ii/",
        "https://neetcode.io/solutions/word-search-ii"
    },
        {
        "Kth Largest Element in an Array",
        "Medium",
        "Heap / Priority Queue",
        "https://leetcode.com/problems/kth-largest-element-in-an-array/",
        "https://neetcode.io/solutions/kth-largest-element-in-an-array"
        },
    {
        "Task Scheduler",
        "Medium",
        "Heap / Priority Queue",
        "https://leetcode.com/problems/task-scheduler/",
        "https://neetcode.io/solutions/task-scheduler"
    },
    {
        "Find Median from Data Stream",
        "Hard",
        "Heap / Priority Queue",
        "https://leetcode.com/problems/find-median-from-data-stream/",
        "https://neetcode.io/solutions/find-median-from-data-stream"
    },
    {
        "Design Twitter",
        "Medium",
        "Heap / Priority Queue",
        "https://leetcode.com/problems/design-twitter/",
        "https://neetcode.io/solutions/design-twitter"
    },

        // Backtracking
    {
        "Subsets",
        "Medium",
        "Backtracking",
        "https://leetcode.com/problems/subsets/",
        "https://neetcode.io/solutions/subsets"
    },
    {
        "Combination Sum",
        "Medium",
        "Backtracking",
        "https://leetcode.com/problems/combination-sum/",
        "https://neetcode.io/solutions/combination-sum"
    },
    {
        "Permutations",
        "Medium",
        "Backtracking",
        "https://leetcode.com/problems/permutations/",
        "https://neetcode.io/solutions/permutations"
    },
    {
        "Subsets II",
        "Medium",
        "Backtracking",
        "https://leetcode.com/problems/subsets-ii/",
        "https://neetcode.io/solutions/subsets-ii"
    },
    {
        "Combination Sum II",
        "Medium",
        "Backtracking",
        "https://leetcode.com/problems/combination-sum-ii/",
        "https://neetcode.io/solutions/combination-sum-ii"
    },
    {
        "Word Search",
        "Medium",
        "Backtracking",
        "https://leetcode.com/problems/word-search/",
        "https://neetcode.io/solutions/word-search"
    },
    {
        "Palindrome Partitioning",
        "Medium",
        "Backtracking",
        "https://leetcode.com/problems/palindrome-partitioning/",
        "https://neetcode.io/solutions/palindrome-partitioning"
    },
    {
        "Letter Combinations of a Phone Number",
        "Medium",
        "Backtracking",
        "https://leetcode.com/problems/letter-combinations-of-a-phone-number/",
        "https://neetcode.io/solutions/letter-combinations-of-a-phone-number"
    },
    {
        "N-Queens",
        "Hard",
        "Backtracking",
        "https://leetcode.com/problems/n-queens/",
        "https://neetcode.io/solutions/n-queens"
    },

        // Graphs
    {
        "Number of Islands",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/number-of-islands/",
        "https://neetcode.io/solutions/number-of-islands"
    },
    {
        "Clone Graph",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/clone-graph/",
        "https://neetcode.io/solutions/clone-graph"
    },
    {
        "Max Area of Island",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/max-area-of-island/",
        "https://neetcode.io/solutions/max-area-of-island"
    },
    {
        "Pacific Atlantic Water Flow",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/pacific-atlantic-water-flow/",
        "https://neetcode.io/solutions/pacific-atlantic-water-flow"
    },
    {
        "Surrounded Regions",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/surrounded-regions/",
        "https://neetcode.io/solutions/surrounded-regions"
    },
    {
        "Rotting Oranges",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/rotting-oranges/",
        "https://neetcode.io/solutions/rotting-oranges"
    },
    {
        "Walls and Gates",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/walls-and-gates/",
        "https://neetcode.io/solutions/walls-and-gates"
    },
    {
        "Course Schedule",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/course-schedule/",
        "https://neetcode.io/solutions/course-schedule"
    },
    {
        "Course Schedule II",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/course-schedule-ii/",
        "https://neetcode.io/solutions/course-schedule-ii"
    },
    {
        "Redundant Connection",
        "Medium",
        "Graphs",
        "https://leetcode.com/problems/redundant-connection/",
        "https://neetcode.io/solutions/redundant-connection"
    },
    {
        "Word Ladder",
        "Hard",
        "Graphs",
        "https://leetcode.com/problems/word-ladder/",
        "https://neetcode.io/solutions/word-ladder"
    },

        // Advanced Graphs
    {
        "Min Cost to Connect All Points",
        "Medium",
        "Advanced Graphs",
        "https://leetcode.com/problems/min-cost-to-connect-all-points/",
        "https://neetcode.io/solutions/min-cost-to-connect-all-points"
    },
    {
        "Network Delay Time",
        "Medium",
        "Advanced Graphs",
        "https://leetcode.com/problems/network-delay-time/",
        "https://neetcode.io/solutions/network-delay-time"
    },
    {
        "Cheapest Flights Within K Stops",
        "Medium",
        "Advanced Graphs",
        "https://leetcode.com/problems/cheapest-flights-within-k-stops/",
        "https://neetcode.io/solutions/cheapest-flights-within-k-stops"
    },
    {
        "Reconstruct Itinerary",
        "Hard",
        "Advanced Graphs",
        "https://leetcode.com/problems/reconstruct-itinerary/",
        "https://neetcode.io/solutions/reconstruct-itinerary"
    },
    {
        "Swim in Rising Water",
        "Hard",
        "Advanced Graphs",
        "https://leetcode.com/problems/swim-in-rising-water/",
        "https://neetcode.io/solutions/swim-in-rising-water"
    },
    {
        "Alien Dictionary",
        "Hard",
        "Advanced Graphs",
        "https://leetcode.com/problems/alien-dictionary/",
        "https://neetcode.io/solutions/alien-dictionary"
    },

        // 2-D Dynamic Programming (continuing Dynamic Programming section)
    {
        "Longest Common Subsequence",
        "Medium",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/longest-common-subsequence/",
        "https://neetcode.io/solutions/longest-common-subsequence"
    },
    {
        "Best Time to Buy and Sell Stock with Cooldown",
        "Medium",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/",
        "https://neetcode.io/solutions/best-time-to-buy-and-sell-stock-with-cooldown"
    },
    {
        "Coin Change",
        "Medium",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/coin-change/",
        "https://neetcode.io/solutions/coin-change"
    },
    {
        "Partition Equal Subset Sum",
        "Medium",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/partition-equal-subset-sum/",
        "https://neetcode.io/solutions/partition-equal-subset-sum"
    },
    {
        "Target Sum",
        "Medium",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/target-sum/",
        "https://neetcode.io/solutions/target-sum"
    },
    {
        "Interleaving String",
        "Medium",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/interleaving-string/",
        "https://neetcode.io/solutions/interleaving-string"
    },
    {
        "Longest Increasing Path in a Matrix",
        "Hard",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/longest-increasing-path-in-a-matrix/",
        "https://neetcode.io/solutions/longest-increasing-path-in-a-matrix"
    },
    {
        "Distinct Subsequences",
        "Hard",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/distinct-subsequences/",
        "https://neetcode.io/solutions/distinct-subsequences"
    },
    {
        "Edit Distance",
        "Hard",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/edit-distance/",
        "https://neetcode.io/solutions/edit-distance"
    },
    {
        "Burst Balloons",
        "Hard",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/burst-balloons/",
        "https://neetcode.io/solutions/burst-balloons"
    },
    {
        "Regular Expression Matching",
        "Hard",
        "2-D Dynamic Programming",
        "https://leetcode.com/problems/regular-expression-matching/",
        "https://neetcode.io/solutions/regular-expression-matching"
    },

        // Greedy
    {
        "Maximum Subarray",
        "Medium",
        "Greedy",
        "https://leetcode.com/problems/maximum-subarray/",
        "https://neetcode.io/solutions/maximum-subarray"
    },
    {
        "Jump Game",
        "Medium",
        "Greedy",
        "https://leetcode.com/problems/jump-game/",
        "https://neetcode.io/solutions/jump-game"
    },
    {
        "Jump Game II",
        "Medium",
        "Greedy",
        "https://leetcode.com/problems/jump-game-ii/",
        "https://neetcode.io/solutions/jump-game-ii"
    },
    {
        "Gas Station",
        "Medium",
        "Greedy",
        "https://leetcode.com/problems/gas-station/",
        "https://neetcode.io/solutions/gas-station"
    },
    {
        "Hand of Straights",
        "Medium",
        "Greedy",
        "https://leetcode.com/problems/hand-of-straights/",
        "https://neetcode.io/solutions/hand-of-straights"
    },
    {
        "Merge Triplets to Form Target Triplet",
        "Medium",
        "Greedy",
        "https://leetcode.com/problems/merge-triplets-to-form-target-triplet/",
        "https://neetcode.io/solutions/merge-triplets-to-form-target-triplet"
    },
    {
        "Valid Parenthesis String",
        "Medium",
        "Greedy",
        "https://leetcode.com/problems/valid-parenthesis-string/",
        "https://neetcode.io/solutions/valid-parenthesis-string"
    },
    {
        "Partition Labels",
        "Medium",
        "Greedy",
        "https://leetcode.com/problems/partition-labels/",
        "https://neetcode.io/solutions/partition-labels"
    },

        // Intervals
    {
        "Insert Interval",
        "Medium",
        "Intervals",
        "https://leetcode.com/problems/insert-interval/",
        "https://neetcode.io/solutions/insert-interval"
    },
    {
        "Merge Intervals",
        "Medium",
        "Intervals",
        "https://leetcode.com/problems/merge-intervals/",
        "https://neetcode.io/solutions/merge-intervals"
    },
    {
        "Non-overlapping Intervals",
        "Medium",
        "Intervals",
        "https://leetcode.com/problems/non-overlapping-intervals/",
        "https://neetcode.io/solutions/non-overlapping-intervals"
    },
    {
        "Meeting Rooms",
        "Easy",
        "Intervals",
        "https://leetcode.com/problems/meeting-rooms/",
        "https://neetcode.io/solutions/meeting-rooms"
    },
    {
        "Meeting Rooms II",
        "Medium",
        "Intervals",
        "https://leetcode.com/problems/meeting-rooms-ii/",
        "https://neetcode.io/solutions/meeting-rooms-ii"
    },
    {
        "Minimum Interval to Include Each Query",
        "Hard",
        "Intervals",
        "https://leetcode.com/problems/minimum-interval-to-include-each-query/",
        "https://neetcode.io/solutions/minimum-interval-to-include-each-query"
    }
};

Problem getRandomProblem() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, leetcode_problems.size() - 1);

    return leetcode_problems[dist(gen)];
}

Problem getRandomProblemByDifficulty(const std::string& difficulty) {
    std::vector<Problem> filtered_problems;
    for (const auto& problem : leetcode_problems) {
        if (problem.difficulty == difficulty) {
            filtered_problems.push_back(problem);
        }
    }

    if (filtered_problems.empty()) {
        return Problem{};
    }

    return filtered_problems[rand() % filtered_problems.size()];
}

Problem getRandomProblemByCategory(const std::string& category) {
    std::vector<Problem> filtered_problems;
    for (const auto& problem : leetcode_problems) {
        if (problem.category == category) {
            filtered_problems.push_back(problem);
        }
    }

    if (filtered_problems.empty()) {
        return Problem{}; 
    }

    return filtered_problems[rand() % filtered_problems.size()];
}