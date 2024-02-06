

import tkinter as tk
from tkinter import messagebox


class MyGUI:
    def __init__(self):
        
        self.root = tk.Tk()
        
        self.label = tk.Label(self.root, text="Your Message", font=('Arial',18))
        self.label.pack(padx=10,pady=10)
        
        self.textbox = tk.Text(self.root ,height=5, font=('Arial',15))
        self.textbox.pack(padx=10,pady=10)
        
        self.check_state = tk.IntVar()
        
        self.check = tk.Checkbutton(self.root, text="Show MessageBox", font=('Arial',30), variable=self.check_state)
        self.check.pack(padx=10,pady=10)
        
        
        self.buttom = tk.Button(self.root, text="butom", font=('Arial',10), command=self.show_Message)
        self.buttom.pack(padx=10,pady=10)
        
        self.root.mainloop()
        
    def show_Message(self):
        if (self.check_state.get() == 0):
            print(self.textbox.get('1.0', tk.END))
        else:
          messagebox.showinfo(title="Message",message=self.textbox.get('1.0', tk.END))
MyGUI()