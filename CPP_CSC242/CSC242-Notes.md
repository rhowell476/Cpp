#notes 
#csc242 
#cpp
#Programming #code


## Notes:
[CSC242-Week1-Notes](file:///C:\Documents\Documents\Important\School\National%20University\CSC-242-06-2021-Intro%20to%20Programming%20-%20June2021\Week1-Notes.txt)


TOC:
1. Ch 1.
	a.) C++ PPTX notes - Week 1 Lecture 1
	b.) Review (chapter resources)
		1.CODE - Welcome to C++!
2. Ch 2 -- C++ PPTX notes - Week 1 Lecture 2
	a.) Calculations
		1.CODE - Cirle Area Calculation
		2.CODE - compute area with console input
		3.CODE - compute average
	b.) Idenifiers
	c.) Variables
	d.) Assignment Statements
	e.) Declaring and Initializing in one step
	f.) Named Constants
 		1.sizeof function
	g.) Synonymous Types
	h.) Numeric Literals
	i.) Octal and hex literals
	j.) Double vs. float
	k.) Numeric Operators
	l.) Displaying Time
		1.CODE - DisplayTime
	m.) Exponent Operations
		1.CODE - ComputeChange
	n.) Overflow
		1.CODE - Converting Temperatures
	o.) Unix epoch time
		1.CODE - Computing time since...
	p.) Augmented Assignment Operators
	q.) Increment and Decrement Operators
	r.) Type Casting
		1.CODE - Keeping Two Digits After Decimal Points
	s.) Software Development Process
		1.CODE - Computing Loan Payments
	t.) Common Errors

3. Ch 2 -- C++ Review (Chapter Resource)
	a.) Alternative syntax
	b.) Expression
	c.) Constant
	d.) Casting Operator

4. Ch 3 --C++ Review (Chapter Resources)
5.) Ch 4 - Mathematical Functions, Characters, and Strings
	a.) C++ PPTX notes - Week 2 Lecture 1
	b.) CHARACTER DATA TYPE
	c.) ESCAPE SEQUENCES FOR SPECIAL CHARACTERS
		1. CODE - Escape Sequence Example
	d.) ASCII CODE
	e.) CHARACTER DATA TYPE INCREMENT AND DECREMENT OPERATORS
	f.) CASTING BETWEEN CHAR AND NUMERIC TYPES
	g.) NUMERIC OPERATORS ON CHARACTERS
		1. CODE - Converting a lowercase to uppercase
	h.) COMPARING AND TESTING CHARACTERS
		1. CODE - Enter a Character
	i.) STRING TYPE
	j.) CONCATENATING STRINGS
	k.) READING STRINGS
	l.) FORMATTING CONSOLE OUTPUT
		*setprecision(n) manipulator
		*fixed manipulator
		*setw(width) manipulator
	m.) WRITING TO A FILE
	n.) READ DATA TO A FILE
6.) WEEK VIDEOS
	a.) CODE - While loop
	b.) While Loops
		*ending a loop with Sentinal Value
	c.) CODE - While loop
7.) Ch 5 - Loops
	a.) DO-WHILE LOOPS
8.) Review (chapter resources)
	a.)CODE - Welcome to C++!
9.)Ch 2 -- C++ PPTX notes - Week 1 Lecture 2
	a.) Calculations
	b.) CODE - Cirle Area Calculation
	c.) CODE - compute area with console input
	d.) CODE - compute average
	e.) CODE - DisplayTime
	f.) CODE - ComputeChange
	g.) CODE - Converting Temperatures
	h.) CODE - Computing time since...
	i.) CODE - Keeping Two Digits After Decimal Points
	j.) CODE - Computing Loan Payments
10.) Review (chapter resources)
11.) Ch 3 --C++ Review (Chapter Resources)
	a.) CODE - Boolean radius
12.) Ch 4 - Mathematical Functions, Characters, and Strings
	a.) C++ PPTX notes - Week 2 Lecture 1
	b.) Mathematical Functions
	c.) CODE - Welcome to C++!
	d.) CODE - Converting a lowercase to uppercase
	e.) CODE - Enter a Character
	f.) CODE - ENTER A CHARACTER
	g.) CHARACTER FUNCTIONS
	h.) READ DATA TO A FILE
	i.) WRITING TO A FILE
	j.) CODE - While loop
	k.) CODE - While loop
	l.) CODE - Break statement
	m.) CODE - Continue statement
	n.) CODE - Smallest factor other than 2
	o.) CODE - Smallest factor other than 2 (without break)
13.) Review (chapter resources)
	a.) CODE - Welcome to C++!
14.) LECTURE 6/14/21 - WEEK 3
	a.) CODE - Inline Function
15.) Ch. 7 Single-Dimensional Arrays and C-Strings
	a.) CODE - Returning Arrays from Functions
	b.) CODE - Array Sorting
	c.) C-Strings (LEGACY PROGRAMMING)


----------------------------------------------------------------
----------------------------------------------------------------
# Ch 1.
----------------------------------------------------------------
----------------------------------------------------------------
#definitions 
variable - declared and initialized
constants
data types
	*type: offstream, char, int, double, float, long, short, string
expression
variable
automatic variables
static local variables - permanently allocated in memory for lifetime of the program
identifiers - sequence of characters consisting of letters, digits, underscores
literal - a constant value that appears directly in a program
characters
escape sequence
statement and statement block
code block
keyword
stream manipulators
	*stream insertion operator (<<)
preprocessor directive: #include
assignment operator (=)
overflow
operands
operators (+ - * / ++ -- < > ) #operations 
augmented operator (+= -= *= /= %=)
relational operators (== != < <= > >=)
postincrement / preincrement
postdecrement / predecrement
hexidecimal
objects: aka. an instance of a class
class
instance functions
void functions
formal parameter
parameter
actual parameter
pass-by-value
pass-by-reference
argument
function signature
function: a group of statemtns that performs a specific task
type casting
static casting


----
c++ does not report on underflow
1.0 + 1.0 + 1.0 == 3.0  //there is no guarantee that this is true

----

2.14---> 2 code examples
#header
--------
<HEADERS>
<ctime> -- time(0) 
<cstdlib> -- rand and srand functions, /*min, max, abs*/, exit(int)
<cmath>
<string> - string is a predefined class in this header
<cctype> - isdigit(ch), isalpha(ch), isalnum(ch)...
	<tolower>
<iomanip> -- setw(), setprecision(), fixed, showpoint
<limits> -- int_min, int_max, long_min, long_max, flt_min, flt_max, dbl_min, dbl_max
<fstream> -- eof() function, open(), close()

groupme.com/join_group/68549819/8cTYnsyc
----------------------------------------------------------------
# C++ PPTX notes - Week 1 Lecture 1
----------------------------------------------------------------
common errors: 
- missing braces
- missing semicolons
- missing quotation marks
- misspelling names
DSL - runs at 20x faster than regular modem. 
Modem (dial-up) runs at 56Mbps
cable modem - same speed as DSL --> generally faster than DSL
10BaseT - transfer data at 10 mbps (million bits per second)

Machine language - set of primitive instructions built into every computer. The computer's native language
Assembly language - developed to make programming easy
- an assembler is used to convert assembly language programs into machine code
- computers cannot run assembly language
- referred to as a low-level language
	
	
High-level Language - emerged in the 1950s. platform independent.
- instructions are called statements.
	
source program - program written in high-level language
compiler - used to translate the source program into a machine language program called an 'object program';
---> 	object program is often linked with other supporting library code before the object can
	be executed on the machine.
Source File ---> compiler ---> object file ---> linker ---> executable file
source program (source code) is translated into machine code. the translation is done using a programming tool
called an interpreter or compiler
- interpreter - reads one statement from source code, stanslates it to machine code and executes
		immediately
- compiler - translates the entire source code into a machine-code file and the machine-code file
		is then executed

dot pitch - the amount of space between pixels, measured in millimeters

C++ is general-purpose, object-oriented programming (OOP) language
- C, C++, Java, C# evolved from C.
- Java modeled after C++
- C# is a subset of C++, with some features similar to Java
- C evolved from B language which evolved from BCPL (Basic Combined Programming Language)
		- Martin richards developed BCPL in the mid-1960s
		- Ken Thompson included BCPL features into his version of B language to create UNIX systems
		at Bell Laboratories in 1970 on a DEC PDP-7 computer
		- both BCPL and B are typeless-every data item occupies a fixed-length 'word' or 'cell' in memory
		- Dennis Ritchie extended the B language by adding types and other features in 1971
	- developed by Bjarne Stroustrup at Bell Laboratories during 1983-1985.
C++11 was approved by ISO in 2011.

----------------------------------------------------------------
**Review (chapter resources)**
----------------------------------------------------------------
**Ch.1**
encoding scheme - set of rules that governs how a computer translates characters, numbers, and symbole
	into data the computer can actually work with
		Ex: ASCII encoding scheme
memory - consists of an ordered sequence of bytes for storing programs as well as data that the program
	is working with
	->every byte in the memory has a 'unique address' for storing and retrieving the data
	->bytes in memory can be accessed in any order
		Ex: RAM - random-access-memory
	->a memory byte is never empty
	-> volatile form of data storageS
CD can hold 700MB
DVD - "digital versatile disc" or "digital video disc"
DVD can hold 4.7 GB
USB - "Universal Serial Bus"

modifier key - ctrl, alt, shift


console input - receive input from the keyboard and the console output means to display on the monitor

#code 

----------------
### CODE - Welcome to C++!
----------------
include library
using namespace
main function
comment
output
successful return
----------------
```
#include <iostream>
using namespace std;

int main()
{
	// Display Welcome to C++ to the console
	cout << "Welcome to C++!" << endl;

	return 0;
}
```
--------------------------------
The statement in line 1:
```#include <iostream>```
```//``` is a compiler preprocessor directive that tells the compiler to include "iostream" library in the program
//iostream is needed to support console input and output
//the library like "iostream" is called a HEADER FILE in C++
//**the header file iostram is for every program needing console input and output**
----------------
preprocessor directive
library
header file
----------------
The statement in line 2:
using namespace std;
//namespace tells the compiler to use the standard namespace. std is abbreviation for standard
//namespace is a mechanism to avoid naming conflicts in a large program
//the names "cout" and "endl" in line 7 are defined in iostream library in the standard namespace
//BE SURE TO WRITE LINE 2 IN YOUR PROGRAM FOR PERFORMING ANY INPUT AND OUTPUT OPERATIONS

----------------
main function
block
statement terminator
----------------
The statement in line 7:
displays a message to the console 
"cout" pronounced see-out stands for console output
the 
	```<<```
operator (referred to as the stream insertion operator) sends a string to the console

a string must be enclosed in quotation marks
"endl" stands for end line. sending endl to the console ends a line and flushes the output buffer to ensure that the output is displayed immediately

----------------
console output
stream insertion operator
end line
----------------
The statement (line 9)
return 0;
//is placed at the end of every main function to exit the program
the value 0 indicates that the program has terminated with a successful exit

----------------
successful exit
	
----------------
Line 6 is a comment that documents what the program is and how it is constructed
comments are not programming statements and, thus, are ignored by the compiler
used by // on a line called a line comment
or
enclosed between /* and */ on several lines called a block comment or paragraph comment
// ignores all text after on the same line

----------------
comment
line comment
block comment
paragraph comment
	
----------------
/* above */

----------------
keyword (or reserved word)

**preprocessor directives are not C++ statements.**
**don't put semicolons at the end of a preprocessor directive, or it causes subtle errors
directives are not statements**
**some compilers will not compile if you put extra spaces between < and iostream or between iostream and >**

C++ soure programs are case sensistive.
syntax is galled grammer

----------------
### preprocessor
	
----------------
preprocessor: a program that processes a source file before it is passed down to the compiler
	->processes the directives
directives start with the # sign

----------------
### object file
	
----------------
the compiler translates the intermediate file into a machine-code file (known as object file)

----------------
### linker
	
----------------

the linker links the machine-code file with the supporting library files to form an executable file
on windows, the machine-code file is stored on disk with an .obj extension --> the executable files are stored
	with an .exe extension
on linux, the machine-code file has an .o extension and the executable files do not have file extensions

----------------
### .cpp source file
	
----------------
a C++ source file typically ends with the extension .cpp. Some compilers may accept other file name extensions
	*.c, .cp, .cpp

--------------------------------
### Syntax Errors
	
--------------------------------
syntax errors or compile errors result from errors in code construction such as:
- mistyping a keyword
- omitting necessary punctuation
- or using an opening brace without a corresponding closing brace

--------------------------------
### Runtime Errors
	
--------------------------------
runtime errors cause a program to terminate abnormally
occur while an application is running if the environment detects an operation that is impossible to carry out
input mistakes typically cause runtime errors
INPUT ERROR occurs when the program is waiting for the user to enter a value but the program cannot handle
EX: divide int by 0 when not a float

--------------------------------
### Logic Errors
--------------------------------
occurs when a program does not perform the way it was intended
--math problems are wrong like converting Celsius to Fahrenheit






----------------------------------------------------------------
----------------------------------------------------------------
# Ch 2 -- C++ PPTX notes - Week 1 Lecture 2
----------------------------------------------------------------
----------------------------------------------------------------



----------------------------------------------------------------
### Calculations
	
----------------------------------------------------------------

#code 
	
----------------
### CODE - Circle Area Calculation
	
----------------
```
#include <iostream>
using namespace std;

int main() {
	double radius;
	double area;

	// Step 1: Read in radius
	radius = 20;

	// Step 2: Compute area
	area = radius * radius * 3.14159;

	// Step 3: Display the area
	cout << "The area is ";
	cout << area << endl;
}
```
----------------
allocate the double variable radius memory
assign 20 to radius (in memory)
compute area and assign to variable area

#code 

----------------
### CODE - compute area with console input
	
----------------
```
#include <iostream>
using namespace std;

int main()
{
	// Step 1: Read in radius
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	// Step 2: Compute area
	double area = radius * radius * 3.14159;

	// Step 3: Display the area
	cout << "The area is " << area << endl;

return 0;
}
```
----------------

#code 

----------------
### CODE - compute average
	
----------------
```
#include <iostream>
using namespace std;

int main()
{
	// Prompt the user to enter three numbers
	double number1, number2, number3;
	cout << "Enter three numbers: ";
	cin >> number1 >> number2 >> number3;

	// Compute average
	double average = (number1 + number2 + number3) / 3;

	// Display result
	cout << "The average of " << number1 << " " << number2
	<< " " << number3 << " is " << average << endl;

return 0;
}
```
----------------




----------------------------------------------------------------
### Idenifiers
----------------------------------------------------------------
identifier is a sequence of characters that consists of letters, digits, and underscores (_)
-must start with a letter or an underscore
- cannot start with a digit
- cannot be a reserved word
- can be any length but your C++ compiler may impose restriction. use 31 characters or fewer
	
to ensure portability

----------------------------------------------------------------
### Variables
----------------------------------------------------------------
int - integer
double - double variable
char - character variable

----------------------------------------------------------------
### Assignment Statements
----------------------------------------------------------------
x = 1;		//assign 1 to x
radius = 1.0;	// assign 1.0 to radius
a = 'A';	//Assign 'A' to a;

----------------------------------------------------------------
### Declaring and Initializing in one step
----------------------------------------------------------------
int x = 1;
double d = 1.4;

----------------------------------------------------------------
### Named Constants
----------------------------------------------------------------
const datatype CONSTANTNAME = VALUE;
const double PI = 3.14159;
const int SIZE = 3;


----------------------------------------------------------------
----------------------------------------------------------------
use sizeof function to display on console the size of a type

```
cout << sizeof(int) << " " << sizeof(long) << " " << sizeof(double);
```



----------------------------------------------------------------
### Synonymous Types
----------------------------------------------------------------
short in is synonymous to short
unsigned short in is synonymous to unsigned short
unsigned int is synonymous to unsigned
long int is synonymous to long
unsigned long int is synonymous to unsigned long



----------------------------------------------------------------
### Numeric Literals
----------------------------------------------------------------
a literal is a constant value that appears directly in a program
EX: 34, 1000000 and 5.0 are litersals:

int i = 34;
long k = 1000000;
double d = 5.0;

numeric short range: -32768 to 32767
----------------------------------------------------------------
### Octal and hex literals
----------------------------------------------------------------
By default, an integer literal is a decimal number
To denote an octal integer literal, use a leading 0 (zero), and to denote
 a hexadecimal integer literal, use a leading 0x or 0X (zero x).

For example, the following code displays the decimal value 65535 for 
hexadecimal number FFFF and decimal value 8 for octal number 10.

```
cout << 0xFFFF << " " << 010;
```


----------------------------------------------------------------
### Double vs. float
----------------------------------------------------------------
double type values are more accurate than float type values

EX:
```
cout << "1.0 / 3.0 is " << 1.0 / 3.0 << endl;
```
--> displays 1.0 / 3.0 is 0.33333333333333331
```
cout << "1.0F / 3.0F is " << 1.0F / 3.0F << endl;
```
--> displays 1.0F / 3.0F is 0.3333333432674408

float and double types are used to represent numbers with a decimal point
Why are they called floating-point numbers? 
These numbers are stored into scientific notation. 
/*When a number such as 50.534e+1 is converted into scientific notation
such as 5.0534, its decimal point is moved (i.e., floated) to a new 
position.*/


----------------------------------------------------------------
### Numeric Operators #operations 
----------------------------------------------------------------
+	Addition
-	Subtraction
*	Multiplication
/	Division
%	Remainder

Remainder:
Remainder is very useful in programming.
For example, an even number % 2 is always 0 and an odd number % 2 is always 1. So you can use this property to determine whether a number is even or odd.
-- Suppose today is Saturday and you and your friends are going to meet in 10 days. What day is in 10 days? You can find that day is Tuesday using the following expression: 
-- Saturday is the 6th day in a week
-- A week has 7 days
-- The 2nd day in a week is Tuesday
-- After 10 days
-- (6 + 10) % 7 is 2  (remainder)
---> the symbol is called Modulus


----------------------------------------------------------------
### Displaying Time
----------------------------------------------------------------

#code 
	
----------------
### CODE - DisplayTime
	
----------------
```
#include <iostream>
using namespace std;

int main()
{
	// Prompt the user for input
	int seconds;
	cout << "Enter an integer for seconds: ";
	cin >> seconds;
	int minutes = seconds / 60;
	int remainingSeconds = seconds % 60;
	cout << seconds << " seconds is " << minutes <<
	" minutes and " << remainingSeconds << " seconds " << endl;

return 0;
}
```
----------------

#code 

----------------------------------------------------------------
### Exponent Operations
----------------------------------------------------------------
```
cout << pow(2.0, 3) << endl; 	// Display 8.0
cout << pow(4.0, 0.5) << endl;	// Display 2.0
cout << pow(2.5, 2) << endl; 	// Display 6.25
cout << pow(2.5, -2) << endl; 	// Display 0.16
```

the pow function is defined in <cmath> header file

#code 
	
----------------
CODE - ComputeChange
----------------
```
#include <iostream>
using namespace std;
int main(){
// Receive the amount
cout << "Enter an amount in double, for example 11.56: ";
double amount; cin >> amount;
int remainingAmount = static_cast<int>(amount * 100);
// Find the number of one dollars
int numberOfOneDollars = remainingAmount / 100;
remainingAmount = remainingAmount % 100;
// Find the number of quarters in the remaining amount
int numberOfQuarters = remainingAmount / 25;
remainingAmount = remainingAmount % 25;
// Find the number of dimes in the remaining amount
int numberOfDimes = remainingAmount / 10;
remainingAmount = remainingAmount % 10;
// Find the number of nickels in the remaining amount
int numberOfNickels = remainingAmount / 5;
remainingAmount = remainingAmount % 5;
// Find the number of pennies in the remaining amount
int numberOfPennies = remainingAmount;
// Display results
cout << "Your amount " << amount << " consists of" << endl <<
"  " << numberOfOneDollars << " dollars" << endl <<
"  " << numberOfQuarters << " quarters" << endl <<
"  " << numberOfDimes << " dimes" << endl <<
"  " << numberOfNickels << " nickels" << endl <<
"  " << numberOfPennies << " pennies";

return 0;
}
```
----------------


----------------------------------------------------------------
### Overflow
----------------------------------------------------------------
When a variable is assigned a value that is too large to be stored,
 it causes overflow
ex: short value = 32767 + 1;

#code 

----------------
### CODE - Converting Temperatures
----------------
```
#include <iostream>
using namespace std;

int main()
{
	// Enter a degree in Fahrenheit
	double fahrenheit;
	cout << "Enter a degree in Fahrenheit: ";
	cin >> fahrenheit;

	// Obtain a celsius degree
	double celsius = (5.0 / 9) * (fahrenheit - 32);

	// Display result
	cout << "Fahrenheit " << fahrenheit << " is " <<
	celsius << " in Celsius" << endl;

return 0;
}
```
----------------


----------------------------------------------------------------
### Unix epoch time
----------------------------------------------------------------
The time(0) function in the ctime header file returns the current time in 
seconds elapsed since the time 00:00:00 on January 1, 1970 GMT, as shown 
in Figure 2.1. This time is known as the Unix epoch because 1970 was the 
year when the Unix operating system was formally introduced. 
----------------------------------------------------------------
*the time function is defined in the <ctime> header file

#code 

----------------
### CODE - Computing time since...
	
----------------
```
#include <iostream>
#include <ctime>
using namespace std;

int main() {
// Obtain the total seconds since the midnight, Jan 1, 1970
int totalSeconds = time(0);

// Compute the current second in the minute in the hour
int currentSecond = totalSeconds % 60;

// Obtain the total minutes
int totalMinutes = totalSeconds / 60;

// Compute the current minute in the hour
int currentMinute = totalMinutes % 60;

// Obtain the total hours
int totalHours = totalMinutes / 60;

// Compute the current hour
int currentHour = totalHours % 24;

// Display results
cout << "Current time is " << currentHour << ":"
<< currentMinute << ":" << currentSecond << " GMT" << endl;

return 0;
}
```
----------------

#operations 

----------------------------------------------------------------
### Augmented Assignment Operators
----------------------------------------------------------------
+=	Example: i += 8 	Equivalent: i = i + 8
-+	Example: f -= 8 	Equivalent: f = f - 8
*=	Example: i *= 8 	Equivalent: i = i * 8
/=	Example: i /= 8 	Equivalent: i = i / 8
%=	Example: i %= 8 	Equivalent: i = i % 8
----------------------------------------------------------------



----------------------------------------------------------------
### Increment and Decrement Operators
----------------------------------------------------------------
Operator	Name		Description	

++var		preincrement	The expression (++var) increments var by 1 and evaluates 
				to the new value in var after the increment.

var++		postincrement	The expression (var++) evaluates to the original value 
				in var and increments var by 1. 

--var		predecrement	The expression (--var) decrements var by 1 and evaluates 
				to the new value in var after the decrement. 

var--		postdecrement   The expression (var--) evaluates to the original value 
				in var and decrements var by 1. 


int i = 10;
int newNum = 10 * i++;   	//same effect as int newNum = 10 * i
				//i = i + 1;

int i = 10;
int newNum = 10 * (++i);	//same effect as i = i + 1;
				//int newNum = 10 * i;

using increment and decrement operators makes expressions short
it also makes them complex and difficult to read
avoid using these operators in expressions that modify multiple variables,
or the same variable for multiple times such as this: int k = ++i+i.



----------------------------------------------------------------
### Type Casting
	
----------------------------------------------------------------
implicit casting
double d = 3;   (type widenine)

explicit casting
int i = static_cast<int>(3.0)  (type narrowing)
int i = (int)3.9;  (Fraction part is truncated)

casting does not change the variable being cast
The GNU and Visual C++ compilers will give a warning when you narrow a type unless you use static_cast to make the conversion explicit. 

#code 
EX:
----------------
### CODE - Keeping Two Digits After Decimal Points
	
----------------
```
#include <iostream>
using namespace std;

int main()
{
	// Enter purchase amount
	double purchaseAmount;
	cout << "Enter purchase amount: ";
	cin >> purchaseAmount;

	double tax = purchaseAmount * 0.06;
	cout << "Sales tax is " << static_cast<int>(tax * 100) / 100.0;

	return 0;
}
```
----------------



----------------------------------------------------------------
### Software Development Process
----------------------------------------------------------------
Requirement Specification
	System Analysis
		System Design
			Implementation
				Testing
					Deployment
						Maintenance

Requirement Specification:
formal process that seeks to understand the problem and document in detail
what the software system needs to do. this involves interaction between users
and designers

System Analysis:
seeks to analyze the business process in terms of data flow, and to identify
the system's input and output
-part of the analysis entails modeling the system's behavior
-the model is intended to capture the essential elements of the system to define
services to the system

System Design:
The process of designing the system's components
-this phase involces the use of many levels of abstraction to decompose the problem
into manageable components, identify classes and interfaces,
and establish relationships among the classes and interfaces

IPO
Input, Process, Output
-the essence of system analysis and design is input, process, and output
-is called IPO

Implementation
-the process of translating the system design into programs
-separate programs are written for each component and put to work together
-phase requires use of a programming language like Java
-implementation involves coding, testing, and debugging

Testing
ensures that the code meets the requirements specification and weeds out bugs
-an independent team of software engineers not involved in the design and 
implementation of the project usually conducts such testing

Deployment
makes the project available for use
-for Java applet, this means installing it on a Web server, for a Java application,
installing it on the client's computer

Maintenance
concerned with changing and improving the product
-a software product must continue to perform and improve in a changing environment
-this requires periodic upgrades of the product to fix newly discovered bugs
and incorporate changes

#code
EX: Computing Loan Payments
	
----------------
###CODE - Computing Loan Payments
	
----------------
```
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// Enter yearly interest rate
	cout << "Enter yearly interest rate, for example 8.25: ";
	double annualInterestRate;
	cin >> annualInterestRate;
	// Obtain monthly interest rate
	double monthlyInterestRate = annualInterestRate / 1200;

	// Enter number of years
	cout << "Enter number of years as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;

	// Enter loan amount
	cout << "Enter loan amount, for example 120000.95: ";
	double loanAmount;
	cin >> loanAmount;

	// Calculate payment
	double monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, numberOfYears * 12));
	double totalPayment = monthlyPayment * numberOfYears * 12;

	monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
	totalPayment = static_cast<int>(totalPayment * 100) / 100.0;

	// Display results
	cout << "The monthly payment is " << monthlyPayment << endl << "The total payment is " << totalPayment << endl;

return 0;
}
```
----------------



----------------------------------------------------------------
### Common Errors
	
----------------------------------------------------------------
1-Undeclared/uninitialized variables and unused variables
2-integer overflow
3-round-off errors
4-unintended integer division
5-forgetting header files




----------------------------------------------------------------
----------------------------------------------------------------
# Review (chapter resources)
----------------------------------------------------------------
----------------------------------------------------------------
**2.2**
Algorithm: describes how a problem is solved by listing the actions that must be taken and the
	order of their execution
-algorithms can be described in natural languages or in psuedocode
Psuedocode: natural language mixed with some programming code
EX algorithm:
int main()
// Step 1: Read in radius
// Step 2: Compute area
// Step 3: Display the area

variable - a value stored in the computer's memory
declare a data type is known as declaring variables
-types are integer, floating-point number, etc...
primitive data types, or fundamental types: - C++ provided simple data type for representing integers, floating point numbers,
characters, and boolean types

cin  //console input. known as a prompts (message before)
multiple input:
cin >> x1 >> x2 >> x3;

identifiers are the names that identify elements such as variables and functions in a program

----------------------------------------------------------------
### Alternative syntax
----------------------------------------------------------------
int i(1), j(2);   //this is the same as int i = 1, j = 2;

i = j = k = l;  //value is assigned to multiple variables
		//is equivalent to k = l; j = k; i = j;

a variable without an assigned value is uninitialized
every variable has a scope: the scope of a variable is part of the program where the variable
	can be referenced
a variable must be declared and initialized before it can be used

----------------------------------------------------------------
### Expression
----------------------------------------------------------------
represents a computation involving values, variables, and operators that evaluates to a value

----------------------------------------------------------------
### Constant
----------------------------------------------------------------
a named constant, or simply constant, represents permanent data that never changes
declare const keyword		//ex: PI. don't keep typing pi, just type const

a constant must be declared and initialized in the same statement
by convention, constants are named in uppercase
**C++ defines constatnts INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, FLT_MIN, FLT_MAT, DBL_MIN, DBL_MAX
	in the <limits> header file

three types of integers: short, int, long
each has signed and unsigned
--> all numbers represented by unsigned integer are nonnegative

EX: 
const double PI = 3.14155555;
const double EPSILON = 1E-14;

----------------------------------------------------------------
### Casting Operator
----------------------------------------------------------------
static_cast  //convert a value from one type to another explicitly

static_cast<type>(value)
-> value is a variable, a literal, or an expression
-> type is the type you wish to conver the value to

EX: 
```
cout << static_cast<int>(1.7);
```
---> displays 1. when a double value is vast into an int value, thefractional part is truncated

EX:
```
cout << static_cast<double>(1) / 2;
```
---> displays 0 because 1 and 2 are both integers and the resulting value should also be
an integer

static casting can also be done using (type) syntax
EX:
(target)variable
```
int i = (int)5.4;	//this is the same line as int i = static_cast<int>(5.4);
```
----------------
widen a type by casing a type of smaller range to larger range
narrowing is a large range to a small range



----------------------------------------------------------------
----------------------------------------------------------------
# Ch 3 --C++ Review (Chapter Resources)
----------------------------------------------------------------
----------------------------------------------------------------
numbers are calculated in base 10
-->hex: 0-9ABCDEF
FF => 255 = 15*16 + 15


----------------------------------------------------------------
### Selection Statements
----------------------------------------------------------------
selection statements: statements that let you choose actions with alternative courses


#booleanAlgebra 
----------------------------------------------------------------
Boolean expression
Boolean value
bool data type
relational operator
boolean variable
----------------------------------------------------------------
the bool Data Type
bool - declares a variable with the value either true or false

six relational operators
#code #operations 
```
<
<=
>
>=
==
!=

//(=) is used for assignement
//(==)is two equal signs like "is equal to"
```
boolean type is used to declare Boolean variables
EX:
bool lightsOn = true;

a nonzero value evaluates to true. a zero value evaluates to false

EX:
bool b1 = -1.5; 	//same as bool b1 = true
bool b2 = 0; 		//same as bool b2 = false
bool b3 = 1.5;		//same as bool b3 = true



----------------------------------------------------------------
### if statement
----------------------------------------------------------------
```
if (boolean-expression)
{
	statement(s);
}
```

a diamond box is used to denote a Boolean condition and a rectangle box
represents statements

#code 
EX:
```
	if (score >= 90)
		cout << "Score is A" << endl;
	else if (score >=80)
		cout << "score is B" << endl;
```
the else clause matches the most recent if clause in the same block
nested if statements must be broken through curly bracket

#code
EX:
```
if (i > j)
	if (i > k)
		cout << "i is greatest";
else
	cout << "i is least";
```
**one line of code after if statement does not need braces**

#code
----------------
### CODE - Boolean radius
----------------
```
#include <iostream>
using namespace std;
int main()
{
	if (radius >= 0)
		{
		area = radius * radius * PI;
		cout << "The area for the circle of " <<
		" radius " << radius << " is " << area;

return 0;
}
```
----------------


groupme.com/join_group/68549819/8cTYnsyc
	
----------------------------------------------------------------
----------------------------------------------------------------
# Ch 4 - Mathematical Functions, Characters, and Strings
----------------------------------------------------------------
----------------------------------------------------------------
#definitions
----------------------------------------------------------------
char type
encode characters using ASCII code
escape sequences for special characters
cast character to an integer
cast integer to character
CODE: DisplayRandomCharacter, GuessBirthday
convert hexidecimal to decimal
CODE:HexDigit2Dec
represent strings using string type
introduce objects and instance functions
use subscript operator
use + operator to concatenate strings
compare strings using relational operators
CODE: LotteryUsingStrings
stream manipulators
----
string subscript operator
string
whitespace characters: ' ', '\t', '\f', '\r', '\n'
----------------------------------------------------------------
## C++ PPTX notes - Week 2 Lecture 1
----------------------------------------------------------------
MOTIVATIONS: estimate the area enclosed by four cities, given GPS locations

#definitions 
----------------------------------------------------------------
Mathematical Functions
TRIG FUNCTIONS
EXPONENT FUNCTIONS
ROUNDING FUNCTIONS
MIN, MAX, ABS FUNCTIONS
----------------------------------------------------------------
#headers 
```
<cmath> header
```	

*trigonometric functions
*exponent functions (pow(x,1)) --> x ^ 1
*service functions
	-rounding, min, max, and absolute functions

**TRIG FUNCTIONS**
sin(radians)		returns trig sine of an angle in radians
cos(radians)		returns trig cosine of an angle in radians
tan(radians)		returns the trig tangent of angle in radians
asin(a)			returns the angle in radians for the inverse of sine
acos(a)			returns angle in radians for inverse of cosine
atan(a)			returns angle in radians for inverse of tangent

**EX:**
sin(0) returns 0.0
sin(270* PI / 180) returns -1.0
sin(PI / 6) returns 0.5
sin(PI /2) returns 1.0
cos(0) returns 1.0
cos(PI/6) returns 0.866
cos(PI /2) returns 0
asin(0.5) returns 0.523599 (same as pi/6)
acos(0.5) returns 1.0472 (same as pi/3)
atan(1.0) returns 0.785398 (same as pi/4)


**EXPONENT FUNCTIONS**
exp(x)			returns e raised to power of x (e^x)
log(x)			returns the natural logarithm of x(ln(x) = log(base,e)(x))
log10(x)		returns the base 10 logarithm of x(log(base 10(x))
pow(a,b)		returns a raised to the power of b (a^b)
sqrt(x)			returns the square root of x (sqrt(x)) for x >=0

**EX:**
exp(1.0) returns 2.71828
log(E)returns 1.0
log10(10.0) returns 1.0
pow(2.0, 3) returns 8.0
sqrt(4.0) returns 2.0
sqrt(10.5) returns 3.24

**ROUNDING FUNCTIONS**
the floor and ceiling functions map a real number to the larges previous or the smallest
following integer. floow = largest integer not greater than x
ceiling = smallest integer not less than x

ceil(x)			x is rounded up to its nearest integer. integer is returned
			as a double value
floor(x)		x is rounded down to its nearest integer. integer is returned
			as a double value

**EX: **
ceil(2.1) returns 3.0
ceil(2.0) returns 2.0
ceil (-2.0) returns -2.0
ceil(-2.1) returns -2.0
floor(2.1) returns 2.0
floor(2.0) returns 2.0
floor(-2.0) returns -2.0
floor(-2.1) returns -3.0


**MIN, MAX, ABS FUNCTIONS**
--> defined in the <cstdlib> header
min and max functions return the minimum and maximum numbers of two numbers 
-- (int, long, float, or double)
abs function returns absolute value of the number
-- (int, long, float, or double)
max(2,3) returns 4
max (2.5, 3.0) returns 4.0
min(2.5, 4.6) returns 2.5
abs(-2) returns 2
abs(-2.1) returns 2.1

----------------------------------------------------------------
### CHARACTER DATA TYPE
----------------------------------------------------------------
character data type represents a single character


EX:
char letter - 'A'; (ASCII)
char numChar = '4'; (ASCII)

#code 
----------------
CODE - Welcome to C++!
----------------
```
cout << "Enter a character: ";
char ch;
cin >> ch;
```
----------------
*a string literal must be enclosed in quotation marks (" ")
* a character literal is enclosed in single quotation marks
"A" is a string and 'A' is a character



----------------------------------------------------------------
### ESCAPE SEQUENCES FOR SPECIAL CHARACTERS
----------------------------------------------------------------
*print a message with quotation marks in the output

|Escape Sequence	|	Name		|	ASCII Code|
	|----------------|----------|------------|
| \t	|		Tab		|	9|
| \n	|		Linefeed	|	10|
| \\	|		Backslash	|	92|
| \"	|		Double Quote	|	34|
| \b	|		Backspace	|	8|
| \f		|	Formfeed (new page)	|12|
| \r	|		Carriage return	|	13|

```
cout << "He said \"Programming is fun\"" << endl;
```
** using endl ensure that the output is displayed immediately on all platforms**
--> \n is not immediate??

#code
----------------
### CODE - Escape Sequence Example
----------------
```
// HEADER
#include <iostream>
using namespace std;


int main()
{

char newline = '\n';
char tab = '\t';
char backslash = '\\';

cout << "Newline character: " << newline << newline << "ending" << endl; // Newline character:
  //  ending
cout << "Tab character: " << tab << "ending" << tab << "One Tab" << endl; // Tab character : ending
cout << "Tab character: " << tab << "ending" << tab << tab << "Two Tabs" << endl; // Tab character : ending

cout << "Backslash character: " << backslash << "ending" << endl; // Backslash character : \ending

return 0;
}
```
----------------


----------------------------------------------------------------
### ASCII CODE
----------------------------------------------------------------
- a character is stored in a computer as a sequence of 0s and 1s
- mapping a character to its binary representation is called encoding
- there are encoding schemes
- most computers use ASCII (American Standard Code for Information Interchange)
	-> 8-bit encoding scheme for all uppercase and lowercase letters, digits
	punctuation marks, and control characters

|	Characters | ASCII Code 	|
	|-----------|---------------|
| 	'0' to '9'  	| 48 to 57			|
| 	'A' to 'Z'		| 65 to 90 			|
|	'a' to 'z'		| 97 to 122			|


----------------------------------------------------------------
### CHARACTER DATA TYPE INCREMENT AND DECREMENT OPERATORS
----------------------------------------------------------------
*increment and decrement operators

#code
EX:
```
char ch = 'a';
cout << ++ch;
```

----------------------------------------------------------------
### CASTING BETWEEN CHAR AND NUMERIC TYPES
----------------------------------------------------------------
```
int i = 'a';
// Same as int i = static_cast<int>('a');

char c = 97;
// Same as char c = static_cast<char>(97);
```

'a' - 'A' is the same as 'b' - 'B'. For a lowercase letter ch, 
its corresponding uppercase letter is static_cast<char>('A' + (ch - 'a')).
*when an integer is cast into a char, only its lower 8 bits are used, the other part is ignored
EX: 	char c = 0XFF41  // hex code 41 is char 'A'. variable c is character A

*when a float is cast into a char, the floating-point value is first cast into an int
	which is then cast into a char
EX:	char c = 65.25; 	//65 is assigned letter "A". variable c is character A

*when a char is cast into a numeric type, the character's ASCII is cast into the specified
	numeric type
EX: 	int i = 'A'; 	//the ASCII code of character A is assigned to I; variable i is 65

-the char type is treated as if it were an integer of the byte size
-all numeric operators can be applied to char operands

----------------------------------------------------------------
### NUMERIC OPERATORS ON CHARACTERS
----------------------------------------------------------------
-char type is treated as if it is an integer of the byte size
-all numeric operators can be applied to char operands
-a character operand is automatically cast into a number if the other operand is a
	number or a character

#code
EX:
```
	int j = 2 + 'a';
	cout << "j is " << j << endl;
	cout << j << " is the ASCII code for character \"" << static_cast<char>(j) << "\"" << endl;
//cout
//j is 99
//99 is the ASCII code for character "c"
```
	
#code 
	
----------------
### CODE - Converting a lowercase to uppercase
----------------
```
#include <iostream>
using namespace std;

int main() {
char lowercaseLetter;
cout << "Enter a lowercase letter: ";
cin >> lowercaseLetter;

char uppercaseLetter = static_cast<char>('A' + (lowercaseLetter - 'a'));

cout << "The corresponding uppercase letter is " << uppercaseLetter << endl;

return 0;
}
```
----------------



----------------------------------------------------------------
### COMPARING AND TESTING CHARACTERS
----------------------------------------------------------------
-two characters can be compared using comparison operators

#code
----------------
### CODE - Enter a Character
----------------
```
#include <iostream>
using namespace std;

int main()
{
char ch;
cout << "Enter a character: ";
cin >> ch;

if (ch >= 'A' && ch <= 'Z')
cout << ch << " is an uppercase letter" << endl;
else if (ch >= 'a' && ch <= 'z')
cout << ch << " is a lowercase letter" << endl;
else if (ch >= '0' && ch <= '9')
cout << ch << " is a numeric character" << endl;

return 0;
}
```
----------------


#code 
----------------
### CODE - ENTER A CHARACTER
----------------
```
// random character generator
	srand(time(0));
	int ch_upper = 65 + rand() % 25;
	int ch_lower = 97 + rand() % 25;

	cout << "ch_upper is :" << static_cast<char>(ch_upper) << endl;
	cout << "ch_lower is :" << static_cast<char>(ch_lower) << endl;
```
----------------



----------------------------------------------------------------
### CHARACTER FUNCTIONS
----------------------------------------------------------------
|Function	|	Description|
	|---------|-----------|
| isdigit(ch)	|	returns true if the specified character is a digit|
| isalpha(ch)	|	returns true if the specified character is a letter|
| isalnum(ch)	|	returns true if the specified character is a letter or digit|
| islower(ch)	|	returns true if the specified character is a lowercase letter|
| isupper(ch)	|	returns true if the specified character is an uppercase letter|
| isspace(ch)	|	returns true if the specified character is a whitespace character|
| tolower(ch)	|	returns the lowercase of the specified character|
| toupper(ch)	|	returns the uppercase of the specified character|

	
```
<cctype> header
```
----------------------------------------------------------------
### CONVERTING HEXADECIMAL DIGIT TO A DECIMAL VALUE
----------------------------------------------------------------
**write a program**



----------------------------------------------------------------
### STRING TYPE
----------------------------------------------------------------
string s;
string message "Programming is fun";

-string type is not a primitive type
-this is an object type
->here message represents a string object with contents Programming is fun.
-objects are defined using classes
	*string is a predefined class in the <string> header file
-an object is also known as an instance of a class

Function		Description
length()		returns the number of characters in the string
size()			same as length();
at(index)		returns the character at the specified index from the string

*by default, a string is initialized to an empty string
*an empty string literal can be written as ""
*the following statements have the same effect:
string s;
string s = "";

#code
EX:
```
string s = "";
cout << message.length() << endl;
cout << message.at(0) << endl;
string s = "Bottom";
cout << s.length() << endl;
cout << s.at(1) << endl;
```
--------
String Subscript Operator
stringName[index]
*use the syntax to retrieve and modify the character in a string.

#code
EX:
```
string message = "ABCD";
s[0] = 'P';
cout << s[0] << endl;
```

#code 
----------------------------------------------------------------
### CONCATENATING STRINGS
----------------------------------------------------------------
```
string S3 = S1 + S2;

string "ABC";
s += 'D';
```
---> therefore, the new s is "ABCD".


----------------------------------------------------------------
### READING STRINGS
----------------------------------------------------------------
a string can be read from the keyboard using the cin object
#code 
EX:
```
string city;
cout << "Enter a city: ";
cin >> city; // Read to string city
cout << "You entered " << city << endl;
```
--------
getline function in the <string> header file reads a string from the keyboard
and uses the following syntax;
getline(cin, s, delimitCharacter)


----------------------------------------------------------------
### FORMATTING CONSOLE OUTPUT
setprecision(n) manipulator
fixed manipulator
setw(width) manipulator
----------------------------------------------------------------
```
	header<iomanip>
```
|Manipulator	|	Description|
	|----------|-----------|
|setprecision(n)	|	sets the precision of a floating-point number|
|fixed		|	displays floating-point numbers in a fixed-point notation|
|showpoint	|	causes a floating-point number to be displayed with	a decimal point and trailing zeros even if it has no fractional	part|
|setw(width)	|	specifies the width of a print field|
|left		|	justifies the output to the left|
|right	|		justifies the output to the right|


**setprecision(n) manipulator**
-specify the number of digits of a floating point number. n is number of sig. digits
-can be set after a "fixed" manipulator (below example) --> changes the precision
	of after decimal place

#code 
EX: 
```
double number = 12.34567;
cout << setprecision(3) << number << " "
<< setprecision(4) << number << " "
<< setprecision(5) << number << " "
<< setprecision(6) << number << endl;
```
12.3	12.35	12.346	12.3457


EX:
```
double monthlyPayment = 345.4567;
double totalPayment = 78676.887234;
cout << fixed << setprecision(2)
<< monthlyPayment << endl
<< totalPayment << endl;
```
**--> this changes the specified number of digits (n) after the decimal point
** fixed cal also force a display to be nonscientific notation
```
EX:
cout << setprecision(6);
cout << 1.23 << endl;
cout << showpoint << 1.23 << endl;
cout << showpoint << 123.0 << endl;
```
Display: 1.23	1.23000	123.000




**setw(width) manipulator
```
cout << setw(8) << "C++" << setw(6) << 101 << endl;
cout << setw(8) << "Java" << setw(6) << 101 << endl;
cout << setw(8) << "HTML" << setw(6) << 101 << endl;
```
**left and right manipulator
```
cout << right;
cout << setw(8) << 1.23 << endl;
cout << setw(8) << 351.34 << endl;
```
display:
	_ _ _ _ 1.23
	_ _ 351.34
EX: display a Table:

|Degrees |  Radians |  Sine |     Cosine |   Tangent|
	|--|--------|----------|-----------|-----------|
|30  |      0.5236  |  0.5000  |  0.8660  |  0.5773|
|60   |     1.0472  |  0.8660   | 0.5000  |  1.7320|

```
cout << left
cout << setw(6) << 30 << 0.5236 << 0.5000 << 0.8660 << 0.5773
```
----------------------------------------------------------------
### WRITING TO A FILE
----------------------------------------------------------------
ofstream type:

ofstream output;
EX:  output.open("numbers.txt");

-to specify a file, invoke the open function from output object as above
-this statement createds a file named numbers.txt. If this file already exists,
	the contents are destroyed and a new file is created
-invoking the open function is to associate a file with the stream

Single line statement to invoke the object and create a file output:
ofstream output("numbers.txt");


stream insertion operator << writes the same way:
output << 95 << " " << 56 << " " << 34 << endl;
--> the statement writes numbers 95, 56, 34 to the file.

----------------------------------------------------------------
### READ DATA TO A FILE
----------------------------------------------------------------
declare a variable of the ifstream type
EX:
ifstream input;

-to specity a file, invoke the open function from input:
input.open("numbers.txt");

-the statement opens a file names numbers.txt for input
-if the file does not exist unexpected error may arise
-optionally, create a file input object and open the file in one statement

ifstream input("numbers.txt");


*read data with stream extraction operator >>

input >> score1; input >> score2; input >> score3;

*after reading the file, invoke the close function from input:
input.close();

----------------------------------------------------------------
### READ ALL DATA FROM A FILE
----------------------------------------------------------------
-use eof function
-include fstream header
	-open file
	-end of file?
	-input from file
	-close file

----------------------------------------------------------------
WEEK VIDEOS
while
----------------------------------------------------------------
while (counter < 100)


#code 
					 
----------------
### CODE - While loop
----------------
```
int counter = 0;

while (counter < 100)
{
	cout << "Welcome to C++" << endl;
	counter = counter +1;
}
return 0;
```
----------------



----------------------------------------------------------------
While Loops
ending a loop with Sentinal Value
----------------------------------------------------------------
-loop continuation condition
*loop continuation condition is always inside the parentheses
EX: 	int count = 0  //initialize count
	while (count < 100)  //loop continuation condition. continues until false
-loop body
EX:
```
{
	cout << "Welcome to C++!\n";  //print welcome to C++
	count++;  //increase count by 1 count is 1 now
}
```
*loop braces enclosing the loop body can be omitted only if the loop body contains one
	statement or none

#code 
			
----------------
###CODE - While loop
----------------
```			
int count = 0;

while (count < 100)
{
	cout << "Welcome to C++" << endl;
	counter = count++;
}
return 0;
```
----------------


SENTINEL VALUE
-also referred to as a flag value, trip value, rogue value, signal value, or dummy data
-a sentinel value is a special value in the context of an algorithm which uses its prescence
	as a condition of termination, typically in a loop or recursive algorithm
-a loop using sentinel balue to control its execution is called a sentinel-controlled loop


----------------------------------------------------------------
### FOR LOOPS
----------------------------------------------------------------
-initial action ---can be a list of zero or more comma-separated variable declarations
-loop-continuation-condition ---is a Boolean expression ----can be a list separated by commas
-action-after-each-iteration ---usually increments and decrements control variable
---> (separated by SEMICOLONS) loop body follows
-control variable (used to execute number of loops) ---often initialized in initial action

EX:
```
int i;  //declare i
for (i = initialValue; i < endValue; i++) //excecute initializer. i = initialValue
{
	//loop body
}
```
*can declare i in the initialvalue (execute initializer) where i = 0
*if i is declared in the loop, it cannot be referenced outside the loop
*the initial action of a for loop can be a list of zero or more comma-separated expressions
--> ie: for (int i=0, j=0; (o + j < 10); i++, j++)
--> ie: for (int i = 1; i < 100; cout << i << endl, i++)
*if the loop-continuation condition in a for loop is omitted:
for ( ; ; ), it is implicitly true
---> equivalent of above is while (true). this avoids confusion

#code
	
----------------------------------------------------------------
### DO-WHILE LOOPS
----------------------------------------------------------------
EX: 
```
int i = 0;
do
{
	cout << "i is " << i << endl;
	i++;
} while (i < 10);   // <--- Correct
```
*the semicolon is needed to end the loop after while conditional
*while and do-while loops are similar expressive power
--> do-while loops execute a statement before the continuation condition is checked



----------------------------------------------------------------
### KEYWORDS break AND continue
----------------------------------------------------------------
-both break and continue provide additional controls in a loop
**has been used in switch statement previously**


#code
	
----------------
### CODE - Break statement
----------------
```
int sum = 0;
int number = 0;

while (number < 20)
{
	number ++
	sum += number;
	if (sum >= 100)
		break;
}
cout << "The number is " << number << endl;
cout << "The sum is " << sum << endl;

return 0;
```
----------------

-break keyword breaks out of a loop
-continue ends the curent iteration
-program control goes to the end of the loop body
-continue statement is always in side a loop
--in a while and do-while loops, the loop-continuation-condition is evaluated immediately
	after the continue statement
--in a for loop, the action-after-each-iteration is performed, then the loop-continuation-condition
	is evaluated immediately after the continue statement.

#code 
	
----------------
###CODE - Continue statement
----------------
```
int sum = 0;
int number = 0;

while (number < 20)
{
	number ++
	if (number == 10 || number == 11) //will end iteration for number ==10 and number==11
		continue;
	sum += number; //rest of statement is not executed for 10, 11 because of continue
}
cout << "The number is " << number << endl;
cout << "The sum is " << sum << endl;

return 0;
```								
----------------

									
#code 
									
----------------
### CODE - Smallest factor other than 2
----------------
```									
int factor = 2;
while (factor <= n)
{
    if (n % factor == 0)
	break;
    factor++;
}
cout << "The smallest factor other than 1 for "" << n <<
    " is " << factor << endl;
```
----------------

#code 
	
----------------
### CODE - Smallest factor other than 2 (without break)
----------------
```
bool fount = false;
int factor = 2;
while (factor <= n && !found)
{
    if (n % factor == 0)
	founr = true;
    else
	factor++;
}
cout << "The smallest factor other than 1 for " << n <<
    " is " << factor << endl;
```
----------------

----------------------------------------------------------------
### Review (chapter resources)
----------------------------------------------------------------
*a for loop may be used if the number of repetitions is counter-controlled, as, for example
when you need to print  message 100 times
*a while loop may be used if the number of repetitions is sentinel-controlled, as in the case
of reading the numbers until the input is 0
* a do-while loop can be used to replace a while loop if the loop body has to be executed
before testing the continuation condition
***for and while loops are pretest loops
***do loop is a posttest loop



----------------
### CODE - Welcome to C++!
----------------
**CH 5.8- Case Studies**
**CH 5.10 - Checking Palindromes**
**CH 5.11 - Displaying Prime Numbers**
----------------



----------------------------------------------------------------
### LECTURE 6/14/21 - WEEK 3
----------------------------------------------------------------
**Ch 6 Functions:**
// if not anonymous function use keyword function
// Parameters like numStart and numEnd in line 14
Function header - declare type in parameter list explicit declare data type or it wont work
Compile error is full parameters not passed
VOID functions: 
-are not waiting for a return value
-returnValueType is the keyword void

#code 							
```
/*int sumOfNumbers(int numStart, int numEnd) { //return type of function name at start*/
int max(int num1, int num2) {
	//body
		return num1;
	//body
		return num2;
} //faster and less memory usage				
```
Pass-by-Value
Function Calling
Modularize
----------------------------------------------------------------
Define a Function
sum, main, invoke sum function
----------------------------------------------------------------
-A function is a collection of statements that are grouped together to perform an operation.

-A function definition consists of its 
	function name
	parameters
	return value type (the data type of that value)
	body

-The syntax for defining a function is as follows: 
```
returnValueType functionName(list of parameters) 
{ 
	//
	return result; //must match returnValueType from function declaration
}
```
-Invoke a function
EX: int z = max(x, y);

-function header is the top part
	1. return value type
	2. function name
	3. parameters (declare each separately)
caution: max(int num1, int num2) is correct but max(int num1, num2) is wrong

-function signature is the combination of the function name and parameter list

-function body is the logic
	* contains a collection of statements that define what a function does
	* return statement using the keyword 'return' is required for a value-returning function
	to return a result
	* the function exits when a return statement is executed
	* a function may return a value

-functions perform desired operations without returning a value
---> keyword void
//returnValueType in srand function is void
(return to console or cout is not return) -- the function is referencing the line where called

-a "value-returning function" is a function that returns a value
-a function that does not return a value is called a void function
-calling a function executes the code in the function
	*call or invoke it
	*function returns a value, a call to that function is usually treated as a value
	*EX: int larger = max(3,4);
	*EX2: cout max(3,4); //prints the return value of the function call max(3,4)
--> essentially passing a copy of the function content
-when a program calls a function, program control is transferred to the called function
	*the called function is executed
	*a called function returns control to the caller when its return statement is executed
	or when its function-ending closing brace is reached
-function main() is just like other functions except that it is invoked 
	by the operating system to execute the program. all other functions must be
	executed by function call statements
-function must be defined before it is invoked


----------------------------------------------------------------
### Parameters
----------------------------------------------------------------
-variables declared in function header are known as formal parameters, or parameters the same
-parameters are like a placeholder
-parameters are passed when a function is invoked
	*the value is referred to as an actual parameter or argument
-the parameter list refers to
	*the type
	*order
	*and number ----> of the parameters of a function

-the function name and the parameter list together constitute the function signature
-parameters are optional
	-a function may contain no parameters
//the rand() function has no paramters


----------------------------------------------------------------
### Void and Value-returning functions
----------------------------------------------------------------
- void functions do not return a value
- a call to a void function must be a statement
	*it is terminated with the semicolon
-return statements are not needed for a void function, but can be used for terminating
	the function and returning control to the functin's caller


----------------------------------------------------------------
### Terminate functions
----------------------------------------------------------------
terminate the program from the function immediately if an abnormal condition occurs
EX:
invoke exit(int) function //defined in cstdlib header


//function prototype is listing functions after main


----------------------------------------------------------------
### Actual parameter
----------------------------------------------------------------
-when a function is invoked, you pass a value to the parameter. formal parameters are 
	the variables declared in the function header
-actual parameter - a value. aka : argument
-parameter list refers to the type, order, and number of parameters of a function
-the function name and parameter list constitute the function signature
-parameters are optional

----------------------------------------------------------------
Activation frame
activation record
stack
----------------------------------------------------------------
Each time a function is invoked, the system creates an activation record 
(also called an activation frame) that stores its arguments and variables 
for the function and places the activation record in an area of memory known
as a call stack
- a call stack is an execution stack, runtime stack, or machine stack :: "the stack"
When a function calls another function, the caller’s activation record is kept intact
and a new activation record is created for the new function call. When a function finishes
its work and returns control to its caller, its activation record is removed from the call 
stack.


----------------------------------------------------------------
### Overloading functions
----------------------------------------------------------------
-overloading enables you to define functions with the same name as long as signatures
	are different
```
<cmath> has overloaded functions
```
ex: sin function:
float sin(float)
double sin(double)
long double sin(long double)


----------------------------------------------------------------
### Function prototypes
----------------------------------------------------------------
-a function prototype declares a function without having to implement it
-also called a function declaration -- is a function header without implementation

-can omit parameter names in function prototypes
--> the prototype tells the compiler the name of the function, its return type, the number
of parameters and each parameter's types


----------------------------------------------------------------
### Default arguments last
----------------------------------------------------------------
-parameters can be set as default value
-function can be invoked without passing an argument value
-pass an override value when function is invoked

-default value parameters must be declared last
EX:
void t1(int x, int y = 0, int z = 0; // Legal

*when an argument is left out, all arguments that come after must be left out as well
```
EX:
t1(1,  , 20); // Illegal
t1(2, 2); // Legal
```

----------------------------------------------------------------
### Inline Functions
----------------------------------------------------------------
-inline functions provide performance improvements for short functions
-inline functions avoid functoin calls
-the compiler copies the function code in line at the point of invocation

#code
	
----------------
### CODE - Inline Function
----------------
```
#include <iostream>
using namespace std;

inline void f(int month, int year)
{
    cout << "month is " << month << endl;
    cout << "year is " << year << endl;
}

int main()
{
    int month = 10, year = 2008;
    f(month, year); // invoke inline function
    f(9, 2010); //invoke inline function
}
```
----------------

----------------------------------------------------------------
**Local, global, and static local variables**
-scope of variable
-local variable
-global variable
----------------------------------------------------------------
-local variable: defined within a function
-global variables: declared outside all functions and are accessible to all functions
	in their scope
-local variables do not have default values
-global variables are defaulted to zero
-variable must be declared before it can be used

*scope of local variable starts from declaration and continues to end of block that contains
	the variable
*global variable scope starts from its declaration and continues to the end of the program
*a prameter is actually a local variable
--> the scope of function parameter covers the entire function

**after a functoin completes its execution, all its local variables are destroyed
	these are automatic variables**
-static local variables: permanently allocated memory for the lifetime of the program
EX: static int x = 1;


----------------------------------------------------------------
### Scope of a variable in a For loop
----------------------------------------------------------------
-variables declared in the initial action part of a for loop header has its scope in the
	entire loop
-variable declared inside a for-loop body has its scope limited in the loop body
	from its declaration to the end of the block

**avoid declaring variables multiple times in nesting blocks


----------------------------------------------------------------
### Passing arguments by reference
----------------------------------------------------------------
-makes the formal parameter an alias of the actual argument
**changes made inside the function also made to the arguments



----------------------------------------------------------------
### Converting Hexadecimans to Decimals
----------------------------------------------------------------
iven a hexadecimal number hnhn−1hn−2 … h2h1h0, the equivalent decimal value is

hn×16n+hn−1×16n−1+hn−2×16n−2+...+h2×162+h1×161+h0×160
For example, the hex number AB8C is

10×163+11×162+8×161+12×160=43916

#code #algorithm

----------------
### CODE - Horner's algorithm
----------------
```
int decimalValue = 0;
for (int i = 0; i < hex.size(); i++)
{
    char hexChar = hex[i];
    decimalValue = decimalValue * 16 + hexCharToDecimal(hexChar);
}
```							   
----------------


----------------------------------------------------------------
### Function Abstraction and Stepwise Refinement
----------------------------------------------------------------
**apply concept of abstraction**
-function abstraction is achieved by separating the use of a function from its implementation
--> the client can use a function without knowing how it is implemented
--> details of the implementation are encapsulated in the function and hidden from client
-encapsulation**
**if you change the implementation, the client program will not be affected,
	provided you do not change the function signature**

Stepwise Refinenment
-breaking down programming into manageable chunck or segments
-top-down or bottom-up

*benefits are simpler program, reusing functions, easier developing, debugging, and testing

----------------------------------------------------------------
----------------------------------------------------------------
# Ch. 7 Single-Dimensional Arrays and C-Strings
----------------------------------------------------------------
----------------------------------------------------------------

#definitions 
	
----------------------------------------------------------------
Array
*declaring
*array initializer
----------------------------------------------------------------
-used to store a collecion of data
--> collection of variables of the same type

Declaring
EX: 
elementType arrayName[SIZE]
double myList[10]

-SIZE is the array size declarator
-must be an expression that evaluates to a constant integer greater than zero
-each variable in an array is the array element
-the first element is assigned the index of 0
EX: arrayName[index];

-compiler does not report an out-of-bounds error
Array initializer: declares and initializes an array in a single statement
EX: elementType arrayName[arraySize] = {value0, value1, ..., valuek};
--the same as--
double myList[4];
myList[0] = 1.9;
myList[1] = 1.9;
myList[2] = 1.9;
myList[3] = 1.9;
myList[4] = 1.9;

** you must declare and initialize the array in one statement.
** can omit the array size when declaring and creating an array using an initializer
** can initialize part of the array. the other elements would be set to zero
--> if array is declared but not initialized, it produces garbage elements

-often use for loops for processing array elements
-cannot COPY arrays (done in a special way -- for loop)

-define const array parameter in a function to prevent it from being changed in a function
-EX: void p(const int list[], int arraySize)

----------------------------------------------------------------
### Returning Arrays From Functions
----------------------------------------------------------------
-pass the array as a parameter in a function
-you can declare a function to return a primitive type value or an object

#code
	
EX:
----------------
### CODE - Returning Arrays from Functions
----------------
```
int sum(const int list[], int size)

void reverse(const int list[], int newList[], int size)
```
----------------



----------------------------------------------------------------
### Counting the Occurrences of Each Letter
----------------------------------------------------------------
--see C:\Users\Reddogg-PC\Documents\Documents\Important\School\National University\CSC-242-06-2021\week3(needs update share)

----------------------------------------------------------------
### Searching Arrays
----------------------------------------------------------------
#code #algorithm #key
	
----------------
### CODE - Array Sorting
----------------
```
void selectionSort(double list[], int listSize)
{
    for (int i = 0; i < listSize - 1; i++)
    {
	//Find the minimum in the list[i..listSize-1]
	double currentMin = list[i];
	int currentMinIndex = i;
	
	for (int j = i + 1; j < listSize; j++)
	{
	    if (currentMin > list[j])
		{
		    currentMin = list[j];
		    currentMinIndex = j;
		}
	}
	
	//Swap list[i] with list[currentMinIndex] if necessary;
	if (currentMinIndex != i)
	{
	    list[currentMinIndex] = list[i];
	    list[i] = currentMin;
	}
    }
}
```
----------------


----------------------------------------------------------------
### C-Strings (LEGACY PROGRAMMING)
----------------------------------------------------------------
-an array of characters that ends with the null terminator character '\0'
-can process c-strings using c-string functions in C++

-a c-string is an array of characters ending with the null terminator ('\0')
	indicating the string ending in memory
*every string literal is a C-string

EX: char city1[] = "Dallas"; //C-String --> 7 characters
char city2[] = {'D', 'a', 'l', 'l', 'a', 's'}; //Not a C-string (this is array of characters) --> 6 characters



**Table 7.1 String Functions**
==================================================================================
|	Function	|					Description|
	|-----------|---------------|
|size_t strlen(char s[])			|		Returns the length of the string, i.e., the number of the characters before the null terminator.|
|strcpy(char s1[], const char s2[])		|	Copies string s2 to string s1.|
|strncpy(char s1[], const char s2[], size_t n)	|	Copies the first n characters from string s2 to string s1.|
|strcat(char s1[], const char s2[])			|Appends string s2 to s1.|
|strncat(char s1[], const char s2[], size_t n)	|	Appends the first n characters from string s2 to s1.|
|int strcmp(char s1[], const char s2[])		|	Returns a value greater than 0, 0, or less than 0 if s1 is greater than, equal to, or less than s2 based on the numeric code of the characters.|
|int strncmp(char s1[], const char s2[], size_t n)	|Same as strcmp, but compares up to n number of characters in s1 with those in s2.|
|int atoi(char s[])					|Returns an int value for the string.|
|double atof(char s[])	|				Returns a double value for the string.|
|long atol(char s[])		|			Returns a long value for the string.|
|void itoa(int value, char s[], int radix)	|	Obtains an integer value to a string based on specified radix.|
