from textblob import TextBlob

with open('whale.txt', 'r') as f:
    text = f.read()

blob = TextBlob(text)
sentiment = blob.sentiment.polarity
print(sentiment)

if sentiment == 0:
    print("what you typed is just plain neutral, put some conviction into it, won't you??")
if sentiment < 1:
    print("why are you sad just don't be sad. you typed something negative :(")
if sentiment > -1:
    print("I can see that you're happy. good for you, you typed something positive")
