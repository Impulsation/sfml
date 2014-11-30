#!/usr/bin/env python

# Imports the argv module, allowing us to pass arguments from cmd line
from sys import argv

# argv gets one argument, the name of the file to open
script, filename = argv

# Opens the filename specified in the cmd line
txt = open(filename)

# Prints the name of the file
print "Here's your file %r:" % filename

# Reads the file txt, that was opened earlier and prints it
print txt.read()

# Gets the file name via raw_input this time
print "Type the filename again:"
file_again = raw_input("> ")

# Opens the file specified with raw_input
txt_again = open(file_again)

# Reads txt_again and prints it
print txt_again.read()
