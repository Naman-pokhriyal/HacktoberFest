print('Welcome to AskPython Quiz')
answer=input('Are you ready to play the Quiz ? (yes/no) :')
score=0
total_questions=10

if answer.lower()=='yes':
    answer=input('Question 1: What is the biggest Country in the world?')
    if answer.lower()=='russia':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :russia is the correct answer')


    answer=input('Question 2: What is the smallest country in the world?')
    if answer.lower()=='vatican city':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :vatican city is the correct answer')

    answer=input('Question 3: What is the country with most population?')
    if answer.lower()=='china':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :china is the correct answer')
        
    answer=input('Question 4: Which country has the worst internet?')
    if answer.lower()=='yemen':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :yemen is the correct answer')
        
    answer=input('Question 5: Who invented the idea about static electricity?')
    if answer.lower()=='benjamin franklin':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :benjamin franklin is the correct answer')

    answer=input('Question 6: Who invented the idea about computer?')
    if answer.lower()=='charles babbage':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :charles babbage is the correct answer')

    answer=input('Question 7: What is the latest version of windows operating system?')
    if answer.lower()=='windows 11':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :windows 11 is the correct answer')

    answer=input('Question 8: Who is owner of apple and macintosh companies?')
    if answer.lower()=='tim cook':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :tim cook is the correct answer')

    answer=input('Question 9:  what is known as the rooftop of the world?')
    if answer.lower()=='tibet':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :tibet is the correct answer')

    answer=input('Question 10:  What is the most used programming language?')
    if answer.lower()=='javascript':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :javascript is the correct answer')









print('Thankyou for Playing this small quiz game, you attempted',score,"questions correctly!")
mark=(score/total_questions)*100
print('Marks obtained:',mark)
print('BYE!')

print('I am in Github as RedEdge967. if you can watch this project and star too.')

answer=input('Did you enjoy playing this quiz? (yes/no) :')
score=0
print('Bye bye bye')
