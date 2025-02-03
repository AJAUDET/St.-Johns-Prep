'''

hash.py by AJ Audet

making a fixed length cypher,

a -> b, b -> c... z->{... etc.

fixed length, same output for same input

ex) storing a password

'''

import bcrypt, cs50

# password user input

password = b"password"

# salt gen
# salt is an aditional input to encrypt data further

salt = bcrypt.gensalt()

# hash is the password
mess_hash = bcrypt.hashpw(password, salt)

# print salt, hash, and original message
print("Password : \n", password)
print("Salt : \n", salt)
print("Hashed : \n", mess_hash)

