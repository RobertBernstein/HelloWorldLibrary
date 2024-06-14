#pragma once

#include <iostream>

class HelloWorldPrinter
{
public:
    __declspec(dllexport) void PrintHelloWorld();
    __declspec(dllexport) void PrintGoodbyeWorld();
};
