#!/usr/bin/env python

from sys import argv

script, filename = argv

print "\nOpening the file %r" % filename
target = open(filename, 'r+')

print "Printing... \n"
print target.read()

print "We're goin to erase %r." % filename
print "If you don't want that, hit CTRL-C (^C)."
print "If you do want that, hit RETURN."
raw_input("?")

target = open(filename, 'r+')
print "\nTruncating the file. Goodbye!"
target.truncate()

print "Now I'm going to ask you for three lines.\n"

line1 = raw_input("line 1: ")
line2 = raw_input("line 2: ")
line3 = raw_input("line 3: ")

print "\nWriting to the file."

target.write(line1)
target.write("\n")
target.write(line2)
target.write("\n")
target.write(line3)
target.write("\n")

print "And finally, we close it."
target.close()
