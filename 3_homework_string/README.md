 
  
 * Homework my string
    =================
 *
 * This C++ project implements a custom `String` class, which mimics basic functionality 
 * similar to `std::string`. The class includes features such as string construction, 
 * copying, assignment, and indexing.
 *
 * Features
    --------
 *
    - **Constructor**: Initializes a string from a C-style string or with repeated characters.
    - **Destructor**: Properly cleans up the allocated memory.
    - **Copy Constructor & Assignment Operator**: Ensures correct handling of object copies.
    - **Operator[]**: Allows indexing into the string (returns a new `String`).
    - **Append**: Appends one string to another.
    - **Output Stream**: Outputs the string to an `ostream` (e.g., `std::cout`).
 *
 * Functions
    ---------
 *
    - `String(const char *str = "")`: Initializes the string from a C-style string.
    - `String(size_t n, char c)`: Initializes the string with `n` characters, all set to `c`.
    - `~String()`: Destructor that frees dynamically allocated memory.
    - `String(const String &other)`: Copy constructor.
    - `String &operator=(const String &other)`: Assignment operator.
    - `String operator[](int i)`: Indexing operator that returns a new `String` object starting from index `i`.
    - `void append(const String &other)`: Appends another string to the current one.
    - `friend std::ostream &operator<<(std::ostream &stream, const String &text)`: Outputs the string to an `ostream`.
 *
 * Requirements
    ------------
 *
    - C++17 or later
    - CMake 3.5 or later
    - g++ compiler
 *
 * Build Instructions
    ------------------
 *
 * To build the project, navigate to the project directory and run the following commands:
 *
```bash
make
```

## Clean Up

To remove the object files and the compiled executable, run:

```bash
make clean
```
##License

This project is licensed under the Apache-2.0 License - see the [LICENSE](LICENSE) file for details.
