def uppercase_and_reverse(word):
    uppercase=word.upper()
    return uppercase[::-1]

Word = input()
print(uppercase_and_reverse(Word))