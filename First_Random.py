import random

print('Welcome to our Ice Cream Parlour!')

flavour= ["Strawberry", "Vanilla", "Chocolate", "Peanut", "Hazelnut", "Mint", "Corriander", "Green Chilly", "Coconut", "Fig", "Butterscotch", "Mixed fruit", "Litchi", "Pan", "Pistachio", "Almond", "Cucumber", "Guava"]
customer = ["Gargi", "Shruti", "Aman", "Nidhi", "Parul", "Shreya", "Mukul", "Aditi", "Riya", "Reet", "Prasoon", "Prateek", "Anurag","Asmika"]
rates= [150, 200, 120, 110, 300, 250, 170, 140, 210, 160]

random_rates = random.choice(rates)
random_flavour= random.choice(flavour)
random_customer = random.choice(customer)
random_flavour1= random.choice(flavour)
random_customer1 = random.choice(customer)

print()
print("Menu:")
for i in flavour:
    print(f"  {i}          {random_rates}")

print()
print()
print(f"Our Today's Special Ice-cream is {random_flavour}")
print(f"{random_customer} will eat {random_flavour} and {random_customer1} will eat {random_flavour1} ")
print()