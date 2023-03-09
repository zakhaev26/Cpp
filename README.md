# C++ Udemy Course by Frank M.{Notes include only important points which i might forget!}

--------------------------------------------

- Using namespace directives helps us ease out the tedious job to write std:: again and again.
note: the ```::``` operator is known as scope resolution Operator and is used with std ,or the Standard namespace library.
Third party librarie may have their own way of declaring variables which we might use so in order to prevent that we use namespace.

```
#include<iostream>

using namespace

```

```
#include<iostream>

using namespace std;

int main(){

    cout<<"Hello World!;
    cin>>......
    count<<....<<endl;
    return 0;
}
//reduces the work of writing std.
```

Notice that I no longer have to use std followed by the scope resolution operator when I refer to cin, cout and endline.The compiler now knows which one to use based on the using namespace directive.


C++ uses a stream abstraction to handle IO on devices like the console and keyboard.
Cout is an output stream that defaults to the console or the screen.
Cerr and clog are also output streams that default to standard error and standard log, respectively.
And finally, cin is an input stream that defaults to the keyboard.
The insertion operator(<<) is used with output streams,and the extraction operator is used with input streams.

cout is by default the console,the value of data will be displayed on the screen.

Since we're using stream abstraction,we can chain multiple insertions in the same statement.This makes basic IO very, very easy to do.

It's important to understand that the insertion operator does not automatically add linebreaks to move to the next line on the console.
You must do this explicitly either by using the end line manipulator
(std::endl OR endl;) or by including a new line character, the /n .

If you use the end line stream manipulator, it will also flush the stream,this is important to know since if the stream is buffered,
it may not get written to the console until it's flushed.More about it at the later stages.


 - Let's see how the extraction operator works with cin.

The extraction operator extracts information from the cin input stream which defaults to the keyboard and stores the information into the variable to the right of the extraction operator.The way in which the information is interpreted is based on the type of the variable.So in this case, if data is an integer then an integer representation
will be read from the keyboard.
If data is a double then a real number will be read and stored.

If data is a string a sequence of characters will be read and stored.

Extraction operators can also be chained. In the second example,
```
cin>>data_>>data_2;
```
Two variables data1 and data2 will be assigned values read from the keyboardbased on their type.
The characters entered using the keyboard will only be processed when the enter key is pressed.
Cin extraction uses white space that is spaces, tabs, new lines as terminating the value being extracted.That's important to understand. So if you put spaces between the things that you type in,the spaces will be ignored.

It's possible that the extraction operator could fail:

For example, suppose you want to read an integer and the user enters my name Soubhik.In this case, the operation fails and the data will have an undetermined value.(Garbage)


-imp note:
```
    int a;
    float b;

    cout<<"Enter a integer:\n";
    cin>>a;
    cout<<"Enter a floating number:\n";
    cin>>b;
    cout<<"Your a = \n"<<a<<"Your b= "<<b;

```

here,if you put a floating number in int variable,the program would show that a = [num] and b ={num}

i.e. it floors and ceils AUTOMATICALLY! 


#Declaring variables in cpp;

```
int age;//uninitialized
int age  =21; //C Like initialization
int age (21); //Constructor initialization
int age {21}; //C++11 list initialization syntax

```
NOTE:It is recommended to use the last type of initialization in programs of cpp.


-Global scoped Variables:

These are variable which are declared globally ,i.e outside of the main function so that it can be accessed in it when INTERNALLY the ame variable is initialized inside the main function.

```
#include<iostream>

int age =16;
int main()
{

    // int age =18;
    std::cout<<"the age is ="<<age;




    return 0;
}
```


here,if you remove the main declared var, then the comopiler will take the global variable in order to output age.


The c++ ```include file climits``` contains information about the size and precision of the data types for your specific compiler.


```
const int age{21};//constant in cpp

age++
cout<<age;//throws error..


```



```
Literal Constants:-->

\n ==newline 
\t ==tabline
\r == return 
\b ==backspace
\' ==single quote
\" ==double quote
\\ == backslash



```


# Arrays and Vectors:

Array is a compound data structure which is a collection of elements present in a contiguous memory location.
note that the elemetns are of same type and and each elements can be accessed directly.
- Very efficient.

```
int test_scores [5];

double marks [20];

const int xyz [34];

```

- initialization:

```
int test_scores [5] {1,4,5,6,9};

double marks [20] {0} ;//init all to zero

const int xyz [] {3,4,6,6};//auto fixes the size by itself ,just like C


```

Note: in c++ >14 vers, array init is a bit different and rules et are varied.although you can check up on online websites for any learning purposes while working over different versions of cpp as the version i am using to learn cpp is c++ 6.3.0...

# Multi Dimensional Arrays:


in cpp,you can create nulti dimensional arrays which are like ,you can say, a matrix of a 1D dimension.

declaration method:

```
int arr[2][3] {{}};
string arr[3][7] 

```
an example is inroduced in code repository.


Vector:

- must include ```#include<vector>``` file 
- must plug in ```using namespace std; ``` as vector is a standard libary.

## Initialization type 1:

```vector <char> vowels(10);```// automatically sets up a vector named vowels of size 10 and and initializes to automatically to 0.

```vector <int>  test_scores(10);```//automatically sets up a vector named vowels of size 10 and and initializes to automatically to 0.

## Initialization type 2:

```vector<char> vowels {'a','e','i','o','u'};```

```vector<int> test_scores {100,89,98,45,};```

```vector<double> hi_temp (365,80.0);```//makes a vector of type double and name hi_temp of size 365 and initializes all 365 values to 80.0;

## Advantages of Using Vectors:

- Dynamic Sizes
- Elements are all the same type
- Stored in contiguously memory locations.
- [  ] -no checking to see if you are out of bounds
- provides many useful functions to operate on vectors.


-Elements are already initialized to Zero.(doesnt work like this on arrays.)
-Very Efficient.
-Iteration (looping) is often used to process.

### What if you're out of bounds:

- Arrays never do bounds checking.
- Many vector methods do boundary checking.
- An exception and error message is encountered
``` 
vector<int> number {12,34,56,67,78,89};
number.size();
//returns size of the vector number;
```

### Examples of  2d Vectors:

```
vector <vector<int>> movie_ratings
{
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};


//accesing:

cout<<"My(Judge no.1) Movie Ratings for #1 is:"<<movie_ratings.at(0).at(0);
cout<<"My(Judge no.2) Movie Ratings for #4 is:"<<movie_ratings.at(1).at(3);

```



# Difference between pre-increment and post increment operators!

## (same logic with pre-dec and post-dec ops):


```
int number {10};

number++;
cout<<number<<endl;//returns 11

++number;
cout<<number<<endl;//returns 12


//here,both the operators seem to work like they're same.
```


```
int number {10};

int result;

result =number++;
cout<<result<<endl;//prints 10

//value of number changed to 11 in ram...

result =++number;
cout<<result<<endl; //prints 12;
//value of number is FIRST INCREMENT then ASSIGNED to result.

//here,you can see the difference!
```


# COERSION:-->
C++ is very consistent with its application of an operator to operands.


The operands must be of the same type.

## It's very important to understand the rules that c++ uses to ensure that the types are the same since the results of the calculation could be different depending on which operand type is changed.
- C++ will try to convert one of the operands so it matches the other.In many cases, this happens automatically, and we'll talk about how that works in the next slide.If an automatic conversion or coercion is not possible,
then a compiler error will occur.
- We saw an example of this in the assignment operator video when we tried to assign a string to an integer.
- In order to understand how these conversions happen,we need to understand higher versus lower types.
- The idea is simple.The lower types are those types that can hold smaller values and the higher types can hold larger values. 
- So a long double is of higher type than a long and a long is of higher type than an int.
- The idea is that we can typically convert from a lower type to a larger type automatically since the lower types value will fit into the higher types value but the opposite may not be true.
- Short and character types are always converted to integers.So let's learn the terminology.A type conversion is also called a coercion


## example:

```
int total_amount {100};
int total_number {8};
double average {0.0};

average =total_amount/total_number;//returns 12 and NOT 12.5.

//Reason:the total_number and total_amount ,both are of integer type,so the compiler will perform integer division and store the value of 12 in average.the 0.5 is hence TRUNCATED...

//PERFORMING COERSION:

average =static_cast<double>(total_amount)/(total_number);//displays 12.5 now....

```

## syntax: ```static_cast<data type>```


tip:

another way of taking multiple inputs from user in cpp is:

```
int a{},b{},c{};
cout<<"Enter three numbers separated side by side with spaces in between"<<endl;
cin>>a>>b>>c;
```
this works this way as well :p


### bool related tip:
Sometimes it's handy to display the words true and false rather than 1 and 0 in the output statements.

We can do that using the ```boolalpha stream manipulator```.```Boolalpha ```and ```noboolalpha``` are located in the standard namespace.Once you use them, all Boolean output to the stream will result in the words true and false being displayed, that can be pretty handy.

If you want to go back to the default of zero and one, just use no bool alpha.

eg:--->

```
bool result{false};

result = (100==50+50);//true or 1
result = (200!=200);//false or 0

cout<<result//returns 0 or 1 depending on the statements..
cout<<std::boolalpha 
```

NOTE: if we are storing 12.0 and 11.99999999999999999999999 as doubles and check for their equality, the computer will store them as approximated numbers and to it these two number are same..hence to build high level precision programs or to create code for which 12.0 != 11.99999999999,we use some specific libraries made for it,which we will learn afterwards.


## logical operators:

you can use logical ops as syntax is given below:

- AND: ```and``` , ```&&``` this is a binary operator
- OR: ```or``` ,```||```this is a binary operator
- NOT:```not ```,```!```this is a unary operator

- precedence(priority): not > and > or 

## Compound operators example: lhs += rhs, lhs *=rhs ,lhs<<=rhs,lhs|=rhs,etc


# Control Flow Program
- sequence
- decision making
- iteration

# Selection Decision Making-->

- if-else
- if
- Nested if statements
- switch statements
- ?  : ternary operator if else statements(in a short hand version)



# Looping

- for loops
- while loops
- do-while loops
- continue and breaks
- Nested loops
- infinite loops


An enumeration is a user-defined data type that consists of integral constants. To define an enumeration, keyword enum is used.

```
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}```

this above code returns Thursday.



# Range based for loops:
```#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

    int scores[]{12, 23, 34, 45, 89};
    // the "mark" variable sets itself onto the base address of the array and then it just goes on until the array exhausts.In this way the loop looks easy and less prone to error.
    for (int mark : scores)
    {
        cout << mark << endl;
    }

    cout << endl;
    // also works in vectors!
    vector<int> numbers{1, 23, 45, 6, 70};

    for (int numero : numbers)
    {
        cout << numero << endl;
    }

    return 0;
}
```
NOTE:We can also use the ```auto``` keyword instead of int or double while setting up the RBFL.

Rounding up library:

```#include<iomanip>
.
.
.
.
cout<<fixed<<setprecision(1)
```

gets you rounded up form of number upto 1 place.


eg:

for(auto c:{This is a string}){
    cout<<c;
}

# Characters:

 These are the functions that we can use with characters.
This cctype library includes very simple and very useful function that allow the testing of characters for various properties as well as the conversion of characters from upper to lower or lower to uppercase.
```#include<cctype>```
In order to use these functions, you must include cctype.The functions all expect a single character.In the case of the testing functions, they evaluate to true or false.And the conversion functions return the converted character.

# Strings:

- C-style strings are stored in contiguous in memory
- implemented as an array of characters.
- terminated by a null character(null{null character with a value of zero})
- Zero or nul terminated strings.

## string literal:
- sequence of characters in double quotes,e.g:"Frank".
```F r a n k \0```
- constant
- terminated with null characters.


```
char array [10] {};

array ="Soubhik"
``` 
throws an error.
as the compiler searches for a null character in the string and as you have already initialized it to zero by giving the {} thing,even if you try to insert a string externally,it will fail.
instead of this,you can use rhe strcpy fxn from cstrings library.
some of the common  functions present in cstrings library are:
1)strlen(string_Name)
2)strcpy(where,string New)
3)strcmp(string1,string 2)
4)strcat(string_1 ,+string _2)

note:cstdlib is a library which allows us to convert a string to different data_types (if possible):

```cin.getline(full_name,50) ``` is similar to ```fgets``` in Clang.

# C++ style strings-->

- In order to use c++ plus strings, you must include the string header file.

- Strings are in the standard namespace.So in order to use them without using namespace standard, you must prefix them with standard and the scope resolution operator.This is also true for the standard string methods that work with c++ strings.

- Like c-style strings, c++ strings are stored contiguously in memory.However, unlike c-style strings which are fixed in size, c++ strings are dynamic and can grow and shrink as needed at runtime.

- C++ strings work with the stream insertion and extraction operators just like most other types in c++.

- The c++ string class provides a rich set of methods or functions that allow us to manipulate strings easily.Chances are that if you need to do something with the string that functionality is already there for you without having to rewrite it from scratch.

- C++ strings also work with most of the operators that we're used to for assigning, comparing and so forth.This is a huge advantage over c-style strings since c-style strings don't work well with those operators.

- Even though c++ strings are preferred in most cases sometimes you need to use c-style strings.
Maybe you're interfacing with a library that's been optimized for c-style strings. Well, in this use case, you can still use c++ strings and take advantage of them.And when you need to you can easily convert the c++ string into a c-style string and back again.

- Like vectors, c++ strings are safer since they provide methods that can perform bounds check and allow you to find errors in your code so you can fix them before your program goes into production.


```
#include<string>
.
.
.
string s1 {"hello"};
string s2 =s1;
string s2 ={"Morbius"};
s1==s2 

```
```
string s1 {"Hello"};
string s2 {"world"};

cout<< s1+" " +s2; //Hello World

//but...

cout<< "Hello"+ " World"; //throws error as it is a c style string and this type of string cant perform c++ type operations.

```


note: std::npos means the word that you're trying to retreive isnt present in the object string.


# All string functions:

- getline()	This function is used to store a stream of characters as entered by the user in the object memory.
- push_back()	This function is used to input a character at the end of the string.
- pop_back()	Introduced from C++11(for strings), this function is used to delete the last character from the string.

```
/ C++ Program to demonstrate the working of
// getline(), push_back() and pop_back()
#include <iostream>
#include <string> // for string class
using namespace std;
 
// Driver Code
int main()
{
    // Declaring string
    string str;
 
    // Taking string input using getline()
    getline(cin, str);
 
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
 
    // Inserting a character
    str.push_back('s');
 
    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;
 
    // Deleting a character
    str.pop_back();
 
    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;
 
    return 0;
}
```
- capacity():	This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.

- resize():	This function changes the size of the string, the size can be increased or decreased.

- length(): This function finds the length of the string.

- shrink_to_fit():	This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters has to be made.

```
// C++ Program to demonstrate the working of
// capacity(), resize() and shrink_to_fit()
#include <iostream>
#include <string> // for string class
using namespace std;
 
// Driver Code
int main()
{
    // Initializing string
    string str = "geeksforgeeks is for geeks";
 
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
 
    // Resizing string using resize()
    str.resize(13);
 
    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;
 
    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;
 
    // Displaying length of the string
    cout << "The length of the string is :" << str.length()
         << endl;
 
    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();
 
    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;
 
    return 0;
}

OUTPUT >>>

The initial string is : geeksforgeeks is for geeks
The string after resize operation is : geeksforgeeks
The capacity of string is : 26
The length of the string is :13
The new capacity after shrinking is : 13

```
## ITERATOR FUNCTIONS:

- begin()	This function returns an iterator to the beginning of the string.
- end()	This function returns an iterator to the next to the end of the string.
- rbegin()	This function returns a reverse iterator pointing at the end of the string.
- rend()	This function returns a reverse iterator pointing to the previous of beginning of the string.
- cbegin()	This function returns a constant iterator pointing to the beginning of the string, it cannot be used to modify the contents it points-to.
- cend()	This function returns a constant iterator pointing to the next of end of the string, it cannot be used to modify the contents it points-to.
- crbegin()	This function returns a constant reverse iterator pointing to the end of the string, it cannot be used to modify the contents it points-to.
- crend()	This function returns a constant reverse iterator pointing to the previous of beginning of the string, it cannot be used to modify the contents it points-to.

eg in gfg..

## Manipulation functions :

- copy(“char array”, len, pos) 	This function copies the substring in the target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied, and starting position in the string to start copying.
- swap()	This function swaps one string with another

NOTE:In order to use C style strings ,one needs to include ```#include<cstrings>``` file.
