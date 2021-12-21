# CPP

The goal of these C++ modules is to learn the basic of an object oriented programming language.

## CPP00

:collision: **C++ input/output**

In C++, there's no specific syntax for streaming data input or output, i.e. we use a library 
of functions (``include <iostream>``) part of the C++ standard library.
This library uses the objects ``cin``, ``cout`` and ``cerr`` for sending data to and from the standard
streams input, output and error.

As part of the C++ standard library, these objects belong to the **std namespace**, a set of names used
to group and identify objects in order to avoid name collisions. 
So within a global namespace (an unnamed namespace), the std namespace's identifiers must be called in
a particular way ("using their full name") to be accessed:
- Prefixed: ``std::cin``
- Adding ``using namespace std;`` as a header

Here's the canonical "Hello, World!" program in C++:
```C++
#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
}
```
