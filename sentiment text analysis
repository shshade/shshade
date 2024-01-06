import nltk
from textblob import TextBlob
from newspaper import Article
nltk.download('punkt')

url = "https://time.com/6550164/neil-the-seal-tasmania-background-instagram-tiktok/"
article = Article(url)

article.download()

article.parse()
# removes html from article to make it understandable I think??

article.nlp()
# nlp stands for natural language processing = machine learning thing that lets computers understand human language

text = article.summary
print(text)

blob = TextBlob(text)
# creates text into textblob object

sentiment = blob.sentiment.polarity # -1 to 1 score, -1 negative sentiment, 1 positive sentiment
print(sentiment)

if sentiment < 1:
    print("text sentiment is sad asf its overall connotation is negative")
elif sentiment > -1:
    print("text sentiment is happy :D its overall connotation is positive")