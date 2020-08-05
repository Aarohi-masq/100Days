print("Enter the cost of meal: ")
cost_of_meal = input()
tax = 0.5
print(f"tax percentage: {tax}%")
tip = 2
print(f"tip percentage: {tip}%")
dollars_meal = float(cost_of_meal.replace("$",""))
print(dollars_meal)
dollars_meal = dollars_meal + (dollars_meal * tax/100)
total = dollars_meal + (dollars_meal*tip/100)
print(f"So your total amount to be paid is equal to {total:.2f}")