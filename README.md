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







