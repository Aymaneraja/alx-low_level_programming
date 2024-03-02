#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if(number>100 and number<1000):
    if(number%100 > 5):
        print("The last sigit of" , number , "is" ,number%100,"and is greater than 5")
    elif(number%100 == 0) : 
        print("The last sigit of" , number , "is" ,number%100,"and is 0")
    else : 
        print("The last sigit of" , number , "is" ,number%100,"and is less than 6 and not 0")
elif(number<100 and number>10):
    if(number%100 > 5):
        print("The last sigit of" , number , "is" ,number%10,"and is greater than 5")
    elif(number%100 == 0) :
        print("The last sigit of" , number , "is" ,number%10,"and is 0")
    else :
        print("The last sigit of" , number , "is" ,number%10,"and is less than 6 and not 0")
else : 
    if(number > 5):
        print("The last sigit of" , number , "is" ,number,"and is greater than 5")
    elif(number == 0) :
        print("The last sigit of" , number , "is" ,number,"and is 0")
    else :
        print("The last sigit of" , number , "is" ,number,"and is less than 6 and not 0")
# YOUR CODE HERE
