// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cmath>
#include <iostream>
using namespace std;
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D\n';         // Character
string myText = "Hello\n";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
/* 
To express the same variable more times you can just put a comma
*/
int x = 5, y = 6, z = 50; // Here x equals to 5, y equals to 6 and z equals to 50 all in one text but can be used individually can be used to clean code up
/*
If you want a variable to be unchangeable and read only you use const
This will declare the variable as constant
const int myNum = 15;  
*/
int main() {

	cout << myNum << "\n";
	cout << myFloatNum;
	cout << myLetter;
	cout << myText;
	cout << myBoolean << "\n";

	//Here we can store user data thats inputted using cin
    //For example
	string Name;
	cout << "Write your name:";
	cin >> Name;
	cout << "Hello " << Name << "\n";
	/*
	------------------
	string concatenation
	The + operator can be used between strings to add them together for a new string
	for example:
	string firstName = "Bob ";

    string lastName = "Doe";

    string fullName = firstName + lastName;

    cout << fullName;
	--------------------------
	You can also use append() on a string as it is classified as a object in C++
	for example:
	string firstName = "Bob ";

    string lastName = "Doe";

    string fullName = firstName.append(lastName);

    cout << fullName;

	Now if you want to know how many characters a string is you can use the length() or the size() function
	for example:
	*/
	string LongText = "I Sure like playing roblox and fortnite all day!";
	cout << "The length of the text is: " << LongText.length() << "\n";
	cout << "The length of the text is: " << LongText.size() <<  "\n";
	/*
	Because of how computers and coding is the spaces inbetween the text are also counted as characters so those also added to the length!
	-----------------
	Access Strings
	You can access the characters (letters) in a string by referring to its index number inside square brackets [].
    For example:
	*/
	string myString = "Hello";
    cout << myString[0] << "\n";
//This will print out the H in Hello as it is the first character in the text!
//String indexes start with 0: [0] is the first character. [1] is the second character, etc.
	/*
    ------------------------
	Change String Characters
	
	If you want to change a single word inside of a string you can use refer to the index number, and use single quotes
	For example:
	*/
	string FunnyText = "Ja";
FunnyText[0] = 'Y';
cout << FunnyText;
// This code above has changed the J in the string to a Y because the first character in the string is a 0!
/*
------------
Special Characters
Because strings must be written within quotes, C++ will not understand this string and generate an error:

string txt = "So your name is "Jerry"? ";

The solution to avoid this problem, is to use the backslash escape character.

\'	'	Single quote
\"	"	Double quote
\\	\	Backslash

The backslash (\) escape character turns special characters into string characters:
for example:

string txt = "So your name is \"Jerry\" ";

Other characters you can use for special functions
\n	New Line
\t	Tab
----------------------
CIN
----------------------
CIN considers a space bar (blank space) as a terminating character so it means you can only store upto one word
example:
string fullName;
cout << "Type full name: ";
cin >> fullName;
cout << "Your name is: " << fullName;
Say you wrote Big bob as your full name it would only consider Big as a word and then print that out
instead of consdiering bob too as a word because there is a space between them.
You can use getline() function to get the full name however as it takes cin as a first parameter and the string variable the second
example:
string fullName;
cout << "Type full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;
----------------------
Omitting name space
----------------------
You can use the namespace STD to use namespace without it being in the project
example
std::string greeting = "Hello";
 std::cout << greeting;
 so when it could've of been 
 string greeting = "Hello";
 cout << greeting;
 It was used without the namespace STD being in the project
 ---------------------
 C++ Math
 ---------------------
 Max and min can be used to find the highest value of x and y
 example for the highest
 cout << max(x, y);
##################
 cout << max(5, 10);
 this would print out the number 10 as ten is the biggest value
 exxample for the lowest
 cout << min(x, y);
 #################
 cout << min(5, 10);
 this would print out the number 5 as five is the smallest value
##################
To use other functions like 
sqrt (square root), round (rounds a number) and log (natural logarithm)
here is all the functions inside the library that are popular
--------------------------------------------------
abs(x)	Returns the absolute value of x
acos(x)	Returns the arccosine of x
asin(x)	Returns the arcsine of x
atan(x)	Returns the arctangent of x
cbrt(x)	Returns the cube root of x
ceil(x)	Returns the value of x rounded up to its nearest integer
cos(x)	Returns the cosine of x
cosh(x)	Returns the hyperbolic cosine of x
exp(x)	Returns the value of Ex
expm1(x)	Returns ex -1
fabs(x)	Returns the absolute value of a floating x
fdim(x, y)	Returns the positive difference between x and y
floor(x)	Returns the value of x rounded down to its nearest integer
hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	Returns x*y+z without losing precision
fmax(x, y)	Returns the highest value of a floating x and y
fmin(x, y)	Returns the lowest value of a floating x and y
fmod(x, y)	Returns the floating point remainder of x/y
pow(x, y)	Returns the value of x to the power of y
sin(x)	Returns the sine of x (x is in radians)
sinh(x)	Returns the hyperbolic sine of a double value
tan(x)	Returns the tangent of an angle
tanh(x)	Returns the hyperbolic tangent of a double value
---------------------------------------------------
you would include the cmath library
#include <cmath>
This library is already involved if you check at the top of the script!
Here is a basic mathematical calculator
*/
int AA = 5, AB = 12, AC = 24;
int addit = AA + AB + AC;
cout << "\n" << addit << " Is currently the value selected\n";
cout << "\nWould you like to square root this value?(1), round it(2) or log it(3)\n";
cout << "Write the number next to it to do that operation!\n";
int selectedValue;
cin >> selectedValue;
if (selectedValue == 1) {
	cout << sqrt(addit);
}
else if (selectedValue == 2) {
	cout << round(addit);
}
else if(selectedValue == 3) {
	cout << log(addit);
}
else  {
	cout << "You did not write a number on the list or you wrote a letter!\n";
}
/*
Very often in programming you will use true and false,simple right?
That is called a bool value and it can only be true or false nothing more
example
bool ILoveCodingWaw = true
bool IHateCodingGrr = false
It is quite self explanatory to know which is which!
-------------------
Boolean Expression
-------------------
A Boolean expression returns a boolean value that is either 1 (true) or 0 (false).
example
cout << (10 > 9); // returns 1 (true), because 10 is higher than 9

cout << (10 == 10);  // returns 1 (true), because the value of 10 is equal to 10

cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15
In the code below we will see if the person is old enough to drive
int myAge = 25;
int drivingAge = 18;

cout << (myAge >= drivingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!

We can even add a if else statment which will allow us to return a answer back if the MyAge value is below the DrivingAge value

int myAge = 25;
int drivingAge = 18;

if (myAge >= drivingAge) {
  cout << "Old enough to drive!";
} else {
  cout << "Not old enough to drive.";
}

// Outputs: Old enough to drive! However if MyAge wasn't a higher value it would output 'Not old enough to drive'
-----------------
If else statements
In c++ you can use statements to filter out unwanted stuff for example

use if to specify a block of code to be execute when the condition is true

if (10 > 5) {
  cout << "10 is greater than 5 wow!";
}

use else to specify a block of code to be executed if the condition is false

if (10 < 5) {
  cout << "10 is greater than 5 wow!";
} else {
  cout << "5 is smaller than 10 wow";
}
use else if to do a new condition to test if the first is false

if (10 < 5) {
  cout << "10 is greater than 5 wow!";
} else if (10 > 5) {
  cout << "5 is smaller than 10 wow";
} else {
  cout << "The values are equal!";
}

and use switch to specify many alternative blocks of code to be executed

The switch expression is evaluated once

The value of the expression is compared with the values of each case

If there is a match, the associated block of code is executed

int day = 6;
switch (day) {
  case 1:
	cout << "Monday";
	break;
  case 2:
	cout << "Tuesday";
	break;
  case 3:
	cout << "Wednesday";
	break;
  case 4:
	cout << "Thursday";
	break;
  case 5:
	cout << "Friday";
	break;
  case 6:
	cout << "Saturday";
	break;
  case 7:
	cout << "Sunday";
	break;
}
Will print out Saturday because it is day 6

BREAK

When a piece of code reaches a break keyword it will break out of the switch block
This will stop the execution of more code in the block
a break can save lots of time as it prevents execution of all the code in the switch block

DEFAULT

The default keyword specifies a code to run if there is no matches with a switch
-----------------------
Loops

Loops can execute a block of code as long as a condition is reached
They make it so it is easier to read code, reduce errors and save time

While

The while keyword loops through a block of code as long as the condition is true
*/
int i = 0;
while (i < 99999) {
	cout <<"Current value is " << i << " gonna keep going till 99999!" << "\n";
	i++;
}
if (i == 99999) {
	cout << "The value has reached 99999\n";
}
/*
Do/while loop
This is a variant of the while loop
This variant will execute the code once then check if the condition is still true
If it is the code will keep repeating untill the condition is false
format#
do {
  // code block to be executed
}
while (condition);


For loop
Another variantion of the while loop
this is when you know exactly how many times you want the code to loop through your project
format#

for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
Statement 1 is executed (once) before the execution of the code block.

Statement 2 defines the condition for executing code block.

Statement 3 is executed (every time) after the code block has been executed.
Example below (Taken from W3schools)
*/
for (int i = 0; i < 5; i++) {
	cout << i << "\n";
}
/*
Statement 1 sets a variable before the loop starts (int i = 0).

Statement 2 defines the condition for the loop to run (i must be less than 5). If the condition is true, the loop will start over again, if it is false, the loop will end.

Statement 3 increases a value (i++) each time the code block in the loop has been executed.

Nested loops
It is possible to make a loop inside a loop
The inner loop will be executed each time when the outside loop is executed

Outer loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

Inner loop
  for (int j = 1; j <= 3; ++j) {
	cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}

Foreach loop
This loop is exclusively used to loop through elements in an array
example
for (type variableName : arrayName) {
   Code executes here
}
----
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
---
While talking about loops you can break out of them by using the break statement aswell
Example(breaks when i is valued at 4):
for (int i = 0; i < 10; i++) {
  if (i == 4) {
	break;
  }
  cout << i << "\n";
}
There is also a continue statement that only breaks one iteration in a loop
so that if a specific condition occurs it can continue to the next iteration in the loop
Example(This time it will not print 4);
for (int i = 0; i < 10; i++) {
  if (i == 4) {
	continue;
  }
  cout << i << "\n";
}

You can use both in a while loop aswell so keep that in mind!

--------------
Arrays
Arrays can be used to store mulitple values in one variable so instead
of declaring seperate variables for each value you can use an array instead.

To define a variable you need to specify the name of the array followed by square brackets
and a specify a number of elements it can store

example:
string cars[4];

---
Now we got a variable declared it can hold upto 4 strings if you want to add values to it
you can use a array literal "places the values in a comma-seperated list inside curly braces)
example:
*/
string cars[4] = { "Bugatti", "BMW", "lamborgini", "Hellcat" };
/*

The same would be done to create three integers
example:
int myNum[3] = {10, 20, 30};

Now there would be no points of an array if we can not access it so to do that we 
refer to the index number inside the square brackets
The example below will accsess the first element in the cars (It will be bugatti)
*/
cout << cars[0];

/*

(These array indexes always start with 0 being the first element and 1 being the second)

To change an element inside an array you refer to the index value like this
cars[0] = "Nissan";
Lets see it in action!
*/
cars[0] = "Opel";
cout << cars[0];

/*

Now if you would like to loop through a bunch of arrays you can use the for loop method
example:
*/
for (int i = 0; i < 5; i++) {//  makes a value called i and compares it to 5 if its smaller it adds 1 to i
	cout << cars[i] << "\n";
}
/*

Remember when we talked about the foreach loop? Well its entire purpose in life
is to be used in arrays like this!

for (type variableName : arrayName) {
  // code block to be executed
}
Lets see it in action!
*/
int myNumbers[5] = { 10, 20, 30, 40, 50 };
for (int i : myNumbers) {
	cout << i << "\n";
}
/*  

Infinte arrays/Omit arrays
You dont really need to specify the size of the array
The c++ complier is smart enough to determine a size based on values added to it

string bananas[] = {"1Banana", "2Banana", "3Banana"}; // Three array elements

The example above is comparable to this below
string bananas[3] = {"1Banana", "2Banana", "3Banana"}; // Three array elements
It is basically the same thing just that without specifying a value you can add infinte amount of arrays
But it is a better approach to specify the value to reduce the amount of errors.

You can also declare an array without specifying any elements and you can add them later
example:

string Games[5];
cars[0] = "Fortnite";
cars[1] = "Minecraft";

*/
return 0;
}