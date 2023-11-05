import tkinter as tk
import Homepage as hp


class Class_Name:
    def __init__(self):
        root = tk.Tk()
        root.title("Echo")
        root.geometry("1300x700")
        root.iconbitmap("icons/logo.ico")

        self.black = "#000000"
        self.white = "#FFFFFF"
        self.red = "#FF0000"
        self.green = "#00FF00"
        self.blue = "#0000FF"
        self.lightGreen = "#00FFC8"
        self.darkGrey = "#1E1E1E"

        self.font = "Inter"
        self.size = 40

        # navBar = Menu(root)
        # root.config(menu=navBar)
        # navBar.add_cascade(label="Home")
        # navBar.add_cascade(label="Features")
        # navBar.add_cascade(label="About")
        # navBar.add_cascade(label="Start Now!")
        # navBar.add_cascade(label="Exit", command=root.quit)

        navbar_frame = tk.Frame(root, bg=self.darkGrey, height=150)
        navbar_frame.pack(fill="x")

        # Create buttons for different pages
        echoLabel = tk.Label(navbar_frame, text="Echo", bg=self.darkGrey, fg=self.white)
        homeLabel = tk.Label(navbar_frame, text="Home", bg=self.darkGrey, fg=self.white)
        homeLabel.bind("<Button-1>", lambda e: 
        echoLabel.pack(side="left")
        homeLabel.pack()
        # hoemB = tk.Button(navbar_frame, text="Home")
        featuresB = tk.Button(navbar_frame, text="Features")
        aboutB = tk.Button(navbar_frame, text="About")
        startB = tk.Button(navbar_frame, text="Start Now!")

        # Pack the buttons in the frame
        # hoemB.pack()
        featuresB.pack()
        aboutB.pack()

        startB.pack(side="right")

        root.mainloop()
        
        


test = Class_Name()
