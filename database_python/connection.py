import sqlite3

class DB:
    def __init__(self):
        db_path = "./db/data.db"
        self.conn = sqlite3.connect(db_path)
        self.cursor = self.conn.cursor()
    
    def run(self, query):
        self.cursor.execute(query)
        self.conn.commit()

    def create(self, query):
        self.cursor.execute(query)
        self.conn.commit()
    
    def list(self, query):
        self.cursor.execute(query)
        return self.cursor.fetchall()

    def update(self, query):
        self.cursor.execute(query)
        self.conn.commit()
    
    def delete(self, query):
        self.cursor.execute(query)
        self.conn.commit()