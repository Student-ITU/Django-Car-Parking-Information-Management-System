#!/bin/bash

#COMMENT 

: '
COMMENT 
COMMENT 
COMMENT 
COMMENT 
COMMENT 
COMMENT'

#cat >> filefile.txt

: '
cat << EOF
This is line 1
This is line 2
This is line 3
EOF'

: '
count=10

if (( $count < 9 ))
then
	echo "Condition is true"
elif(( $count == 10 ))
then
	echo "Condition is ok"
else
	echo "Condition is false"
fi'


: '
for fruit in apple banana cherry
do
    echo "I like $fruit"
done'

# I like apple
# I like banana
# I like cherry 


: '
for i in {1..5}
do
    echo "Number: $i"
done'

# Number: 1
# Number: 2
# Number: 3
# Number: 4
# Number: 5



# bash script.sh se chalana 
: '
for i in {1..10..3}
do
    echo "Count: $i"
done'


# Count: 1
# Count: 4
# Count: 7
# Count: 10




: '
n=5
for (( i=1; i<=n; i++ ))
do
    echo "Iteration $i"
done'
# Iteration 1
# Iteration 2
# Iteration 3
# Iteration 4
# Iteration 5


: '
colors=("red" "green" "blue")
for color in "${colors[@]}"
do
    echo "Color: $color"
done'
# Color: red
# Color: green
# Color: blue


: '
count=1
for (( ; ; ))
do
    echo "Looping $count"
    ((count++))
	# Agar yeh neeche wale line na likhe to infinte loop chal jaye ga , warna break if 4>3
    # if [ $count -gt 3 ]; then
    #     break
    # fi
done'


# Switch statement
: '
option="start" # Gap nhi dalna = se pehle and baad warna chal nhi rha 
case $option in
  start)
    echo "Starting..."
    ;;
  stop)
    echo "Stopping..."
    ;;
  *)
    echo "Unknown"
    ;;
esac'



# While loop ->
# Aapko kisi numeric condition ke basis par loop chalana ho.
: '
(pwd)
a=7
while [ $a -gt 4 ]
do
  echo $a
  ((a--))
done
echo "Out of the loop"'


# Aap comparison operators (<, >, ==) aur math wale expressions lagana chahte ho
: '
i=0
while (( i < 5 ))
do
  echo $i
  ((i++))
done'


# Aapko file line by line read karni h

: '
while read line # line sirf aik var hai change kr sakte, read built in haiii
do
  echo $line
done < filefile.txt'


# UNTIL LOOP -> It runs until the condition becomes true. It's the opposite of a while loop, which runs as long as the condition is true.
#Infinite loop
: '
until false
do
  echo "looping"
done'

# 1 print 2 continue cz its even 3 print 4 continue it is even and at 5 it gets break
: '
count=1
until false
do
  if [[ $count -eq 5 ]]; 
	then break; fi
  if (( $count % 2 == 0 )); 
	then ((count++)); continue; fi
  echo $count
  ((count++))
done'

# The loop runs while both are false. It exits as soon as one becomes true. This is how logical || works inside an until. Jese he aik bhe condition true ho gaye condtition true ho jaye ge and boom sab stop
: '
n=1
sum=0
until [[ $n -gt 15 || $sum -gt 20 ]]
do
  sum=$((sum + n))
  echo "$n $sum"
  ((n++))
done'

# echo $0 $1 $2 $3 # Is se me ne cli me input dia and screen pe output nazar aya
# echo $0 $1 $2 $3  #0 Index pe file ka name ai ga 
# echo $0 $1 $2 $3 >> filefile.txt # Is se wo us file me chala gya jo screen pe input dia

: '
arr=("$@") #unlimited daal sakte array me 
echo ${arr[0]} ${arr[1]} ${arr[2]}
# echo ${arr[0]} ${arr[1]} ${arr[2]} >> filefile.txt  #Is trha krne se wo andar chala jaye ga file ke lakin sirf 3 he jaye ge
# echo $@  #Agar sare chate ho array me to yeh likh do warna jitne index do ge utne he print ho ge 
echo $#  #It will tell the length of the array'


# input 

: '
echo "Enter your name and age:"
read name age
echo "Name: $name, Age: $age" 
# echo "Name: $name, Age: $age" >> filefile.txt  #Agar file me likhna ho to ese '


: '
read -p "Enter name: " name
read -p "Enter city: " city
echo "$name lives in $city" '


# SEND DATA FROM ONE SCRIPT TO OTHER 
: '
MESSAGE="HELLO SAMEER DON"
export MESSAGE
./secondScript.sh '

# bash script.sh
# Message from script.sh is: HELLO SAMEER DON
# Tou run is ko he krna na ke dusre ko us ka code dekh lo yeh likha tha dusre file me, aik to wo bin wale line sab se uper jo likhte wo krna then x permission dene

# echo "Message from script.sh is: $MESSAGE"
: '
echo "Enter 1st string"
read st1

echo "enter 2nd string"
read st2

if [ "$st1" == "$st2" ]
then 
	echo "String Match"

else 
	echo "String Dont match"
fi'

: '
echo "Enter 1st string"
read st1

echo "enter 2nd string"
read st2

if [[ "$st1" < "$st2" ]] # \< ka matlab hota hai: "st1 is less than st2"
then 
	echo "St2 greater"

elif [[ "$st1" > "$st2" ]] # \> ka matlab hota hai: "st1 is greater than st2
then
	echo "St1 greater"

else 
	echo "Both are equal"
fi'


# string concatenation

: '
echo "Enter 1st string"
read st1
echo "Enter 2nd string"
read st2

c=$st1$st2 # string concatenation
echo $c' 


# Upper case

echo "Enter 1st string"
read st1
echo "Enter 2nd string"
read st2

echo ${st1^}
echo ${st1^l} # 1st letter capital
echo ${st1^^} # All letter capital


# HOW TO ADD 

# echo 31 + 32 not like this 

n1=2
n2=4
echo $((n1+n2)) # 6 -> Thats how we can add it
echo $ (expr $n1 + $n2)

