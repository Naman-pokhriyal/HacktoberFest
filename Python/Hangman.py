import random
def hangman():
    list_of_words=['abruptly','absurd','abyss','affix','askew','avenue','awkward','axiom','azure','bagpipes','bandwagon','banjo','bayou','beekeeper','blitz','blizzard','boggle','bookworm','boxcar','boxful','buckaroo','buffalo','buffoon','transplant','triphthong','twelfth','twelfths','xylophone','yachtsman','yippee','yoked','youthful','yummy','zigzag','zigzagging','zilch','zipper','zodiac','zombie']
    word = random.choice(list_of_words)
    turns = 10
    guessmade = ''
    valid_entry = set("abcdefghijklmnopqrstuvwxyz")

    while len(word)>0:
        main_word = ""
        missed = 0

        for letter in word:
            if letter in guessmade:
                main_word = main_word+letter
            else:
                main_word = main_word+"_"


        if main_word == word:
            print(main_word)
            print("You Won the Game !!!!")
            break

        print("Guess the Word", main_word)
        guess = input()

        if guess in valid_entry:
            guessmade = guessmade+guess
        else:
            print("Enter Valid Characters")
            guess=input()

        if guess not in word:
            turns = turns-1

            if turns == 9:
                print("9 Turns Left!!!!")
                print("--------------------")
            if turns == 8:
                print("8 Turns Left!!!!")
                print("--------------------")
                print("          O         ")
            if turns == 7:
                print("7 Turns Left!!!!")
                print("--------------------")
                print("          O         ")
                print("          |         ")
            if turns == 6:
                print("6 Turns Left!!!!")
                print("--------------------")
                print("          O         ")
                print("          |         ")
                print("         /          ")
            if turns == 5:
                print("5 Turns Left!!!!")
                print("--------------------")
                print("          O         ")
                print("          |         ")
                print("         / \        ")
            if turns == 4:
                print("4 Turns Left!!!!")
                print("--------------------")
                print("         \O         ")
                print("          |         ")
                print("         / \        ")
            if turns == 3:
                print("3 Turns Left!!!!")
                print("--------------------")
                print("         \O/        ")
                print("          |         ")
                print("         / \        ")
            if turns == 2:
                print("2 Turns Left!!!!")
                print("--------------------")
                print("         \O/ |      ")
                print("          |         ")
                print("         / \        ")
            if turns == 1:
                print("This is Your Last Turn!! Hangman is Counting his Last Breath")
                print("--------------------")
                print("         \O/_|      ")
                print("          |         ")
                print("         / \        ")
            if turns == 0:
                print("You Lost the Game")
                print("You Killed a Good Man")
                print("The Word Was -- ",word)
                break
     
                
                




name = input("ENTER YOUR NAME -> ")
print("Welcome",name,"!")
print("-------------------------")
print("Try to Guess the Word in Less Than 10 Attempts")
hangman()
