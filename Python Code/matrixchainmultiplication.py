def MMC():
    for c in range(2,len(R)):
        for r in range(1,len(R)-c+1):
            j=c+r-1
            M[r][j]=32676
            for k in range(r,j):
                q=M[r][k]+M[k+1][j]+(R[r-1]*R[k]*R[j])
                if(M[r][j]>q):
                    M[r][j]=q
    return M[1][len(R)-1]
R=[5,4,6,2,7]
n=len(R) #multiplication of 4 matrixes
M=[[0 for x in range(n)]for x in range(n)]
print("MINIMUM NUMBER OF MULTIPLICATION:",MMC())
