  
  Unit tests 
  ===
 
  This project is part of my homework at Saint Petersburg University (SPbU), 
  where I implemented a simple text editor along with related tests. The project 
  consists of a text editor that supports basic operations such as adding, deleting, 
  and moving text. It also includes unit tests to ensure that the functionalities 
  work as expected.
 
  Testing
  -------
 
  The project uses **GoogleTest** for unit testing.
 
  Requirements
  ------------
 
  - C++17 or later
  - CMake 3.10 or later
  - GoogleTest
  - g++ compiler
 
  Build Instructions
  ------------------
 
  To build the project, navigate to the project directory and run the following commands:
 
  ```bash
  mkdir build
  cd build
  cmake ..
  make
  ```
 
  This will compile the code, run the tests, and generate the executable `run_tests`.
 
  Running Tests
  -------------
 
  To run the tests, use the following command:
 
  ```bash
  ./run_tests
  ```
 
  Clean Up
  --------
 
  To remove the object files and the compiled executable, run:
 
  ```bash
  make clean
  ```
 
  License
  -------
 
  This project is licensed under the Apache-2.0 License - see the [LICENSE](LICENSE) file for details.
 
