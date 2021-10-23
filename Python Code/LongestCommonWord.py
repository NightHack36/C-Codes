def LCW(u,v):
    L=[[0 for x in range(0,len(v)+1)]for x in range(0,len(u)+1)]
    for r in range(len(u)+1):
        L[r][len(v)]=0
    for c in range(len(v)+1):
        L[len(u)][c]=0
    max=0
    for c in range(len(v)-1,-1,-1):
        for r in range(len(u)-1,-1,-1):
            if(u[r]==v[c]):
                L[r][c]=1+L[r+1][c+1]
            else:
                L[r][c]=0
            if L[r][c]>max:
                max=L[r][c]
    return(max)

u="secret"
v="secretary"
print("LENGTH OF THE LONGEST COMMON WORD:",LCW(u,v))
