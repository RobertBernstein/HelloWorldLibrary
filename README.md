# HelloWorldLibrary

## Overview

This Visual Studio solution is 1 of 2 solutions demonstrating how to call one C++ DLL from another from a console application, the other solution being [GoodbyeWorldLibrary](https://github.com/RobertBernstein/GoodbyeWorldLibrary).

> [!WARNING]  
> This project requires the `GoodbyeWorldLibrary` project's `GoodbyeWorldLibrary.h`, `GoodbyeWorldLibrary.lib`, and 
> `GoodbyeWorldLibrary.dll` files in order to build and run correctly.

## Consuming the GoodbyeWorldLibrary dynamic link library

1. git clone the `GoodbyeWorldLibrary` project into the same top-level directory as this solution and build it.
    1. You may wish to have both solutions, `HelloWorldLibrary` and `GoodbyeWorldLibrary`, open in separate Visual Studio (VS) instances.
1. Build the `GoodbyeWorldLibrary` project.
1. Right-click on the `HelloWorldLibrary` project node in the VS Solution Explorer and choose Properties.
1. In the VC++ Directories property page, add the path to the directory that contains the `GoodbyeWorldLibrary` .lib file to Library Paths. Then, add the path to the library header file (.h) to Include Directories.
1. In the Linker > Input property page, add `GoodbyeWorldLibrary.lib` to Additional Dependencies.
1. You should now be able to build `HelloWorldLibrary`.
1. Once it successfully builds, copy `GoodbyeWorldLibrary.dll` into the `HelloWorldLibrary` build output directory, e.g., `x64\Debug`.
1. Set `HelloConsoleAppication` to be the Startup Application by right-clicking the Project name in the Solution Explorer and selecting that option.
1. Run `HelloConsoleAppication.exe`.
    1. Note that `HelloConsoleAppication.exe` is calling the `PrintGoodbyeWorld` method compiled into `HelloWorldLibrary.dll`, which is calling the `PrintGoodbyeWorld` method in `GoodbyeWorldLibrary.dll`.
1. You should see the following output:

```
Hello, World!
Goodbye, World!
```

Configuration Reference: [Consuming libraries and components](https://learn.microsoft.com/en-us/cpp/build/adding-references-in-visual-cpp-projects?view=msvc-170)
