#!/usr/bin/env python

class Card:
    """A class to organize flashcards"""
    def __init__(self, card_index, card_front, card_back):
        self.index = int(card_index)
        self.front = card_front
        self.back = card_back

    def printIndex(self):
         return self.index

    def printFront(self):
        return self.front

    def printBack(self):
        return self.back

card_index = []

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
card26 = Card(26, "testcard", "True")

# This is the index to hold each cards position, allows us to increment
card_index = [
                card0, card1, card2, card3, card4, card5,
                card6, card7, card8, card9, card10,
                card11, card12, card13, card14, card15,
                card16, card17, card18, card19, card20,
                card21, card22, card23, card24, card25
]

card_index.append(card26)
for x in range(0, 27):
    # Prints "card_index: and information on the front of the card"
    raw_input("%s: %s" % (
        card_index[x].printIndex(), card_index[x].printFront())
    )
    print "%s\n" % card_index[x].printBack()
