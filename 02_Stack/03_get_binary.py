'''
Contributed by Jiganesh Patil

Stack is a Data-structure which follows Last In First Out or LIFO :)

Assume a box and Cahracters A B C and D all on the Floor, Taking element one by one you put it into the box one by one the last element that goes inis D.
Now you have to remove the elements one by one so Of course D will be Coming out First so this is how it follows Last In First Out.

D - Last to go In & First to go Out
C
B
A

Taking an element and putting it in is called Push and taking it out is called  Pop

We Will see how to use this DataStructure Using Python to get binary conversion .

124 / 2 =62           ->         0     First to go In and So on
62/2=31                ->         0 
31/2=15                ->         1 
15/2=7                  ->         1 
7/2=3                    ->         1 
3/2=1                    ->         1 
1/2=0                    ->         1      Last to go In

Of Course it is Last In First Out :) to convert to binary.

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
                              self.items.pop()
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

          #Funcction to do binary Conversion
          def binary(self,number):
                    while number > 0 :
                              self.items.append(str(number%2))
                              number = number//2
                              

                    binarystr=""
                    while self.items !=[]:
                              binarystr+= self.items.pop()

                    return binarystr

s=Stack()
number=124
print("Number which is to be Converted: ",number)
print("Using Stack :",s.binary(number),sep="\t\t")
print("Using Binary Function:",bin(number)[2:],sep="\t")

















