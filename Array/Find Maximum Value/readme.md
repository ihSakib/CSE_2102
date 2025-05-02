# FindMax Algorithm

This document describes the `FindMax` algorithm, which is used to find the maximum element in an array.

## Algorithm Steps

### **Pseudocode**:

```plaintext
FINDMAX(arr, N)
1.  max ← arr[0]                    // Initialize max with the first element
2.  FOR i ← 1 TO N - 1 DO           // Loop through the array from index 1 to N-1
3.      IF arr[i] > max THEN         // Check if the current element is greater than max
4.          max ← arr[i]             // Update max to the current element
5.  END FOR
6.  RETURN max                       // Return the maximum value found
