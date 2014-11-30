#!/usr/bin/env python

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

def runCards():
    for x in card_index:
        # Prints "number: and information on the front of the card"
        raw_input("%s: %s" % (
            x.printNumber(), x.printFront())
        )

        # Prints the back of the card after pressing ENTER 
        raw_input("%s" % x.printBack())
        print ""

# This is all the information for the flashcards
c0 = Card(0, "Konnichiwa", "Good Afternoon")
c1 = Card(1, "Hai", "Yes")

runCards()
