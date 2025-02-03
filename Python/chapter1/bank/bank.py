'''
    bank.py by AJ Audet

    In season 7, episode 24 of Seinfeld, Kramer visits a bank that promises to give $100 to anyone who isn’t
    greeted with a “hello.” Kramer is instead greeted with a “hey,” which he insists isn’t a “hello,”
    and so he asks for $100. The bank’s manager proposes a compromise: “You got a greeting that starts with an ‘h,’ how does $20 sound?”
    Kramer accepts.
'''
import cs50
import string

greeting = cs50.get_string("Greeting: ")

# iterate through message to see if the message is "hello", or just starts with an 'h'/'H'
for i in range(len(greeting)):
    # check all letters
    if (greeting[0] == 'h' or greeting == "How you doing?"):
        print("$20")
        break
    elif (greeting == "hello" or greeting[i] == 'h'):
        print("$100")
        break
    elif (greeting[i] == 'H'):
        print("$0")
        break
