"""
vigenere.py by AJ Audet

making a vigenere cypher in python 😀, same base as C but different
"""
import string, cs50

def generateKey(text, key):
    # convert the key text to a list
    key = list(key)

    # check size of key and text
    if (len(text) == len(key)):
        return key;
    else:
        # loop thru the size of the message minus the length of the key for an accurate length for the key
        # ex) message: Hello, Key: ABC -> ABCAB
        for i in range(len(text) - len(key)):
            key.append(key[i % len(key)])
        return("".join(key))


def generateCypher(text, key):
    # result needs to be an empty list
    cyphText = []

    # iterate and encrypt
    for i in range(len(text)):
        # lowercase and upper case conditionals
        if (text[i].islower()):
            x = (ord(text[i]) + ord(key[i])) % 26
            x += ord('a')
            cyphText.append(chr(x))
        else:
            x = (ord(text[i]) + ord(key[i])) % 26
            x += ord('A')
            cyphText.append(chr(x))
    return ("".join(cyphText))

# user input

text = cs50.get_string("Message: ")
keyword = cs50.get_string("Key: ")
key = generateKey(text, keyword)
cyphText = generateCypher(text, key)

print("Message : ", text)
print("Key : ", key)
print("Cypher : ", cyphText)
