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
if (selectedValue == 2) {
	cout << round(addit);
}
if (selectedValue == 3) {
	cout << log(addit);
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

*/

	return 0;
}