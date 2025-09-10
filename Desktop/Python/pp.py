# FILE I/0

# READING

f = open("file.txt") # by default read he krta write krne to w likhte
data = f.read()
print(data)
f.close

#WRITING

st = "okokokok"
f = open("myfile.txt", "w")
f.write(st)
f.close()

#Append

string = "End pe jor de ga us file ke append word"

f = open ("file.txt", "a")
f.write (string)
f.close ()


#With and read

# Faida yeh hai file close krne ke zrurat nhi pare ge manually, auto he kam ho jaye ga
with open("geeks.txt", "r") as file:
    content = file.read()
    print(content)


# with and write with new line

string = "Yeh line nayi line me likhi jayegi\n"

with open("file.txt", "a") as f:
    f.write(string)

# Har bar jab tum likhne jao, string ke end me \n lagao — file me nayi line shuru ho jaayegi.

# Without \n kya hoga?
# f.write("Hello")
# f.write("World")
# HelloWorld

# but 
# f.write("Hello\n")
# f.write("World\n")
# Hello 
# World

#Question

with open("file.txt", "r") as f:
    content = f.read()

if "twinkle" in content:
    print("Twinkle found")
else:
    print("Twinkle not found")


# Bilkul bhai — direct file me jo kuch bhi hota hai, wo sab kuch text (string) ke form me hota hai, chahe wo numbers hi kyu na ho.