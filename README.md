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


