#Fucntion declaration
def wordOccurence(list_of_words):
    count = dict()
    for word in list_of_words:
        if word in count:
            count[word]+=1
        else:
            count[word] = 1
    return count
#Main 
sentence = 'this is a a a a sentence'
wordlist = sentence.split()
print (wordOccurence(wordlist))