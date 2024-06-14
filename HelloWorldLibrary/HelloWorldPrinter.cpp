#include "HelloWorldPrinter.h"
#include "..\..\GoodbyeWorldLibrary\GoodbyeWorldLibrary\GoodbyeWorldPrinter.h"

void HelloWorldPrinter::PrintHelloWorld()
{
    std::cout << "Hello, World!\n";
}

// This function is defined in the GoodbyeWorldLibrary project and we are calling it from the HelloWorldLibrary project.
void HelloWorldPrinter::PrintGoodbyeWorld()
{
    GoodbyeWorldPrinter goodbyeWorldPrinter;
    goodbyeWorldPrinter.PrintGoodbyeWorld();
}
