from tkinter import *
import math


def click(event):
    text=event.widget.cget("text")
    print(text)
    if text == "=":
        if scvalue.get().isdigit():
            value=int(scvalue.get())
        else:
            value=eval(scvalue.get())
        scvalue.set(value)
        screen.update()
    elif text == "C":
        scvalue.set("")
        screen.update()
    elif text =="+/-":
        scvalue.set("-"+scvalue.get())
        screen.update()
    else:
        scvalue.set(scvalue.get()+text)
        screen.update()


def button(inp,ro,co):
    b=Button(f,text=f"{inp}",font="licida 30 bold",padx=10,pady=10,background="#595959",foreground="white")
    b.grid(row=ro,column=co,padx=5,pady=5,sticky=EW)
    # (side=LEFT,padx=5,pady=5)
    b.bind("<Button-1>",click)


root = Tk()
root.geometry("360x650")
root.title("Calculator By Nilesh Malav")
root.configure(background="black")

scvalue=StringVar()
scvalue.set("")

f=Frame(root,bg="#404040")
screen=Entry(f,textvar=scvalue,font="lucida 40 bold",foreground="white",background="#262626")
screen.pack(fill=X,ipadx=10,ipady=5)
Button()
f.pack(fill="both")






f=Frame(root,bg="#404040")
button("C",1,1)
button("()",1,2)
button("%",1,3)
button("/",1,4)
f.pack(fill="both")


f=Frame(root,bg="#404040")
button(7,2,1)
button(8,2,2)
button(9,2,3)
button("*",2,4)
f.pack(fill="both")


f=Frame(root,bg="#404040")
button(4,3,1)
button(5,3,2)
button(6,3,3)
button("-",3,4)
f.pack(fill="both")


f=Frame(root,bg="#404040")
button(1,4,1)
button(2,4,2)
button(3,4,3)
button("+",4,4)
f.pack(fill="both")


f=Frame(root,bg="#404040")
button("+/-",5,1)
button(0,5,2)
button(".",5,3)
button("=",5,4)
f.pack(fill="both")


root.mainloop()
