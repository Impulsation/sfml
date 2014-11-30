#!/usr/bin/env python

print "Welcome to Nebulon.  It seems your ship has crashed here."
print "Behind you is your ship, in front of you the trail splits."
print "1. Check the ship."
print "2. Take the left path."
print "3. Take the right path."

choice = raw_input("> ")
print ""
if choice == "1":
    print "You check the ship. It's pretty fucked up. You see a facehugger."
    print "... it sees you."

    print "What do you do?"
    print "1. Run away."
    print "2. Punch it."
    print "3. Lure it into the flaming wreckage."
    
    choice = raw_input("> ")
    print ""
    if choice == "1":
        print "You attempt to run away.  The facehugger devours you."
    elif choice == "2":
        print "You punch it.  It doesn't seem phased."
        print "It latches onto you hand and makes its way to your brain."
        print "You are slowly consumed."
    elif choice == "3":
        print "You lure it into the flames, and watch manically as it ignites."
        print "You laugh while it burns."
    
elif choice == "2":
    print "The path is dense with foliage.  Not any like you've ever seen."
    print "The plants rustle beside you."
    print "You're ambushed by an alien tribe.  They vaporize you."
elif choice == "3":
    print "The path seems quite clear.  You make out a shadowy figure ahead."
    print "What do you do?"
    print "1. Approach confidently down the path."
    print "2. Attempt to sneak up on it."
    
    choice = raw_input("> ")
    print ""
    if choice == "1":
        print "You approach and state your name."
        print "It's James, your co-pilot."
        print "He's found a way back home."
    else:
        print "You startle the figure. He turns around in time for you to see."
        print "You recognize James, the co-pilot."
        print "He instinctively blasts you, in the face."
else:
    print "That wasn't an option dumbass.  Your ship explodes."
    print "You're a limbless vegetable.  Waiting slowly for death's embrace."
