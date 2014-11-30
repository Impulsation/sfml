#!/usr/bin/env python

from sys import argv

script, filename = argv

target = open(filename)
print ""
print target.read()
