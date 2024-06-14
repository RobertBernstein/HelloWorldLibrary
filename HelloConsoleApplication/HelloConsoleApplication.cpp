// HelloConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "..\HelloWorldLibrary\HelloWorldPrinter.h"

int main()
{
    // Initialize the DLL (if needed)
    // ...

    // Call the function from the DLL
    HelloWorldPrinter helloWorldPrinter;
    helloWorldPrinter.PrintHelloWorld();
    helloWorldPrinter.PrintGoodbyeWorld();

    // Clean up (if needed)
    // ...

    return 0;
}
