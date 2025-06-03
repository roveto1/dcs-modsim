import tkinter as tk
import os
os.environ["DISPLAY"] = ":1"

# Create the main application window
root = tk.Tk()
root.title("Simple Tkinter App")
root.geometry("300x150")  # Width x Height
root.attributes("-fullscreen", True)

# Create a label widget
label = tk.Label(root, text="Hello, Tkinter!", font=("Arial", 14))
label.pack(pady=20)

# Create a button that closes the application
close_button = tk.Button(root, text="Close", command=root.destroy)
close_button.pack()

# Run the application
root.mainloop()
