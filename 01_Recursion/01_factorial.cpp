/*
Contributed by Atharva Mahamuni

* The Factorial is the product of all Numbers from N to 1

* eg. Suppose the Factorial of 6 is to beCalculated which is denoted as 6!
 The Solution will be 6*5*4*3*2*1 = 720

* So if you have keen observation you can see the pattern

6*5!
6*5*4!
6*5*4*3!
6*5*4*3*2!
6*5*4*3*2*1!

As we know 1! = 1

1*2*3*4*5*6
2*3*4*5*6
6*4*5*6
24*5*6
120*6
720

Thus 720 is the Answer.

* We Solve a much Bigger Problems by solving Smaller Problems.

To find factorial of a number we will see a function, we will solve this problem using Recursion.
*/

#include <iostream>
using namespace std;

//Function to return Factorial of a number.
int factorial(int n)
{
    //base case
    //Base Condition n=1 return 1 as we have specified our first element.
    if (n == 0 || n == 1)
        return 1;

    //calling case
    //If not Base Condition, we calculate the values by taking it to base condition.
    //Solving smaller problems eventually getting to solve bigger problem.
    else
        return (n * factorial(n - 1));
}

int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;

    return 0;
}