# C++ Sorting Visualizer

A terminal-based sorting algorithm visualizer built in C++. Watch three classic sorting algorithms work in real time on a randomly generated array.

## Algorithms

- **Bubble Sort** — repeatedly swaps neighboring elements until sorted
- **Selection Sort** — finds the smallest element each pass and moves it to the front
- **Insertion Sort** — picks each element and inserts it into its correct position

## Features

- Choose how many numbers to sort
- Randomly generated array for every sort
- Prints the array after every swap so you can watch it sort step by step
- Compare how differently each algorithm approaches the same problem

## How To Compile & Run

Make sure you have a C++ compiler installed (g++ recommended).

```bash
g++ -o sorter main.cpp
./sorter
```

On Windows:
```bash
g++ -o sorter main.cpp
sorter.exe
```

## Usage

```
Enter the number of elements to sort: 10
Choose an option:
1.Bubble Sort
2.Selection Sort
3.Insertion Sort
4.Exit
```

Pick an algorithm and watch it sort in real time.

## Built With

- C++
- STL (`std::vector`, `std::algorithm`)
- Modern random number generation (`std::mt19937`)

## Author

**masteroforder** — [github.com/masteroforder](https://github.com/masteroforder)
