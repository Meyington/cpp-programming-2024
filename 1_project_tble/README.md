 
 # ProjectTexTabl
 
 * This project implements a class `Dataset` to handle data from CSV or TXT files 
 * and stores it in a dynamic table format. The dataset allows users to interact with 
 * the data in several ways, such as viewing the first or last few rows, inserting 
 * or removing rows, and performing basic statistical analysis on columns.
 
 ## Features
 
 - **Dataset Class**: 
   - The `Dataset` class loads data from a CSV or TXT file into a dynamic table.
   - The table can optionally include column names and an index column.
   
 - **Data Operations**:
   - **head(n)**: Displays the first `n` rows of the dataset (default: 5 rows).
   - **tail(n)**: Displays the last `n` rows of the dataset (default: 5 rows).
   - **insert(index, row)**: Inserts a new row at the specified index.
   - **remove(index)**: Removes the row at the specified index.
   - **describe(column_name)**: Provides basic statistics for the given column: 
     max, min, mean, and standard deviation.
   - **Overloaded [ ] operator**: Allows accessing rows and individual elements 
     by index (e.g., `dataset[0]` for the first row or `dataset[0][0]` for the first 
     element of the first row).
 
 ## Functions
 
 - `Dataset(const std::string &filepath, bool hasIndex = false, const std::vector<std::string> &columnNames = {})`: 
   Constructor that loads data from a file and optionally accepts column names and 
   a flag for the presence of an index column.
 - `void head(int n)`: Displays the first `n` rows of the dataset.
 - `void tail(int n)`: Displays the last `n` rows of the dataset.
 - `void insert(int index, const std::vector<std::string> &row)`: Inserts a new row at the specified index.
 - `void remove(int index)`: Removes the row at the specified index.
 - `void describe(const std::string &columnName)`: Prints statistical information 
   (max, min, mean, and standard deviation) for the specified column.
 - `std::vector<std::string>& operator[](int index)`: Accesses a row by index.
 - `std::string operator[](int rowIndex, int colIndex)`: Accesses an individual 
   element by two indices.
 
 ## Requirements
 
 - C++17 or later
 - CMake 3.10 or later
 - GoogleTest
 - g++ compiler
 
 ## Build Instructions
 
 * To build the project, navigate to the project directory and run the following commands:
 
 ```bash
 * mkdir build
 * cd build
 * cmake ..
 * make
 ```
 
 * This will compile the code, run the tests, and generate the executable `ProjectTexTabl`.
 
 ## Running Tests
 
 * To run the tests, use the following command:
 
 ```bash
 ./ProjectTexTabl
 ```
 
 ## Clean Up
 
 * To remove the object files and the compiled executable, run:
 
 ```bash
 * make clean
 ```
 
 ## License
 
 * This project is licensed under the Apache-2.0 License - see the [LICENSE](LICENSE) file for details.
 */
