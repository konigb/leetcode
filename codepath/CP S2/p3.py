

def print_pair(dictionary, target):
    res = dictionary.get(target)
    if res == None:
        print("That pair does not exist!")
    else:
        print("Key: " + target + "\n" + "Value: " + res)

dictionary = {"spongebob": "squarepants", "patrick": "star", "squidward": "tentacles"}
print_pair(dictionary, "patrick")
print_pair(dictionary, "plankton")
print_pair(dictionary, "spongebob")