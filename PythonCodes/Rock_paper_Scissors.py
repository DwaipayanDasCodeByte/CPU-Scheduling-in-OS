import random
# Rock
rock = """
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
"""

# Paper
paper ="""
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
"""

# Scissors
scissors = """
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
"""
#0, 1 ,2
#0 for rock,1 for paper,2 for scissor
game_images = [rock, paper, scissors]    #A list
user_choice = int(input("Enter your choice: "))
print(game_images[user_choice])   #user choice is the index
computer_choice = random.randint(0, 2)
print(game_images[computer_choice])
print(f"computer choice: {computer_choice}")
if user_choice == 1 and computer_choice == 0:
    print("You win!")
elif user_choice == 0 and computer_choice == 1:
    print("You lose!")
elif user_choice == 2 and computer_choice == 0:
    print("You lose!")
elif user_choice == 0 and computer_choice == 2:
    print("You win!")
elif user_choice == 2 and computer_choice == 1:
    print("You win!")
elif user_choice == 1 and computer_choice == 2:
    print("You lose!")
else:
    print("Draw!")


