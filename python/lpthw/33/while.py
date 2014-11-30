#!/usr/bin/env python

def whileloopy(ceil, inc):
    i = 0
    numbers = []
    while i < (ceil + 1):
        print "At the top i is %d" % i
        numbers.append(i)

        i = i + inc
        print "Numbers now: ", numbers
        print "At the bottom i is %d" % i
    print "The numbers: "
    for num in numbers:
        print num

def forloopy(ceil, inc):
    numbers = []
    for num in range (0, ceil + 1, inc):
        numbers.append(num)
        print numbers

ceiling = int(raw_input("Input the ceiling: "))
increment = int(raw_input("Input the increment: "))
forloopy(ceiling, increment)
