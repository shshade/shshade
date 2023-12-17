answers = 0
pleiades = 0
andromeda = 0
comaberenices = 0
sombrero = 0

# declared variables set the default amount of answers
# each variable will increase depending on user's corresponding answers

print("Which of my favorite Messier objects are you and why?")
print("Note: this is based off of literally nothing but vibes")
print("=====================================================")

print("What's your favorite whale and why?")
print("1: Orca whales because they're powerful 💪")
print("2: Beluga whales because of their melon head")
print("3: Narwhal because narwhals, narwhals, swimming in the ocean, causing a commotion")
print("4: I don't have one")

answer = input('Enter your answer using the numbers: ')
if answer == 1:
    answers + 1
    comaberenices + 1
    print("Generic reason but okay ig...")
if answer == 2:
    answers + 1
    andromeda + 1
    print("Good answer. Probably the correct answer")
if answer == 3:
    answers + 1
    sombrero + 1
    print("How does it feel to know that with each generation, this song will continue to die out?")
if answer == 4:
    answers + 1
    pleiades + 1
    print("Get one.")
