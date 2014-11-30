#!/usr/bin/env python

# Get the name of the file to open
print "Type a file to open: "
filename = raw_input("> ")

# Open file and store in txt object
txt = open(filename)

# Read() from txt, and print the results
print txt.read()
