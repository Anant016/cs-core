C++ is derived from C.

**Difference**
1. C++ is Object Oriented
2. C++ has classes(encapsulation) , unlike C (Scoping) via static member
3. C++ has Built in Exception Ehandling

**OOP**

Objects/classes - therfore, to easily **manage** and **reuse** code.

**Features of OOP**
1. Polymorphism
2. Abstraction
3. Encapsulation
4. Inheritance


<hr/>

1. #define - make named constants

2. Typedef- giving alternate name to existing data type.

3. TypeCasting - forcefully change variable of datatype

# Class  
- to create user defined data types
- It is a way of binding together related **data items**, and **associated functions**, that work upon a songle unit

### Inline function
Function defined inside the class.

### Member Function
can not be called directly in main (by dot operator)./private

### Nested Class 
Class within a class

### Containership
An object of class is defined in another class

### Access Specifiers/Visibility mode
1. Private

2. Protected

3. Public


### Abstract Classes
- for which object is not created, only used to pass properties to other class.

```
Note: Struct is by default public.
Memory Space is allocated, when object is created.
```

### Polymorphism/ Operator Overloading
More than one definition for **same name** function, but **different signatures**(parametere no. or types)

<hr/>

## Constructors
- same fun name
- no return type
- in public 
- called automatically, when object is created.

## Destructor function
- with tild sign (~)
- called when object goes out of scope
- deallocates memory location

## Copy Constructor
```c++

    Point(const Point &p2) {x = p2.x; y = p2.y; } 
  
    Point p1(10, 15); // Normal constructor is called here 
    Point p2 = p1; // Copy constructor is called here (Explicitly)
    Point p3(p1); // Implicitly

```

# Inheritance
creating new classes by passing properties of existing classes.

```c++
class A: public B{
};
```

```
Note -
- First constructor of base class is invoked, then of derived.

- Constructors and Destructors are not inherited, though they are invoked.
```
**Types of Inheritance**
1. Single

2. Multilevel

3. Multiple

4. Heirarchical

5. Hybrid

