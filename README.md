# C++ MVC_pattern(Console version)

This repository demonstrates a clean implementation of the **Model-View-Controller (MVC)** design pattern in C++ for a console-based application.

---

## Project Structure

- `Model.hpp` - Holds and manages application data
- `View.hpp` - Responsible for rendering output to the console
- `Controller.hpp` - Handles user interaction and coordinates updates between Model and View
- `main.cpp` - Entry point showcasing how components interact

---

### Requirements

- **Compiler**: Tested with `g++ 11.4.0` and `MSVC v143` (Visual Studio 2022)
- **C++ Standard**: C++17 or higher

---

## Usage Example

```cpp
Model model;
View view;
Controller controller(model, view);

controller.updateData(10); // Output: Data: 10
controller.updateData(20); // Output: Data: 20
```

