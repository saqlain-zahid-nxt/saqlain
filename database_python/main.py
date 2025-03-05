from cars import Car

car = Car()

while(True):
    print("\n\n------------------------------------")
    print("To add car press a")
    print("To list all cars press l")
    print("To list one car press o")
    print("To update car press u")
    print("To delete car press d")
    print("To terminate press t")
    
    print("------------------------------------\n")
    choice = input("Please enter your choice: ")
    print("------------------------------------\n\n")


    if choice.lower() == 'a':
        car.create_car()

    elif choice.lower() == 'l':
        car.display_all()

    elif choice.lower() == 'o':
        car.display_car()

    elif choice.lower() == 'u':
        car.update_car()

    elif choice.lower() == 'd':
        car.delete_car()

    elif choice.lower() == 't':
        break
    
    else:
        print("Invalid Choice")