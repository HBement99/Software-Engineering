# Author: Hunter Bement
# This is my Integration project, RPG Based game
# COP1500 : Intro to Computer Science
def main():
    print('Welcome to life in 2084!')  # A post-apocalyptic journey
    print("05", "24", "2084", sep="/")
    # Here I am using the "sep=" operator to insert the exact date
    # the game takes place.

    ans: str = (input('Would you like to play?\n Yes/No '))

    if ans.lower() == 'yes':
        print(
            "Good Morning")
        # Player Wakes up to an abandoned underground shelter.
    elif ans.lower() == 'no':
        exit()

    print("\n")

    print('Time to create a character.')
    name = input("name ")

    print(name * 10)
    # This shows that the "*" is used for multiplication but if you
    # put it next to a variable it will print the variable as many
    # times as stated.

    print("\n")

    print('My name is ' + "Hunter Bement")
    # This is an addition symbol but is also known as concatenate
    # symbol, which allows two strings together to form a sentence
    print(100 - 50)  # Shows the use of the subtraction symbol

    # initial player statistics
    print("Here are your players stats.")
    print("health_points = 100")
    print("stamina = 100")
    # player statistics by choice
    stat_points = 15
    print("Dont exceed a total of 15 stat_point total among all your "
          "stats combined")
    strength = int(input("Enter a value for strength that is less "
                         "than or equal to 15: "))
    while not (strength < 15 and strength > 0):
        print("Invalid input. Please enter a value between 0 and 15")
        strength = int(input("Enter a value for strength that is less "
                             "than or equal to 15: "))
    if not (strength >= stat_points or strength <= 0):
        print("You entered a valid strength value!")

    print("\n")

    print('Here is an example of floor division in use: ',
          strength // 3)
    # This is floor division, it gives the result of division minus
    # the remainder

    vitality = int(input("Enter a value for vitality that is less "
                         "than or equal to 15: "))
    while not (vitality < 15 and vitality > 0):
        print("Invalid input. Please enter a value between 0 and 15")
        vitality = int(input("Enter a value for vitality that is less "
                             "than or equal to 15: "))
    if not (vitality >= stat_points or vitality <= 0):
        print("You entered a valid vitality value!")

    print("\n")

    print('Here is an example of squaring or using an exponent of the '
          'number which was input ', vitality ** 5)
    # This is an example of an exponentiation, and it gives the
    # product of two variables multiplied by itself another.

    intelligence = int(input('Enter a value for your intelligence that '
                             'is less than or equal to 15: '))
    while not (intelligence < 15 and intelligence > 0):
        print("Invalid input. Please enter a value between 0 and 15")
        intelligence = int(input("Enter a value for intelligence that "
                                 "is less than or equal to 15: "))
    if not (intelligence >= stat_points or intelligence <= 0):
        print("You entered a valid intelligence value!")

    print("\n")

    print('Here is an example of modulus in use: ', intelligence % 2)
    # This is modulus, it gives the result of division's remainder
    print(name, "Time to leave and enter the wilderness")  # The
    # player leaves shelter and proceeds on adventure.

    print("\n")

    control = True
    while control:
        ans: str = (input(
            "You came to a fork in the road which way do you choose?"
            "Right/Left: "))

        if ans.lower() == "left":
            print("A random traveler comes and greets you")
            control = False
            # Bypasses the rest of the functions and statement in the
            # while and continues on to the rest of the program
        if ans.lower() == "right":
            print(name, "You come across a giant.")
            ans: str = (input(
                "Would you like to run away or fight?\n run "
                "away/fight: "))

            if ans.lower() == "run":
                print("you returned to the fork in the road.")
            if ans.lower() == "fight":
                print("Thank you for Playing",
                      end=", Hope you had a good time")
                exit()

    print("\n")

    print(
        "The traveler seems really nice, and decides to ask you a "
        "question")
    control = True  # received help from Andrew and helped modify code
    while control:
        ans: str = (input(
            "You are offered a choice of weapons to buy, would you "
            "like a weapon?\n yes/no: "))

        if ans.lower() == "no":
            print(
                "It was nice speaking with you, be safe on your "
                "travels.")
            control = False

        else:
            print("You are offered a variety of weapons "
                  "from the traveler")
            print("He asks, which one do you want?")

            weapons = ["pistol", "shotgun", "rifle", "explosives",
                       "rocket launcher"]
            print(
                len(weapons))  # prints the amount of strings within
            # the list

            for weapons in weapons:
                print(
                    weapons)  # prints a list of the items within the
                # weapons variable
                print(
                    len(weapons))
                # prints out how long each individual string is
                # within the list when put into for loop.

            print("\n")
            control = True
            while control:
                ans: weapons = (input(
                    "Choose your choice of weapon: pistol, shotgun, "
                    "rifle, bomb, rocket launcher.\n "
                    "pistol/shotgun/rifle/bomb/rocket launcher"))
                if ans.lower() == "pistol":
                    print(
                        "That's a great choice, I hope you have a "
                        "nice day.")
                    control = False
                elif ans.lower() == "shotgun":
                    print("Traveler says " + "Don't Hurt yourself")
                    control = False
                elif ans.lower() == "rifle":
                    print(
                        "Traveler says that's great for long range, "
                        "Happy Hunting",
                        name)
                    control = False
                elif ans.lower() == "rocket launcher":
                    print("Traveler tells you now don't"
                          "blow yourself up.")
                    control = False
                elif ans.lower() == "bomb":
                    print(
                        "Traveler tells you, ""Only push the red "
                        "button when you need to, just like this!")
                    print("The Bomb Explodes, BOOM!! ")
                    control = False
                    exit()

    print("\n")

    print("You say thank you to the traveler and continue "
          "on the Journey.")

    print("\n")

    for x in range(1, 5):
        print(x)
        # This range function will result in printing numbers
        # starting with 1 and ending with 5 without actually printing
        # the number 5

    print("\n")

    function1("you have survived for a week in the wilderness.")

    print('Unfortunately you do not have much food.',
          "Fortunately, you have made many friends which helped you "
          "along "
          "the way and have given you supplies.")


def function1(game):
    print("Hunter " + game)
    # Defines the function chosen (game) which I am able to call
    # later in the program.

    h = 524  # received help from W3 Schools.
    print(h > 511 or 814 < h)
    # Returns True due to Var. H being greater than 511 and less than
    # 814.

    print("\n")

    h = 550
    print(not (h > 500 or 575 < h))
    # It would return True, but due to the not operator it switches
    # it to False

    print("\n")

    h = 520
    print(
        h > 510 and 530 < h)
    # It would only return True if both statements in the print
    # statement are True.

    print("\n")

    h = 5
    b = 24
    print(h != b)
    #  this would print True because "var h" is not equal (!=) "var b"

    print("\n")


main()
