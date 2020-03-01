def diagonal_difference(mat):
 l=0
 r=0
 for i in range (0,N):
    l =l+mat[i][i]
    r =r+mat[i][N-i-1]
   
    return abs(l - r)

mat= []
N =int(input())
for i in range(N):
    mat.append(map(int, raw_input().split()))

print (diagonal_difference(mat))
