# Match statement mere me chal nhi hy python version higher maang rha 
# status = "won"

# match status:
#     case "won":
#         print("Team won the match!")
#     case "lost":
#         print("Team lost the match.")
#     case "draw":
#         print("The match was a draw.")
#     case _:
#         print("Unknown match status.")


try:
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
    result = num1 / num2
except ZeroDivisionError: # yeh built in ha 
    print("Error: Cannot divide by zero.")
except ValueError: # yeh agar string enter kr dia tab chale ga uper wala agar 0 se divide kr dia tab chale ga
    print("Error: Invalid input. Please enter numbers only.")
else: # Tab chale ga agar koi bhe except na chale
    print(f"Result: {result}")
finally:
    print("Program execution finished.")  # Finally na bhe lkhein tab bhe to chale ga he na phir kyun likhte waja suno agar ham try me yah except me return kr dete kuch to woh to return ho jata kisi function me or neeche na chalta lakain agar finally likha hota to return hone ke baad bhe finally chale ga, agar na likha hota to na chalta 






age = int(input("Enter your age: "))

if age < 0:
    raise ValueError("Age cannot be negative!") # raise Python mein manually exception (error) throw karne ke liye use hota hai, agar hum apne condition ke hisaab se error dikhana chahein.

print("Your age is:", age)
