from random import randrange
n   =   randrange(1000)
print('Guess a Number :')
while True:

    v   =   int(input())
    if  n   ==  v:
        print("You win!")
        break
    if n>v and (n-v)<=10:
        print('Bigger and closer')
    elif n>v:
        print('Bigger')
    elif n<v and (v-n)<=10:
        print('Smaller and closer')
    elif n<v:
        print('Smaller')
