src=[input() for _ in range(3)]
c=[[k[i] for i in range(3)] for k in src]
dst=[c[i][i] for i in range(3)]
print(''.join(dst))
