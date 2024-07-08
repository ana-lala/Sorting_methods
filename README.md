# Sorting Methods

This project implements various sorting algorithms in C++, including Bubble Sort, Selection Sort, Insertion Sort, ShellSort, QuickSort, and MergeSort. The project also includes utility functions for handling animation and vector printing during the sorting process.

## Requirements

- C++ compiler (e.g., g++)
- Operating system supporting `Sleep` and console cursor manipulation (e.g., Windows)

## Compilation and Execution

1. **Compile the project:**

    Navigate to the project directory and run:

    ```bash
    g++ -o bin/debug/Sorting main.cpp Utileria.cpp HerramientasVectores.cpp MetodosDeOrdenamiento.cpp
    ```

2. **Run the executable:**

    Navigate to the `bin/debug` directory and execute the binary:

    ```bash
    cd bin/debug
    ./Sorting
    ```

## Sorting Algorithms

- **Bubble Sort:** Compares and swaps adjacent elements if they are in the wrong order.
- **Selection Sort:** Finds the smallest element and moves it to the beginning.
- **Insertion Sort:** Inserts each element into its correct position within the sorted part of the array.
- **ShellSort:** Generalizes insertion sort by allowing the exchange of far apart elements.
- **QuickSort:** Divides the array into sub-arrays around a pivot and sorts recursively.
- **MergeSort:** Divides the array into smaller sub-arrays, sorts them, and merges them back together.

## Helper Functions

- **Intercambiar:** Template function to swap two elements.
- **MoverCursor & CambiarCursor:** Functions to manipulate the console cursor for animations.
- **Imprimir:** Function to print the vector, highlighting compared or swapped elements.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
