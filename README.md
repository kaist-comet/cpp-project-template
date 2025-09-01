# C++ Project Template

A simple C++ project template using CMake for easy building and project management.

## Project Structure

```
cpp-project-template/
├── CMakeLists.txt      # Build configuration
├── README.md           # This file
├── include/            # Header files
│   └── math_utils.h    # Math utility functions header
└── src/                # Source files
    ├── main.cpp        # Main source file
    └── math_utils.cpp  # Math utility functions implementation
```

## Prerequisites

- **CMake** (version 3.10 or higher)
- **C++ Compiler** supporting C++17 (GCC, Clang, or MSVC)

## Building the Project

### 1. Create a build directory
```bash
mkdir build
cd build
```

### 2. Configure the project
```bash
# For Debug build (includes debugging symbols)
cmake -DCMAKE_BUILD_TYPE=Debug ..

# For Release build (optimized)
cmake -DCMAKE_BUILD_TYPE=Release ..
```

### 3. Build the executable
```bash
cmake --build .
```

### 4. Run the program
```bash
# On Linux/macOS
./MyProject

# On Windows
MyProject.exe
```

## Quick Start (One-liner)

```bash
mkdir build && cd build && cmake .. && cmake --build . && ./MyProject
```

## Adding New Source Files

1. Add your `.cpp` files to the `src/` directory
2. Add your `.h` or `.hpp` header files to the `include/` directory
3. Update `CMakeLists.txt` to include the new files:
   ```cmake
   add_executable(${PROJECT_NAME} 
       src/main.cpp
       src/math_utils.cpp
       src/your_new_file.cpp
   )
   ```
4. Rebuild the project

## Customization

- **Project Name**: Change `MyProject` in `CMakeLists.txt` to your desired name
- **C++ Standard**: Modify `CMAKE_CXX_STANDARD` if you need a different C++ version
- **Compiler Flags**: Add additional flags in the appropriate build type section

Happy coding! 🚀