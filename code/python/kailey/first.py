# First Program

print "How old are you?"
age = int(raw_input())

print "Your age is %r." % age

if age > 18:
    print "You're legal!"

if age < 18:
    print "You're too young."

if age == 18:
    print "Happy Birthday!"
