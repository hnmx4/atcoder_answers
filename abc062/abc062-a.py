grp = [[1, 3, 5, 7, 8, 10, 12], [4, 6, 9, 11], [2]]

i = list(map(int, input().split()))
flg = False
for g in grp:
    if (i[0] in g) and (i[1] in g):
        flg = True
        break
    else:
        continue

print('Yes') if flg else print('No')
