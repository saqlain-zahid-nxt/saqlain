from connection import DB
db = DB()

query = """
    CREATE TABLE IF NOT EXISTS car (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT,
        modal TEXT,
        make INTEGER,
        price INTEGER
    )
"""

db.run(query)
