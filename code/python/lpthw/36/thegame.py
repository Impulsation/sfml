#!/usr/bin/env python

def offerChoices(choice1, choice2, choice3):
    print "What do you do?"
    print choice1
    print choice2
    print choice3

    while True:
        choice = raw_input("> ")
        if choice == choice1:
            print "You picked choice 1"
            return 1
        elif choice == choice2:
            print "You picked choice 2"
            return 2
        elif choice == choice3:
            print "You picked choice 3"
            return 3
        else:
            print "Try again."

def testRoom():
    print "You enter a room."
    choice = offerChoices("walk", "talk", "jump")
    if choice == 1:
        print "You walk."
    elif choice == 2:
        print "You talk."
    elif choice == 3:
        print "You jump"

testRoom()
