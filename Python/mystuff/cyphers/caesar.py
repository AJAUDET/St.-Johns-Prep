""""
caesar.py by AJ Audet

making a caesar cypher in python 😀
"""

import string, cs50

# custom function
def caeEncrypt(text, a):
    result = ""

    # loop through the text
    for i in range(len(text)):
        char = text[i]

        # encrypt
        if (char.isupper()):
            result += chr((ord(char) +  a - 65) % 26 + 65)
        elif (char.islower()):
            result += chr((ord(char) + a - 97) % 26 +97)
        else:
            result += char

    return result

# user input
text = cs50.get_string("Message: ")
a = cs50.get_int("Shift: ")

# output
print("Messasge : ", text)
print("Shift : ", str(a))
print("Cypher : ", caeEncrypt(text, a))
