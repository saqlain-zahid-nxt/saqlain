import tkinter as tk
from tkinter import messagebox
from cars import Car

# Initialize the Car object
car = Car()

def add_car():
    car.create_car()
    messagebox.showinfo("Info", "Car added successfully")

def list_all_cars():
    all_cars = car.display_all()
    messagebox.showinfo("All Cars", all_cars if all_cars else "No cars available")

def list_one_car():
    car_id = car_id_entry.get()
    if car_id:
        single_car = car.display_car(car_id)
        messagebox.showinfo("Car Details", single_car if single_car else "Car not found")
    else:
        messagebox.showwarning("Warning", "Please enter a car ID")

def update_car():
    car_id = car_id_entry.get()
    if car_id:
        car.update_car(car_id)
        messagebox.showinfo("Info", "Car updated successfully")
    else:
        messagebox.showwarning("Warning", "Please enter a car ID")

def delete_car():
    car_id = car_id_entry.get()
    if car_id:
        car.delete_car(car_id)
        messagebox.showinfo("Info", "Car deleted successfully")
    else:
        messagebox.showwarning("Warning", "Please enter a car ID")

# Create the main application window
app = tk.Tk()
app.title("Car Management System")
app.geometry("400x300")

# Create buttons and labels
car_id_label = tk.Label(app, text="Car ID (for specific operations):")
car_id_label.pack(pady=5)

car_id_entry = tk.Entry(app)
car_id_entry.pack(pady=5)

add_car_button = tk.Button(app, text="Add Car", command=add_car)
add_car_button.pack(pady=5)

list_all_cars_button = tk.Button(app, text="List All Cars", command=list_all_cars)
list_all_cars_button.pack(pady=5)

list_one_car_button = tk.Button(app, text="List One Car", command=list_one_car)
list_one_car_button.pack(pady=5)

update_car_button = tk.Button(app, text="Update Car", command=update_car)
update_car_button.pack(pady=5)

delete_car_button = tk.Button(app, text="Delete Car", command=delete_car)
delete_car_button.pack(pady=5)

exit_button = tk.Button(app, text="Exit", command=app.quit)
exit_button.pack(pady=5)

# Run the application
app.mainloop()
