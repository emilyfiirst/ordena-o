# 📚 Sorting Algorithms in C

This repository contains implementations in **C** of several classic **sorting algorithms**.  
All code was created for **study and learning purposes**.

---

## 📂 Included Algorithms

1. **Bubble Sort** (`bubbleSort.c`)  
   - Compares adjacent elements and swaps them until the array is sorted.  
   - Optimized with a variable to reduce unnecessary comparisons.

2. **Insertion Sort** (`insertionSort.c`)  
   - Inserts each element into the correct position within the already sorted subarray.  

3. **Selection Sort** (`selectionSort.c`)  
   - Finds the smallest element and places it in the correct position, repeating for the entire array.  

4. **Merge Sort** (`mergeSort.c`)  
   - A **divide and conquer** algorithm that splits the array into smaller parts and then merges them in sorted order.  
   - Requires temporary memory allocation.

5. **Quick Sort** (`quickSort.c`)  
   - An efficient divide and conquer algorithm.  
   - Uses a pivot to partition the array into smaller and larger elements, applying recursion to each part.

---

## ⚙️ How to Compile and Run

For any `.c` file:

```bash
# Compile
gcc file_name.c -o program_name

# Run
./program_name
```
Example for `bubbleSort.c`:

```bash
gcc bubbleSort.c -o bubbleSort
./bubbleSort
```

---

## 📄 Code Structure

- Each algorithm is implemented in a **dedicated function**.  
- The `main()` function reads an array from the user (`N` elements) and calls the corresponding sorting function.  
- Finally, the program prints the sorted array to the screen.

---

## 🧠 Notes

- The code is **educational** and focuses on understanding how each algorithm works.
- Some adjustments may be needed for **array indices** or boundaries, especially in `mergeSort` and `quickSort`.
- Ideal for studying **algorithm complexity** and sorting behavior.

---

## 👨‍💻 Autor

Created for **study purposes** and to practice classic sorting algorithms in the C programming language.
