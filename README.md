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