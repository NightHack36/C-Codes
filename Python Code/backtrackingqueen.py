def initialize(n):
    for key in ['queen','row','col','rwtose','swtose']:
        board[key]={}
    for i in range(n):
        board['queen'][i]=-1
        board['row'][i]=0
        board['col'][i]=0
    for i in range(-(n-1),n):
        board['rwtose'][i]=0
    for i in range(2*n-1):
        board['swtose'][i]=0

def free(i,j):
    return(
    board['row'][i]==0 and
    board['col'][j]==0 and
    board['rwtose'][j-i]==0 and
    board['swtose'][j+i]==0
)

def addqueen(i,j):
    board['queen'][i]=j
    board['row'][i]=1
    board['col'][j]=1
    board['rwtose'][j-i]=1
    board['swtose'][j+i]=1

def undoqueen(i,j):
    board['queen'][i]=-1
    board['row'][i]=0
    board['col'][j]=0
    board['rwtose'][j-i]=0
    board['swtose'][j+i]=0

def printboard():
    for row in sorted(board['queen'].keys()):
        print((row,board['queen'][row]),end=" ")
    print(" ")


def placequeen(i):
    n=len(board['queen'].keys())
    for j in range(n):
        if free(i,j):
            addqueen(i,j)
            if i==n-1:
                printboard()#remove for single solution
                # return(True)
            else:
                extendsoln=placequeen(i+1)
            # if(extendsoln):
            #     return True
            # else:
            undoqueen(i,j)
    # else:
    #     return(False)

board={}
n=int(input("How many queen?"))
initialize(n)
placequeen(0)
# if placequeen(0):
#     printboard()
