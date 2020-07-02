'''
Contributed by Jiganesh Patil

The one liner to reverse a string is "string"[::-1]

Commonly Asked Interview Question "How to reverse a string Using Stack"

Stack is a Data-structure which follows Last In First Out or LIFO :)

Assume a box and Cahracters A B C and D all on the Floor, Taking element one by one you put it into the box one by one the last element that goes inis D.
Now you have to remove the elements one by one so Of course D will be Coming out First so this is how it follows Last In First Out.

D - Last to go In & First to go Out
C
B
A

Taking an element and putting it in is called Push and taking it out is called  Pop

We Will see how to use this DataStructure Using Python for reversing a string.

'''
class Stack():

          # Need some container to push it , right !!
          def __init__(self):
                    self.items = []

          #Push the element into the stack
          def push(self,element):
                    self.items.append(element)

          #Pops out the last pushed element
          def pop (self):
                    if not self.is_empty():
                              return self.items.pop()
                    else:
                              return "Stack is Empty"

          #Checks if stack is empty or not
          def is_empty(self):
                    return self.items == [ ]

          #Check last element to be Pushed
          def peek(self):
                    if  not self.is_empty() :
                              return  self.items[-1]
                    else:
                              return "Stack is Empty"

          # Shows the Stack
          def show(self): 
                    return self.items

          #To reverse the string
          def reverse(self,string):
                    for i in string:
                              s.push(i)                               #Push all elements of string to stack
                    rev=""
                    while not self.is_empty():              # Last In First Out Remember !!
                              rev+=s.pop()
                    return rev
s=Stack()
print(s.reverse("Hello"))



















