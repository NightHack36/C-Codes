q=[]
def ins1():
    ele=input("Enter the  element u want to insert: ")
    q.append(ele)
    print(q)

def rem1():
    if not q:
        print("Queue is empty")
    else:
        e=q.pop(0)
        print(e,"is deleted element")
        print(q)

def show():
    print(q)
    
while True:
    print("Enter ur choice 1.Enqueue,2.Dequeue,3.show,4.Quit")
    c=int(input("Enter ur choice"))
    if(c==1):
        ins1()
    elif(c==2):
        rem1()
    elif(c==3):
        show()
    elif(c==4):
        break
    else:
        print("Invalid choice")
