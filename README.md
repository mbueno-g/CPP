# CPP

The goal of these C++ modules is to learn the basic of an object oriented programming language.


[00 Input-output](#input-output)

[00 Std namespace](#std-namespace)

[00 Classes](#classes)

* [Create a clase](#create-a-class)

* [Create an object](#create-an-object)

* [Define a method](#define-a-method)

* [Constructors](#constructors)

* [Destructors](#destructors)

[01 Memory allocation](#memory-allocation)

[01 Delete memory](#delete-memory)

[01 References](#references)

* [References vs pointer](#references-vs-pointers)

[01 Inheritance](#inheritance)

## CPP00

### Input-output

In C++, there's no specific syntax for streaming data input or output, i.e. we use a library 
of functions (``include <iostream>``) part of the C++ standard library.
This library uses the objects ``cin``, ``cout`` and ``cerr`` for sending data to and from the standard
streams input, output and error.

### Std namespace

As part of the C++ standard library, these objects belong to the std namespace, a set of names used to group and identify objects in order to avoid name collisions. 
So within a global namespace (an unnamed namespace), the std namespace's identifiers must be called in
a particular way ("using their full name") to be accessed:
- Prefixed using the scope resolution operator:  ``std::cin``
- Adding ``using namespace std;`` as a header

Here's the canonical "Hello, World!" program in C++:
```C++
#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
}
```

### Classes

C++ is an object-oriented programming language so everything is about classes, objects, attributes and methods.
| Concept | Meaning |
|:-------:|:-------:|
| **class** | A class is a data type defined by users|
|**object**| An object is an instance of a class|
|**attribute**| An attribute is a class member, i.e. a variable declared within a class |
|**method**|A method is a member function used to manipulate the attributes|


 -  #### Create a class
```C++
class <name_class>
{
    public:
        <class_members>
    private:
        <class_members>
    protected:
        <class_members>
};
```
**Public** and **private** keywords are access specifiers that define whether a class member (attributes and methods) can be access and modified from outside a class or not, respectively.
There's a third access specifier **protected** that allows members to be accessed only by inherited classes.

By default, if any access specifier is specified, all members of a class are private. This is considered a good practice called **encapsulation**. This method is about declaring your class attributes as private and provide public get and set methods if you want others to modify your class members.
    
  - #### Create an object
  
When a class is defined, only the specification is defined but no memory is allocated. To create an object means to allocate this memory:
```C++
<name_class> <name_object>
```
To access the class atributes with public access the dot operator is used: ``<name_object>.<public_class_member> ``.

However, to access a private class members we need to declare public methods (set and get methods), let's see an example:

```C++
class MyClass
{
    public:
        MyClass();
        int     x;
        int    get_y(void);
        void    set_y(int s);
    private:
        int y;
};

MyClass::MyClass()
{
    x = 0;
    y = 0;
}

int    MyClass::get_y()
{
    return y;
}

void    MyClass::set_y(int s)
{
    y = s;
}

int main()
{
    MyClass obj;
    
    obj.x = 1;
    obj.set_y(2);
    std::cout << "The value of x is: " << obj.x << std::endl;
    std::cout << "The value of y is: " << obj.get_y() << std::endl;
    return 0;
}
```
Output:
```
The value of x is: 1
The value of y is: 2
```
   - #### Define a method
  
There're two ways to define a class function:
1. Inside class definition: these functions are inline by default
2. Outside class definition: we need to use the scope resolution operator ``::`` along with class name and function name: ```<return_type> <class_name>::<function_name> ``


  - #### Constructors

A constructor is a type of method which initialized objects of a class and it is automatically called when an object is instanced. 
Moreover, constructors have the same name as the class itself, they don't have return type and they are public methods. As we know, if the constructor is not specify, the C++ compiler generates default constructor for object.

There're three types of constructors:
| Type | Declaration | Object|
|:----:|:-----------:|:-----:|
|Default constructor| ``<name_class>()``| ``<name_class> <name_object>;`` |
|Parameterized constructor | ``<name_class>(<parameters>) `` |  ``<name_class> <name_object>(<parameters_values>);`` -- Implicit call ; ``<name_class> <name_object> = <name_class>(<parameters_values>);``-- Explicit call |
|Copy constructor|``<name_method>(<parameters>)``| ``<name_class> <name_object> = <name_method>(<parameters_values>);``

  - #### Destructors

Destructors are another type of method that is called when the scope of the object ends. As constructors, they don't have return type and they are public methods. However, they don't have exactly the same name as the class, and ``~`` is added as a prefix.

## CPP01

### Memory allocation

Allocate N objects at once


### Delete memory


### References

A reference is a variable with an alternative name for an existing variable. 
This type of variables are declared as references by putting & in the declaration:
```
<type>& <variable_name>
```
They have different purposes:
1. Modify the passed parameters in a function: If a function receives a reference to a variable, it can modify the value of the variable. 
```C++
#include <iostream>

int main()
{
  int  x = 10;
  int& ref = x;
  
  // Value of x is now changed to 20
  ref = 20;
  
  // Value of x is now changed to 30
  x = 30;
  
  return 0;
}
```
2. Avoid copying large objects

  - #### References vs pointers

Although, both references and pointers have the purposes described below, there're some differences:
1. A pointer can be declared as void
```C++
int a = 10;
void *ptr = &a;
void& ref = a; // not valid
```
2. The pointer variable has n-levels/multiple levels of indirection, whereas the reference variable has only one single level of indirection.
```C++
int i = 10;
int *p = &i; //single pointer
int **pt = &p; //double pointer
int ***ptr = &pt; //triple pointer

int a = 5; 
int &S = a; // all this references refer to the same variable
int &S0 = S;
int &S1 = S0;
```
3. Referenced variable cannot be updated
4. Once a reference is created, it cannot be later made to reference another object
5. References cannot be NULL
6. A reference must be initialized when declared
7. Members of an object reference can be accessed with dot operator, unlike pointers where arrow operator (->) is needed

### Inheritance

Inheritance is the capability of a class to devide properties and characteristics from another class.
  - Sub Class / Derived Class : class that inherits from another class
  - Base Class / Super Class : class whose properties are inherited by sub class

The syntax for implementing inheritance is:
```C++
class <subclass_name> : <access_mode> <baseclass_name>
{
    //class members
}
```
❗A sub class doesn't inherit access to private data members but inherits a full parent object with all private members.

<!--
When you initialize an object of a derived class, the base class part has to be constructed first. If you don't initialize it yourself in the derived class' constructor by calling one of its constructors, the compiler will attempt use the default constructor of the base class. In your case the default constructor is not defined because you already provided a custom constructor.
-->

  - #### Modes of Inheritance

<table>
    <tr>
        <th rowspan = "2"> Access specifier base class </th>
        <th colspan = "3"> Type of inheritance </th>
    </tr>
    <tr align=center>
        <th> Public </th>
        <th> Protected </th>
        <th> Private </th>
    </tr>
    <tr align=center>
        <th> Public </td>
        <td> Public </td>
        <td> Protected </td>
        <td> Private </td>
    </tr>
    <tr align=center>
        <th> Protected </td>
        <td> Protected </td>
        <td>Protected </td>
        <td> Private </td>
    </tr>
    <tr align=center>
       <th> Private </td>
        <td> Not accessible</td>
        <td> Not accessible </td>
        <td> Not accessible </td>
    </tr>
</table>


  - #### Types of inherence

1. Single inheritance: a class is allowed to inherit from only one class
```
class <subclass_name> : <access_mode> <baseclass_name>
{
    <class_members>
}
```
2. Multiple inheritance: a class can inheritance from more than one class
```
class <subclass_name> : <access_mode> <baseclass_name1>, <access_mode> <baseclass_name2>,...
{
    <class_members>
}
```
3. Multilevel inheritance: a derived class is inherited by another derived class
4. Hierarchical inheritance: more than one derived class is created from a single base class




