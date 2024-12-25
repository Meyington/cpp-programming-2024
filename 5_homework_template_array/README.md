  
# Templatearray

This project implements a template-based array class that supports basic 
functionality such as displaying elements and finding the minimum value in an 
array. The array size is fixed at compile-time, making it suitable for 
scenarios where the array size is known in advance.

## Features

- **Template Array Class**: 
  - The class `Array` is templated to support any data type (`T`) and a fixed 
    size (`size`).
  - The array can be initialized with a raw pointer or by default.
  
- **Array Operations**:
  - **Show**: Prints all elements of the array.
  - **Minimum**: Finds and returns the minimum value in the array.

## Functions

- `Array()`: Default constructor initializes an empty array.
- `Array(T* b)`: Constructor that initializes the array from a pointer `b`.
- `void show()`: Displays all elements of the array.
- `T minimum(Array<T, size> &m)`: Finds and returns the minimum value in the array.

## Testing

The project includes unit tests written using **GoogleTest** to verify the 
functionality of the `Array` class. The tests ensure that the `minimum()` 
function and other operations work as expected.

- **Test Cases**: Tests for the `minimum()` function and other basic functionalities.

## Requirements

- C++17 or later
- CMake 3.10 or later
- GoogleTest
- g++ compiler

## Build Instructions

To build the project, run the following commands in your terminal:

```bash
make
```
This will compile the code and generate the executable file.


## Clean Up

To remove the object files and the compiled executable, run:

```bash
make clean
```
##License

This project is licensed under the Apache-2.0 License - see the [LICENSE](LICENSE) file for details.
