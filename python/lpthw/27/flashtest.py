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
        raw_input("%s: %s" % (x.printNumber(), x.printBack()))
        print ""

# This is all the information for the flashcards
card0 = Card(0, "not False", "True")
card1 = Card(1, "not True", "False")
card2 = Card(2, "True or False", "True")
card3 = Card(3, "True or True", "True")
card4 = Card(4, "False or True", "True")
card5 = Card(5, "False or False", "False")
card6 = Card(6, "True and False", "False")
card7 = Card(7, "True and True", "True")
card8 = Card(8, "False and True", "False")
card9 = Card(9, "False and False", "False")
card10 = Card(10, "not (True or False)", "False")
card11 = Card(11, "not (True or True)", "False")
card12 = Card(12, "not (False or True)", "False")
card13 = Card(13, "not (False or False)", "True")
card14 = Card(14, "not (True and False)", "True")
card15 = Card(15, "not (True and True)", "False")
card16 = Card(16, "not (False and True)", "True")
card17 = Card(17, "not (False and False)", "True")
card18 = Card(18, "1 != 0", "True")
card19 = Card(19, "1 != 1", "False")
card20 = Card(20, "0 != 1", "True")
card21 = Card(21, "0 != 0", "False")
card22 = Card(22, "1 == 0", "False")
card23 = Card(23, "1 == 1", "True")
card24 = Card(24, "0 == 1", "False")
card25 = Card(25, "0 == 0", "True")

runCards()
