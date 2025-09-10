#!/bin/bash
echo "My Bash Script file!!"

FIRST_NAME=JohnCena
echo $FIRST_NAME


echo What is your first name?
read FIRST_NAME
echo What is your last name?
read LAST_NAME
echo Hello $FIRST_NAME $LAST_NAME

echo "Hello $1, welcome!"
echo "Your age is $2"

if [ "$1" = sameer ]; then
	echo "Sameer is a good boy"
elif [ "$1" = help ]; then
	echo "Demanding help"
else 
	echo "Nothing bruh!"
fi


sport[0]=football
sport[1]=cricket
sport[2]=hockey
sport[3]=basketball

echo "${sport[@]}"

unset sport[2]
echo "${sport[@]}"



echo "Enter a name: "
read name


case $name in
    "sameer"|"ali"|"ahmed")
        echo "You entered a male name"
        ;;
    "sara"|"ayesha")
        echo "You entered a female name"
        ;;
    *)
        echo "Unknown name"
        ;;
esac



MY_ARRAY=(one two three four)
echo ${MY_ARRAY[@]} 
echo ${MY_ARRAY[2]} 



functionOne () {
echo "Welcome to first function"
}
functionOne


functionTwo() {
echo "Welcome to function number $1"
}
functionTwo 2

functionThree () {
local sum=$(($1 + $2))
echo "Welcome to function $sum"
}
functionThree 1 2 

functionFour () {
return 4 
}
functionFour
echo "Welcome to function $?"

functionFive () {
return $(($1 + $2))
}
functionFive 3 2
echo "Welcome to function $?"



fruit1="Apple"
functionSix () {
local fruit2="Banana"
fruit3="Cherry"
echo "This is global fruit can be accessed inside function and outside, this time we are accessing it in function $fruit1"
echo "This is local fruit, which cant be accessed outside, accessing inside function $fruit2"
echo "This is also a global fruit because we havent write local beside its name, accessing inside function $fruit3"
}

functionSix

echo "This is global fruit, accessing outside $fruit1"
echo "This is local fruit, which cant be accessed outside $fruit2"
echo "This is also a global fruit because we havent write local beside its name, accessing it outside $fruit3"


echo -e "Hello\n\nWorld"

echo "Salam"
echo -e "\n\n" 
echo "Dunya"


#!/bin/bash

echo "Bye"
echo "" 
echo "Kal milte"


echo "Cricket"
echo -e "\n" 
echo "Khelne?"

