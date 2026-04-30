# Popout

A small C++ program that opens a blank GLFW window.

## What It Does

- Initializes GLFW.
- Creates an `800x600` window titled `Screen`.
- Keeps the window open until the user closes it.
- Polls window and input events each frame.

## Files

- `Popout.cpp` - the source code.
- `Popout.exe` - the compiled program, if already built.

## Requirements

- A C++ compiler.
- GLFW installed and linked correctly.

## Notes

This program currently only opens a blank window. It does not draw anything yet.

Future improvements could include:

- Checking whether the window was created successfully.
- Calling `glfwMakeContextCurrent(window)` before rendering.
- Cleaning up with `glfwTerminate()` before exiting.

## Copyright

Copyright (c) 2026. All rights reserved.
