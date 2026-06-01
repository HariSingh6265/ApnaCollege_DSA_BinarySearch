<div align="center">

# 🔍 ApnaCollege DSA — Binary Search

**Mastering Binary Search, one problem at a time.**

![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Topic](https://img.shields.io/badge/Topic-Binary%20Search-blueviolet?style=flat-square)
![Course](https://img.shields.io/badge/Course-Apna%20College%20DSA-red?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)
![GitHub last commit](https://img.shields.io/github/last-commit/HariSingh6265/ApnaCollege_DSA_BinarySearch?style=flat-square)
![GitHub stars](https://img.shields.io/github/stars/HariSingh6265/ApnaCollege_DSA_BinarySearch?style=flat-square&color=yellow)

</div>

---

## 📌 About

This repository contains my solutions to **Binary Search** problems from the **Apna College DSA Series**.  
Binary Search is one of the most powerful and efficient searching techniques — reducing time complexity from **O(n)** to **O(log n)**.

> 🎯 Goal: Understand when and how to apply Binary Search beyond just sorted arrays.

---

## 🗂️ Folder Structure

```
ApnaCollege_DSA_BinarySearch/
│
├── 01_BinarySearch_Iterative.cpp         → Classic BS — iterative approach
├── 02_BinarySearch_Recursive.cpp         → Classic BS — recursive approach
├── 03_Search_Rotated_Sorted_Array.cpp    → Leetcode 33
├── 04_Peak_Index_Mountain_Array.cpp      → Leetcode 852
├── 05_Single_Element_Sorted_Array.cpp    → Find the odd one out
├── 06_Book_Allocation.cpp                → Minimize the maximum pages
├── 07_Painters_Partition.cpp             → Minimize painting time
├── 08_Aggressive_Cows.cpp                → Maximize minimum distance
└── README.md
```

> 📝 Update filenames to match your actual files in the repo.

---

## 🧩 Topics Covered

| # | Problem | Platform | Difficulty |
|---|---------|----------|------------|
| 1 | 📘 Binary Search — Iterative & Recursive | Apna College | 🟢 Easy |
| 2 | 🔄 Search in Rotated Sorted Array | Leetcode #33 | 🟡 Medium |
| 3 | 🏔️ Peak Index in Mountain Array | Leetcode #852 | 🟢 Easy |
| 4 | 1️⃣ Single Element in a Sorted Array | Leetcode #540 | 🟡 Medium |
| 5 | 📚 Book Allocation Problem | Apna College | 🔴 Hard |
| 6 | 🎨 Painter's Partition Problem | Apna College | 🔴 Hard |
| 7 | 🐄 Aggressive Cows | Apna College | 🔴 Hard |

---

## 💡 Key Concept

Binary Search works on the principle of **eliminating half the search space** at every step.

```cpp
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)      return mid;
        else if (arr[mid] < target)  low = mid + 1;
        else                         high = mid - 1;
    }
    return -1; // not found
}
```

> ⚡ Time Complexity: **O(log n)** &nbsp;|&nbsp; Space Complexity: **O(1)**

---

## 🚀 How to Run

```bash
# 1. Clone the repo
git clone https://github.com/HariSingh6265/ApnaCollege_DSA_BinarySearch.git
cd ApnaCollege_DSA_BinarySearch

# 2. Compile any solution
g++ filename.cpp -o output

# 3. Run it
./output
```

---

## 📚 Resources

- 🎓 [Apna College DSA Playlist](https://www.youtube.com/@ApnaCollegeOfficial)
- 🧠 [Leetcode #33 — Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- 🏔️ [Leetcode #852 — Peak Index in Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)
- 1️⃣ [Leetcode #540 — Single Element in Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)

---

## 👤 Author

<div align="center">

**Hari Singh**

[![GitHub](https://img.shields.io/badge/GitHub-HariSingh6265-181717?style=for-the-badge&logo=github)](https://github.com/HariSingh6265)

*Found this helpful? Drop a ⭐ — it keeps me going!*

</div>
