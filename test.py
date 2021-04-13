  
import tkinter as tk 
import mysql.connector
mydb=mysql.connector.connect(host="localhost", user="root", password="PikuPiku1*", database="project")
#from tkinter import ttk
from functools import partial
mycursor=mydb.cursor()
root=tk.Tk() 
  
# setting the windows size 
root.geometry("600x400") 
   
# declaring string variable 
# for storing name and password 
gmail = tk.StringVar()
address=tk.StringVar()
name_var=tk.StringVar() 
passw_var=tk.StringVar() 
  
   
# defining a function that will 
# get the name and password and  
# print them on the screen 
def submit(): 
    gmail_id = gmail.get()
    name=name_entry.get() 
    password=passw_var.get() 
    add= address.get()
      
    print("The name is : " + name) 
    print("The password is : " + password) 
    print(add)
    print(gmail_id)
    address.set("") 
    gmail.set("")     
    name_var.set("") 
    passw_var.set("") 
      
# name using widget Label 
gmail_label = tk.Label(root, text = 'gmail_id', 
                      font=('calibre', 
                            10, 'bold')) 
   
# creating a entry for input 
# name using widget Entry 
gmail_entry = tk.Entry(root, 
                      textvariable = gmail, 
                      font=('calibre',10,'normal')) 
                      
   
# creating a label for 
# name using widget Label 
address_label = tk.Label(root, text = 'Address', 
                      font=('calibre', 
                            10, 'bold')) 
   
# creating a entry for input 
# name using widget Entry 
address_entry = tk.Entry(root, 
                      textvariable = address, 
                      font=('calibre',10,'normal')) 
    
# name using widget Label 
name_label = tk.Label(root, text = 'Name', 
                      font=('calibre', 
                            10, 'bold')) 
   
# creating a entry for input 
# name using widget Entry 
name_entry = tk.Entry(root, 
                      textvariable = name_var, 
                      font=('calibre',10,'normal')) 
   
# creating a label for password 
passw_label = tk.Label(root, 
                       text = 'Password', 
                       font = ('calibre',10,'bold')) 
   
# creating a entry for password 
passw_entry=tk.Entry(root, 
                     textvariable = passw_var, 
                     font = ('calibre',10,'normal'), 
                     show = '*') 
   
# creating a button using the widget  
# Button that will call the submit function  
sub_btn=tk.Button(root,text = 'Submit', 
                  command = submit) 
   
# placing the label and entry in 
# the required position using grid 
# method 
name_label.grid(row=0,column=0) 
name_entry.grid(row=0,column=1) 
passw_label.grid(row=1,column=0) 
passw_entry.grid(row=1,column=1) 
gmail_entry.grid(row=2,column=1)
gmail_label.grid(row=2,column=0)
address_entry.grid(row=3,column=1)
address_label.grid(row=3,column=0)
sub_btn.grid(row=6,column=1) 
   
# performing an infinite loop  
# for the window to display 
root.mainloop() 
