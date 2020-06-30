'''
Contributed by Jiganesh Patil

* The Fibonacci series is the series of Numbers where the Sum of two Previous Numbers results in Next Number.

* eg. Suppose Fibonacci Series 0,1,1,2,3,5,8,13 and so on..............
The sum of First Number 0 and 1 results to 1 at third position, Similarly sum of 1 and 1 results to 2 at fourth position and it goes on.........

* So to Generate Fibonacci numbers their are Various Approaches, We are Going to see the approach Using Recursion.
Quick Revision on Recursion : Recursion is something where the Function calls itself.

* We will see the Simple Program to get fibonacci series upto n th Element.
'''

# Function to return Fibonacci element at that n th position.


def fibonacci(n):

          # Base Conditions that if n=0 or n=1 return 0 and 1 as we have specified our first two elements.
          
          if n==0:
                    return 0
          elif n==1:
                    return 1
          # If not Base Condition, we calculate the values by taking it to base conditions.
          # Solving smaller problems eventually getting to solve bigger problem.
          else: 
                    return fibonacci (n-1)+fibonacci(n-2)


#Here n is the position upto which the Series is to be Found.
n=int(input())

for i in range(0,n):
          print(fibonacci(i),end="  ")   #Prints the FIbonacci element at n th position.


# Cons : The Program is where slow while Calculating for higher Position because of Recursion and calculating Same Values Multiple times.
# For Better approach we can use Dynamic Programming and Memoization.
