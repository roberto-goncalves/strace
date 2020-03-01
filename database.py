#!/usr/bin/python
import MySQLdb

# Connect
db = MySQLdb.connect(host="0.0.0.0",
                     user="root",
                     passwd="abc",
                     db="information_schema")

cursor = db.cursor()
# Execute SQL select statement
print('begin first select')
cursor.execute("SELECT * FROM INFORMATION_SCHEMA.COLUMNS")
print('end first select')
db.close()
print('begin second select')
cursor.execute("SELECT * FROM INFORMATION_SCHEMA.COLUMNS")
print('end second select')