# The following are the usernames:
for i in range(150):
    if i % 3:
        print("carlos")
    else:
        print("wiener")

# The following are the passwords:
with open("passwords.txt", 'r') as f:
    lines = f.readlines()

# i = 0
# for pwd in lines:
#     if i % 3:
#         print(pwd.strip('\n'))
#     else:
#         print("peter")
#         print(pwd.strip('\n'))
#     i = i + 1


i = 0
print("peter")  # Start with peter
for pwd in lines:
    print(pwd.strip('\n'))
    i += 1
    if i % 2 == 0:
        print("peter")