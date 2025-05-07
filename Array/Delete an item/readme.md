# DeleteItem Algorithm

This document describes the `DeleteItem` algorithm, which is used to delete an item from a fixed-size array at a specified index by shifting elements leftward.

> **Note:** Since C++ arrays are of fixed size, the algorithm does not actually shrink the array size. It only shifts elements, and the last item becomes a duplicate or irrelevant.

---

## 📌 Algorithm Steps

### **Pseudocode**:

```plaintext
DELETEITEM(arr, N, k)
1.  IF k ≥ N THEN
2.      PRINT "Invalid Index!"      // Index is out of bounds
3.      RETURN
4.  END IF
5.  FOR i ← k TO N - 1 DO           // Shift elements left starting from index k
6.      arr[i] ← arr[i + 1]
7.  END FOR
8.  PRINT "Item deleted at index k!"
