# C++ Udemy Course by Frank M.{Notes include only important points which i might forget!}

--------------------------------------------

- Using namespace directives helps us ease out the tedious job to write std:: again and again.
note: th ```::``` operator is known as scope resolution Operator and is used with std ,or the Standard namespace library.
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
int age  =21; //C++ Like initialization
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



