#include <iostream>

int myNum = 3;  // Global variable

void printNum();  // Function declaration

int main()
{
    int myNum = 1;  // Local variable

    printNum();

    std::cout << ::myNum << '\n';  // Access global myNum (3)

    return 0;
}

void printNum()
{
    int myNum = 2;  // Local variable inside printNum

    std::cout << ::myNum << '\n';  // Access global myNum (3)
}
/*std::cout << myNum;   // Uses local variable
std::cout << ::myNum; // Uses global variable*/




/*
========================================================
C++ CONCEPT: VARIABLE SCOPE
========================================================

Definition:
Scope means the area of a program where a variable can
be accessed or used.

There are different scopes:
1. Global Scope
2. Local Scope

--------------------------------------------------------
1. GLOBAL VARIABLE
--------------------------------------------------------

A variable declared outside all functions is called a
global variable.

It can be accessed by functions throughout the program.

Example:
*/

#include <iostream>

int myNum = 3;  // Global variable

/*
The variable myNum = 3 belongs to the global scope.

--------------------------------------------------------
2. FUNCTION DECLARATION
--------------------------------------------------------

A function declaration tells the compiler that a function
exists.

Syntax:

void printNum();

The actual function code can be written later.

--------------------------------------------------------
3. LOCAL VARIABLE
--------------------------------------------------------

A variable declared inside a function is called a local
variable.

It can only be used inside that function.

--------------------------------------------------------
4. SCOPE RESOLUTION OPERATOR ::
--------------------------------------------------------

The :: operator is called the Scope Resolution Operator.

It is used to access a global variable when a local
variable has the same name.

Syntax:

::variableName

--------------------------------------------------------
COMPLETE EXAMPLE
--------------------------------------------------------
*/

void printNum();  // Function declaration

int main()
{
    int myNum = 1;  // Local variable inside main()

    printNum();

    // Without ::, C++ uses the local variable
    std::cout << myNum << '\n';

    // With ::, C++ accesses the global variable
    std::cout << ::myNum << '\n';

    return 0;
}

/*
--------------------------------------------------------
FUNCTION DEFINITION
--------------------------------------------------------
*/

void printNum()
{
    int myNum = 2;  // Local variable inside printNum()

    // This uses the local variable of printNum()
    std::cout << myNum << '\n';

    // This accesses the global variable
    std::cout << ::myNum << '\n';
}

/*
========================================================
OUTPUT
========================================================

2
3
1
3

========================================================
HOW THE OUTPUT WORKS
========================================================

Global variable:
int myNum = 3;

Inside main():
int myNum = 1;

Inside printNum():
int myNum = 2;

When printNum() runs:

std::cout << myNum;
=> Uses local myNum = 2

std::cout << ::myNum;
=> Uses global myNum = 3

Then main() continues:

std::cout << myNum;
=> Uses local myNum = 1

std::cout << ::myNum;
=> Uses global myNum = 3

Therefore:

2
3
1
3

========================================================
IMPORTANT RULE
========================================================

If a local variable and global variable have the same
name:

    myNum     => local variable
    ::myNum   => global variable

Local variables hide/shadow global variables with the
same name.

========================================================
SHORT SUMMARY
========================================================

Global variable:
Declared outside functions.

Local variable:
Declared inside a function or block.

Function declaration:
Tells the compiler that a function exists.

Function definition:
Contains the actual code of the function.

:: (Scope Resolution Operator):
Accesses a variable from the global scope.

========================================================
*/