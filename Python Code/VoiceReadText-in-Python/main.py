# *************************************************************
# Python program to show
# how to convert text to speech
# *************************************************************


# def speak(str):
#     from win32com.client import Dispatch
#     speak=Dispatch("SAPI.Spvoice")
#     speak.Speak(str)
# # speak('''hello sir i am jarvis i will help you to make iron man''')


def speak(str):
    import pyttsx3

    # Initialize the converter
    converter = pyttsx3.init()

    # Sets speed percent
    # Can be more than 100
    converter.setProperty('rate', 150)
    # Set volume 0-1
    converter.setProperty('volume', 1)

    # Program will not continue
    # until all speech is done talking
    converter.runAndWait()

    voice_id = "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_ZIRA_11.0"

    # Use female voice
    converter.setProperty('voice', voice_id)

    converter.runAndWait()

    converter.say("Hello I am maccy")
    converter.say(str)
    converter.runAndWait()


# import requests
# r=requests.get("https://newsapi.org/v2/top-headlines?sources=techcrunch&apiKey=f1957be72ff9411d96a5fbfedf8d54bd")
# print(r.text)
with open("text.txt", encoding="utf8") as a:
    str1 = a.read()
    speak(str1)

# speak('''i will help
#     you to make iron man''')
