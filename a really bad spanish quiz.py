# im pretty sure if you run this in the terminal and finish the quiz something is wrong so I might fix it or not but idk
correct = 0
wrong = 0 

print('¡Time to learn Español!')
print('======================')

print('Q1) ¿Como se dice aburrido o aburrida en ingles?')

print(' 1) Board')
print(' 2) Boring')
print(' 3) ¡A burrito!')

answer = int(input('Enter answer (1-3): '))
if answer == 1:
    wrong += 1
    print('No comprendo..')
elif answer == 2:
    correct += 1
    print('¡Muy bien!')
elif answer == 3:
    wrong += 1
    print('No comprendo..')
else:
    print('¿Habla español o no?')

print('Q2) What are the two meanings of the verb form hay?')

print(' 1) There is/there are')
print(' 2) Hay is a cognate and means what it looks like it does')
print(' 3) Today')

answer = int(input('Enter answer (uno-tres): '))
if answer == 1:
    correct += 1
    print('Chévere!')
elif answer == 2:
    wrong += 1
    print('Qué?')
elif answer == 3:
    wrong += 1
    print('No sé..')
else:
    print ('Estoy muy confundido..')

print ('Q3) What is noun adjective agreement in Spanish?')

print(' 1) Adjectives do not need to agree with nouns')
print(' 2) There is no such rule in Spanish')
print('  3) Adjectives must agree with gender and number')

answer = int(input('Enter answer (uno-tres): '))
if answer == 1:
    wrong += 1
    print ('Equivocado..')
if answer == 2:
    wrong += 1
    print('Erm what the flip')
if answer == 3:
    correct += 1
    print('¡Bien!')
else:
    print('UNO, DOS, O TRES. ¡NO OTHER NUMEROS!')


if wrong == 0:
    print('Wow! Youre good at Spanish!')
    print('Score is 100%!')
    if wrong == 1:
        print('You just gotta lock in and youre good')
        print('Score is 66%')
if wrong == 2:
        print('You REALLY have to lock in')
        print('Score is 33%..')
if wrong == 3:
    print('Oh lord')
    print('Score is 0% BYEEEEEE')

