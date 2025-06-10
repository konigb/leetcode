

#problem 1

def hello_world():
    print("Hello world!")


hello_world()

#problem 2

def todays_mood():
    mood = "😎"
    print("Today's mood: " + mood )

todays_mood()

#problem 3

def print_menu(menu):
    print("Lunch today is: " + menu)


pizza = "🍕"
print_menu(pizza)
print_menu("🍕")

#problem 4

def sum(a, b):
    return a + b

result = sum(13,27)
double = result * 2;
print(double)

#problem 5

def product(a,b):
    return a * b;

result = product(22,7)
print(result)

#problem 6

def classify_age(age):
    data = ""
    if(age >= 18):
        data = "adult"
    elif(age <= 18):
        data = "child"
    return data

output = classify_age(18)
print(output)
# output = classify_age(7)
# print(output)
# output = classify_age(50)
# print(output)


#problem 7

def what_time_is_it(hour):
    if(hour == 2):
        return "taco time 🌮"
    elif(hour == 12):
        return "peanut butter jelly time 🥪”
    else:
        return "nap time 😴"
    