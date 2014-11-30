#!/usr/bin/env python

import random

# The index to store all of our flashcards
card_index = []

class Card(object):
    """A class to organize flashcards"""
    def __init__(self, number, card_front, card_back):
        self.number = int(number)
        self.front = card_front
        self.back = card_back
        card_index.append(self)

    def printNumber(self):
         return self.number

    def printFront(self):
        return self.front

    def printBack(self):
        return self.back

def printCard(x, count, index):
    raw_input("%s: %s" % (count, index[x].printFront()))
    raw_input("%s: %s" % (count, index[x].printBack()))
    print ""

def orderedCards():
    for i in range(0, len(card_index)):
        printCard(i, i, card_index)

def randomCards():
    current_index = card_index
    for i in range(0, len(card_index)):
        x = random.randrange(0, len(current_index))
        printCard(x, i, current_index)
        current_index.remove(current_index[x])

# This is all the information for the flashcards
card0 = Card(0, "not False", "True")
card1 = Card(1, "not True", "False")

randomCards()
