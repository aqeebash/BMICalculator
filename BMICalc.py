def get_user_details():
    Name = str(input("\nEnter your name: "))
    Age = int(input("Enter your Age: "))
    Weight = float(input("Enter your weight in kg: "))
    Height = float(input("Enter your height in cm: "))
    return Name, Age, Weight, Height

def calculate_BMI(Height, Weight):
    Height = Height/100
    result = Weight/(Height**2)
    print(f"BMI: {result:.2f}")
    return result

no_of_users = int(input("Enter the number of users: "))

for i in range(no_of_users):
    Name, Age, Weight, Height = get_user_details()
    calculate_BMI(Height, Weight)
    





