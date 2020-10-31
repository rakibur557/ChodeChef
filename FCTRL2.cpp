//solved by: Rakibur Rahman

#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;


cpp_int Factorial(int number)
{
    cpp_int num = 1;
    for (int i = 1; i <= number; i++)
        num = num * i;
    return num;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int number;
    cin>>number;
    cpp_int fact = Factorial(number);
    cout << fact << endl;
    }
    return 0;
}

/*
    Explanation:

    why   #include <boost/multiprecision/cpp_int.hpp>  ?
    I use this header file because I have to use cpp_int throughout the program.
    .hpp is a header file for only c++

    why  using boost::multiprecision::cpp_int;  ?
    I use this because I have to inform the compiler that i will use boost library.

    why cpp_int ?
    We can use any precision with the help of cpp_int data type
    if we are not sure about how much precision is needed in future.
    It automatically converts the desired precision at the Run-time.
*/
