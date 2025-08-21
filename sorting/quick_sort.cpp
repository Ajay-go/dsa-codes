#include <iostream>
#include <vector>
#include <algorithm>
/*
====================================
📌 QuickSort — Interview Metadata
====================================

🔹 Algorithm:
- Divide & Conquer sorting algorithm.
- Pick a pivot, partition array so:
    Left side < pivot
    Right side >= pivot
- Recursively sort left & right subarrays.

🔹 Partition Schemes:
1. Lomuto (last element pivot) → simpler but more swaps.
2. Hoare (first element pivot) → fewer swaps, faster in practice.

🔹 Time Complexity:
- Best case: O(n log n)   (balanced partition)
- Average:   O(n log n)   (random pivot, typical case)
- Worst:     O(n²)        (already sorted + poor pivot choice)

🔹 Space Complexity:
- O(log n) average (recursion stack)
- O(n) worst (skewed recursion)
- In-place algorithm (no extra array needed).

🔹 Stability:
- Not stable (equal elements may change order).
- Can be made stable with extra space, but normally unstable.

🔹 Advantages:
- Faster in practice than MergeSort (good cache locality).
- In-place (saves memory).
- Widely used (C++ STL sort(), Java Arrays.sort() for primitives).

🔹 Disadvantages:
- Worst-case O(n²).
- Not stable.
- Recursive (may cause stack overflow if not optimized).

🔹 Optimizations:
- Randomized pivot (reduces chance of worst case).
- Median-of-three pivot (choose median of first, mid, last).
- 3-way partition (handles duplicates efficiently).
- Tail recursion elimination (reduce stack depth).

🔹 Comparison:
- MergeSort: Stable, O(n log n) always, needs O(n) space.
- HeapSort: O(n log n) guaranteed, worse constants than QuickSort.
- QuickSort: Faster in practice, but unstable and O(n²) worst case.

====================================
*/

using namespace std;
int find_pivot(vector<int>&v,int lo,int hi){
    if(lo == hi)return lo;
    int piv = lo;
    int pivele = v[lo];

    int less = 0;
    for(int i = lo+1;i<=hi;i++){
        if(v[i] < pivele)less ++;
    }
    piv = less+lo;
    swap(v[piv],v[lo]);
    int i = lo;
    int j = hi;


    while(i < piv && j > piv){
        if(v[i] < pivele){
            i++;
        }
        if(v[j] >= pivele ){
            j--;
        }
        else {
            if(v[i] >= pivele && v[j] < pivele){
                swap(v[i],v[j]);
                i++;
                j--;
            }
        }
    }
    return piv;

}

void quick_sort(vector<int>&v,int lo,int hi){
    if(lo >= hi)return;
    int piv = find_pivot(v,lo,hi);
    quick_sort(v,lo,piv-1);
    quick_sort(v,piv+1,hi);

}
int main() {
    vector<int> v = {1, 5, 4,1,9,2,0};
    int n = v.size();
    quick_sort(v, 0, n - 1);
    for (int ele : v)
        cout << ele << " ";
    return 0;
}