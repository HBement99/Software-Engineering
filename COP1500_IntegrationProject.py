# Author: Hunter Bement
# This is my Integration project, RPG Based game
# COP1500 : Intro to Computer Science
def main():
    print('Welcome to life in 2084!')  # A post-apocalyptic journey
    print("05", "24", "2084", sep="/")
    # Here I am using the "sep=" operator to insert the exact date the game takes place.

    ans: str = (input('Would you like to play?\n Yes/No '))

    if ans.lower() == 'yes':
        print("Good Morning")  # Player Wakes up to an abandoned underground shelter.
    elif ans.lower() == 'no':
        exit()

    print("\n")

    print('Time to create a character.')
    name = input("name ")

    print(name * 10)
    # This shows that the "*" is used for multiplication but if you put it next to a variable it will print the variable
    # as many times as stated.

    print("\n")

    print('My name is ' + "Hunter Bement")
    # This is an addition symbol but is also known as concatenate symbol, which allows two strings
    # together to form a sentence
    print(100 - 50)  # Shows the use of the subtraction symbol

    # initial player statistics
    hp = 100
    stamina = 100
    # player statistics by choice
    stat_points = 15
    print("Dont exceed a total of 15 stat_point total among all your stats combined")
    strength = int(input("Enter a value for strength that is less than or equal to 15"))
    if not (strength >= stat_points or strength <= 0):
        print("You entered a valid strength value!")

    print("\n")

    print('Here is an example of floor division in use: ', strength // 3)
    # This is floor division, it gives the result of division minus the remainder

    vitality = int(input("Enter a value for vitality that is less than or equal to 15"))
    if "vitality < stat_points and vitality > 0":
        print("you have entered a valid value for vitality")

    print("\n")

    print("Here is an example of multiplication ", vitality * 5)
    # This is an example of multiplication, and it gives the product of two variables multiplied by one another.

    intelligence = int(input("Enter a value for your intelligence that is less than or equal to 15"))
    if "intelligence < stat_points and intelligence > 0":
        print("you have a valid value of stat_points for intelligence")

    print("\n")

    print('Here is an example of modulus in use: ', intelligence % 2)
    # This is modulus, it gives the result of division's remainder
    print(name, "Time to leave and enter the wilderness")  # The player leaves shelter and proceeds on adventure.

    print("\n")

    control = True
    while control:
        ans: str = (input("You came to a fork in the road which way do you choose? Right/Left "))

        if ans.lower() == "left":
            print("A random traveler comes and greets you")
            control = False
            # Bypasses the rest of the functions and statement in the while and continues on to the rest of the program
        if ans.lower() == "right":
            print(name, "You come across a giant.")
            ans: str = (input("Would you like to run away or fight?\n run away/fight"))

            if ans.lower() == "run":
                print("you returned to the fork in the road.")
            if ans.lower() == "fight":
                print("Thank you for Playing", end=", Hope you had a good time")
                exit()

    print("\n")

    print("The traveler seems really nice, and decides to ask you a question")
    control = True
    while control:
        ans: str = (input("You are offered a choice of weapons to buy, would you like a weapon?\n yes/no"))

        if ans.lower() == "no":
            print("It was nice speaking with you, be safe on your travels.")
            control = False

        else:
            print("You are offered a variety of weapons from the traveler")
            print("He asks, which one do you want?")

            weapons = ["pistol", "shotgun", "rifle", "explosives", "rocket launcher"]
            print(len(weapons))  # prints the amount of strings within the list

            for weapons in weapons:
                print(weapons)  # prints a list of the items within the weapons variable
                print(
                    len(weapons))  # prints out how long each individual string is within the list when put into the "for loop".

            print("\n")
            control = True
            while control:
                ans: weapons = (input("Choose your choice of weapon: pistol, shotgun, rifle, bomb, rocket launcher.\n "
                                      "pistol/shotgun/rifle/bomb/rocket launcher"))
                if ans.lower() == "pistol":
                    print("That's a great choice, I hope you have a nice day.")
                    control = False
                elif ans.lower() == "shotgun":
                    print("Traveler says " + "Don't Hurt yourself")
                    control = False
                elif ans.lower() == "rifle":
                    print("Traveler says that's great for long range, Happy Hunting", name)
                    control = False
                elif ans.lower() == "rocket launcher":
                    print("Traveler tells you now don't blow yourself up.")
                    control = False
                elif ans.lower() == "bomb":
                    print("Traveler tells you, ""Only push the red button when you need to, just like this!")
                    print("The Bomb Explodes, BOOM!! ")
                    control = False
                    exit()

    print("\n")

    print("You say thank you to the traveler and continue on the Journey.")

    print("\n")

    for x in range(1, 5):
        print(x)
        # This range function will result in printing numbers starting with 1 and ending with 5 without
        # actually printing the number 5

    print("\n")

    function1("you have survived for a week in the wilderness.")

    print('Unfortunately you do not have much food.', "Fortunately, you have made many friends which helped you along "
                                                      "the way and have given you supplies.")


def function1(game):  # Defines the function chosen which I am able to call later in the program.
    print("Hunter " + game)


main()
