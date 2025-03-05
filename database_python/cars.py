import create_table
from connection import DB


class Car(DB):
    def create_car(self):
        name = input("Car Name Please: ")
        modal = input("Car Modal Please: ")
        make = input("Car Make Please: ")
        price = input("Car Price Please: ")
        
        query = f"""
            INSERT INTO car
            (name, modal, make, price)
            VALUES ('{name}', '{modal}', {make}, {price})
        """

        self.create(query)
    
    def display_car(self):
        id = input("Car ID Please: ")
        
        query = f"""
            SELECT * FROM car WHERE id = {id}
        """

        cars = self.list(query)

        for row in cars:
            text = f"Car ID: {row[0]} \t Car Name: {row[1]} \t Car Modal: {row[2]} \t Car Make: {row[3]} \t Car Price: {row[4]}"
            print(text)

    def display_all(self):
        query = f"""
            SELECT * FROM car
        """

        cars = self.list(query)

        for row in cars:
            text = f"Car ID: {row[0]} \t Car Name: {row[1]} \t Car Modal: {row[2]} \t Car Make: {row[3]} \t Car Price: {row[4]}"
            print(text)
    
    def update_car(self):
        id = input("Car ID Please: ")
        name = input("New Name Please: ")
        modal = input("New Car Modal Please: ")
        make = input("New Car Make Please: ")
        price = input("New Car Price Please: ")

        query = f"""
            UPDATE car SET name = '{name}', modal = '{modal}', make = {make}, price = {price} WHERE id = {id} 
        """

        self.update(query)

    def delete_car(self):
        id = input("Car ID Please: ")
        
        query = f"""
            DELETE FROM car WHERE id = {id} 
        """

        self.delete(query)