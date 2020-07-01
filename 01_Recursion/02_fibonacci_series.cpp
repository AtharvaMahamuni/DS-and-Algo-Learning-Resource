/*
Contributed by Atharva Mahamuni

* The Fibonacci series is the series of Numbers where the Sum of two Previous Numbers results in Next Number.

* eg. Suppose Fibonacci Series 0,1,1,2,3,5,8,13 and so on..............
The sum of First Number 0 and 1 results to 1 at third position, Similarly sum of 1 and 1 results to 2 at fourth position and it goes on.........

* So to Generate Fibonacci numbers their are Various Approaches, We are Going to see the approach Using Recursion.
Quick Revision on Recursion : Recursion is something where the Function calls itself.

* We will see the Simple Program to get fibonacci series upto n th Element.
*/

#include <iostream>
using namespace std;
// Function to return Fibonacci element at that n th position.
int fibonacci(int n)
{
    int num;
    //base case
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }

    //calling case
    //If not Base Condition, we calculate the values by taking it to base conditions.
    //Solving smaller problems eventually getting to solve bigger problem.
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main()
{
    int n; //number of elements in series
    cin >> n;

    //Prints the Fibonacci elements at n th position.
    for (int i = 1; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

//Cons : The Program is where slow while Calculating for higher Position because of Recursion and calculating Same Values Multiple times.
//For Better approach we can use Dynamic Programming and Memoization.