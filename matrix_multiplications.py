N =[[8, 9, 4],
   [6, 2, 3],
   [9, 5, 7]]

M =[[2, 8, 4],
   [11, 5, 13],
   [4, 3, 15,]]

result = [[0, 0, 0],
         [0, 0, 0],
         [0, 0, 0]]
#iterate through rows of N
for i in range(len(N)):
for j in range(len(M[0])):
for k in range(len(Y)):
result [i][j] += N[i][k]*M[k][j]
for r in result:
print(r)
