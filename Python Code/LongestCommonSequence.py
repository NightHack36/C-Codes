def LCS(u,v):
    L=[[0 for x in range(0,len(v)+1)]for x in range(0,len(u)+1)]
    for r in range(len(u)+1):
        L[r][len(v)]=0
    for c in range(len(v)+1):
        L[len(u)][c]=0
    for c in range(len(v)-1,-1,-1):
        for r in range(len(u)-1,-1,-1):
            if(u[r]==v[c]):
                L[r][c]=1+L[r+1][c+1]
            else:
                L[r][c]=max(L[r+1][c],L[r][c+1])
    return(L[0][0])

u="abcdefghij"
v="ecdgi"
print("LENGTH OF THE LONGEST COMMON SUBSEQUENCE:",LCS(u,v))
