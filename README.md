# Fibonacci

This project contains a program written in C that uses the memoization method to find the Fibonacci sequence. The project is built with CMake, and unit tests are written with Google Test.

## Building the Project

To build the project, follow these steps:

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/fibonacci.git
    cd fibonacci
    ```

2. Create a build directory and navigate into it:
    ```sh
    mkdir build
    cd build
    ```

3. Run CMake to configure the project:
    ```sh
    cmake ..
    ```

4. Build the project:
    ```sh
    make
    ```

## Running the Tests

To run the unit tests, execute the following command in the build directory:
```sh
ctest
```

## Usage

To run the Fibonacci program, execute the following command in the build directory:
```sh
./Fibonacci
```