'''
Contributed by Jiganesh Patil

Hi there, I bet If you are seeing this you may have heard about Famous Puzzle "Tower of Hanoi"

This is Recursive Solution to Solve Problem of Hanoi

To Solve Problem Arithmatically you can also do 2**(number of disks)-1

'''


def hanoi(n, source, target, spare):

    global count
    if n > 0:

        # move n-1 disks from source to spare so that they are out of the way
        hanoi(n-1, source, spare, target)

        # move the nth disk from source to target
        target.append(source.pop())
        count += 1

        # move n-1 disks Spare to target
        hanoi(n-1, spare, target, source)
    return count


x = int(input("Enter the Number of discs"))
count = 0
A = list(range(x, 0, -1))
B = []
C = []
count = hanoi(x, A, C, B)
print(count)
