

import tkinter as tk

root = tk.Tk()

root.geometry("800x500")
root.title("First GUI app")

label = tk.Label(root, text="Ich bin der Katze", font=('Arial', 24))
label.pack(padx=20,pady=20)

textbox = tk.Text(root, height=3, font=('arial', 16))
textbox.pack(padx=10)


""" 

myentry = tk.Entry(root)
myentry.pack() 

"""

ButtomFramme = tk.Frame(root)

ButtomFramme.columnconfigure(0,weight=1)
ButtomFramme.columnconfigure(1,weight=1)
ButtomFramme.columnconfigure(2,weight=1)


buttom1 = tk.Button(ButtomFramme, text= "1", font= ('Verdana', 16))
buttom1.grid(row=0,column=0,sticky=tk.W + tk.E)

buttom2 = tk.Button(ButtomFramme, text= "2", font= ('Verdana', 16))
buttom2.grid(row=0,column=1,sticky=tk.W + tk.E)

buttom3 = tk.Button(ButtomFramme, text= "3", font= ('Verdana', 16))
buttom3.grid(row=0,column=2,sticky=tk.W + tk.E)

buttom4 = tk.Button(ButtomFramme, text= "4", font= ('Verdana', 16))
buttom4.grid(row=1,column=0,sticky=tk.W + tk.E)

buttom5 = tk.Button(ButtomFramme, text= "5", font= ('Verdana', 16))
buttom5.grid(row=1,column=1,sticky=tk.W + tk.E)

buttom6 = tk.Button(ButtomFramme, text= "6", font= ('Verdana', 16))
buttom6.grid(row=1,column=2,sticky=tk.W + tk.E)

buttom7 = tk.Button(ButtomFramme, text= "7", font= ('Verdana', 16))
buttom7.grid(row=2,column=0,sticky=tk.W + tk.E)

buttom8 = tk.Button(ButtomFramme, text= "8", font= ('Verdana', 16))
buttom8.grid(row=2,column=1,sticky=tk.W + tk.E)

buttom9 = tk.Button(ButtomFramme, text= "9", font= ('Verdana', 16))
buttom9.grid(row=2,column=2,sticky=tk.W + tk.E)


ButtomFramme.pack(fill='x')

root.mainloop()